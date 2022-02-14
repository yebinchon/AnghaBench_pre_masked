
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; long tv_sec; } ;



__attribute__((used)) static inline void FUNC_0(struct timeval VAR_0, struct timeval VAR_1, struct timeval *VAR_2)
{
 VAR_2->tv_usec = VAR_0.tv_usec - VAR_1.tv_usec;
 if (VAR_2->tv_usec < 0L) {
  VAR_0.tv_sec--;
  VAR_2->tv_usec += 1000000L;
 }
 VAR_2->tv_sec = VAR_0.tv_sec - VAR_1.tv_sec;
 if (VAR_2->tv_sec < 0L) {
  VAR_2->tv_sec++;
  VAR_2->tv_usec -= 1000000L;
 }
}
