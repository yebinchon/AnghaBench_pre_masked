
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long tv_sec; unsigned long tv_nsec; } ;



__attribute__((used)) static inline void FUNC_0(struct timespec *VAR_0, unsigned long VAR_1)
{
 VAR_0->tv_sec += VAR_1 / 1000;
 VAR_0->tv_nsec += (VAR_1 % 1000) * 1000000;
 if (VAR_0->tv_nsec > 1000000000) {
  VAR_0->tv_sec += 1;
  VAR_0->tv_nsec -= 1000000000;
 }
}
