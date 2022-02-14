
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TINF_DATA ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static unsigned int FUNC_1(TINF_DATA *VAR_0, int VAR_1, int VAR_2)
{
   unsigned int VAR_3 = 0;


   if (VAR_1)
   {
      unsigned int VAR_4 = 1 << (VAR_1);
      unsigned int VAR_5;

      for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5 *= 2)
         if (FUNC_0(VAR_0)) VAR_3 += VAR_5;
   }

   return VAR_3 + VAR_2;
}
