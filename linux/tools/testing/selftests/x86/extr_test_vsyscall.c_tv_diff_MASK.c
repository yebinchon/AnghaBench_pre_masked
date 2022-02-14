
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



__attribute__((used)) static double FUNC_0(const struct timeval *VAR_0, const struct timeval *VAR_1)
{
 return (double)(VAR_0->tv_sec - VAR_1->tv_sec) +
  (double)((int)VAR_0->tv_usec - (int)VAR_1->tv_usec) * 1e-6;
}
