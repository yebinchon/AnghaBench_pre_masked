
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; double tv_usec; } ;



double
FUNC_0(struct timeval* VAR_0)
{
  double VAR_1 = VAR_0->tv_sec;

  return VAR_1+(VAR_0->tv_usec)/1000000.0;
}
