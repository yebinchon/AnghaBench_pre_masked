
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; double tv_usec; } ;


 double FUNC_0 (double) ;

void
FUNC_1(double VAR_0, struct timeval* VAR_1)
{
  double VAR_2 = FUNC_0(VAR_0);
  VAR_1->tv_sec = VAR_2;
  VAR_1->tv_usec = (VAR_0-VAR_2)*1000000;
}
