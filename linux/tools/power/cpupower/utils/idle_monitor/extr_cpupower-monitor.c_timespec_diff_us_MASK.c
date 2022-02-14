
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;



long long FUNC_0(struct timespec VAR_0, struct timespec VAR_1)
{
 struct timespec VAR_2;
 if ((VAR_1.tv_nsec - VAR_0.tv_nsec) < 0) {
  VAR_2.tv_sec = VAR_1.tv_sec - VAR_0.tv_sec - 1;
  VAR_2.tv_nsec = 1000000000 + VAR_1.tv_nsec - VAR_0.tv_nsec;
 } else {
  VAR_2.tv_sec = VAR_1.tv_sec - VAR_0.tv_sec;
  VAR_2.tv_nsec = VAR_1.tv_nsec - VAR_0.tv_nsec;
 }
 return (VAR_2.tv_sec * 1000000) + (VAR_2.tv_nsec / 1000);
}
