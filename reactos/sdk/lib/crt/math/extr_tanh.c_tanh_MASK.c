
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

double FUNC_1(double VAR_0)
{
  if (VAR_0 > 50)
    return 1;
  else if (VAR_0 < -50)
    return -1;
  else
  {
    const double VAR_1 = FUNC_0(VAR_0);
    const double VAR_2 = 1.0/VAR_1;
    return (VAR_1 - VAR_2) / (VAR_1 + VAR_2);
  }
}
