
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

double FUNC_1(double VAR_0)
{
 if(VAR_0 >= 0.0)
 {
   const double VAR_1 = FUNC_0(VAR_0);
   return (VAR_1 - 1.0/VAR_1) / 2.0;
 }
 else
 {
   const double VAR_2 = FUNC_0(-VAR_0);
   return (1.0/VAR_2 - VAR_2) / 2.0;
 }
}
