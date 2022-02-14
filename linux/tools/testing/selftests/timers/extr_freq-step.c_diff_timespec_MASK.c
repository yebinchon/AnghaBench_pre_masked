
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; int tv_nsec; } ;



__attribute__((used)) static double FUNC_0(struct timespec *VAR_0, struct timespec *VAR_1)
{
 return VAR_0->tv_sec - VAR_1->tv_sec + (VAR_0->tv_nsec - VAR_1->tv_nsec) / 1e9;
}
