
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(double VAR_0)
{
 int VAR_1 = 100;
 double VAR_2 = 10.0;

 if (VAR_0 >= 10.0)
  return VAR_0;
 while (VAR_1--) {
  if (VAR_0 >= VAR_2)
   return VAR_2;
  VAR_2 = VAR_2 / 2.0;
 }
 return VAR_0;
}
