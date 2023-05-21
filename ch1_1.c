#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern int erron;

int main() {
	
	if(access("text.txt", F_OK) == -1) {
		printf("errno=%d\n", errno);
	}
}
