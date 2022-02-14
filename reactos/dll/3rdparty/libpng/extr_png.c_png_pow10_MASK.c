
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static double
FUNC_0(int VAR_1)
{
   int VAR_2 = 0;
   double VAR_3 = 1;




   if (VAR_1 < 0)
   {
      if (VAR_1 < VAR_0) return 0;
      VAR_2 = 1; VAR_1 = -VAR_1;
   }

   if (VAR_1 > 0)
   {

      double VAR_4 = 10;
      do
      {
         if (VAR_1 & 1) VAR_3 *= VAR_4;
         VAR_4 *= VAR_4;
         VAR_1 >>= 1;
      }
      while (VAR_1 > 0);

      if (VAR_2 != 0) VAR_3 = 1/VAR_3;
   }


   return VAR_3;
}
