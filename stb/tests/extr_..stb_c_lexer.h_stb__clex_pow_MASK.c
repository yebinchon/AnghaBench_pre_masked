
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(double VAR_0, unsigned int VAR_1)
{
   double VAR_2=1;
   for ( ; VAR_1; VAR_1 >>= 1) {
      if (VAR_1 & 1)
         VAR_2 *= VAR_0;
      VAR_0 *= VAR_0;
   }
   return VAR_2;
}
