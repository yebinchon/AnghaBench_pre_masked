
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static double
FUNC_1(double VAR_0, double VAR_1, double VAR_2)
{
 if (!FUNC_0(VAR_1) && !FUNC_0(VAR_2))
 {





  if (FUNC_0(VAR_0))
   return 0.5;

  return 1.0 - (VAR_2 - VAR_0) / (VAR_2 - VAR_1);
 }
 else if (FUNC_0(VAR_1) && !FUNC_0(VAR_2))
 {




  return 1.0;
 }
 else if (FUNC_0(VAR_1) && FUNC_0(VAR_2))
 {

  return 0.0;
 }
 else
 {
  return 0.5;
 }
}
