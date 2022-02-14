
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef scalar_t__ stb_uchar ;



stb_uint FUNC_0(stb_uint VAR_0, stb_uchar *VAR_1, stb_uint VAR_2)
{
   const unsigned long VAR_3 = 65521;
   unsigned long VAR_4 = VAR_0 & 0xffff, VAR_5 = VAR_0 >> 16;
   unsigned long VAR_6, VAR_7;

   VAR_6 = VAR_2 % 5552;
   while (VAR_2) {
      for (VAR_7=0; VAR_7 + 7 < VAR_6; VAR_7 += 8) {
         VAR_4 += VAR_1[0], VAR_5 += VAR_4;
         VAR_4 += VAR_1[1], VAR_5 += VAR_4;
         VAR_4 += VAR_1[2], VAR_5 += VAR_4;
         VAR_4 += VAR_1[3], VAR_5 += VAR_4;
         VAR_4 += VAR_1[4], VAR_5 += VAR_4;
         VAR_4 += VAR_1[5], VAR_5 += VAR_4;
         VAR_4 += VAR_1[6], VAR_5 += VAR_4;
         VAR_4 += VAR_1[7], VAR_5 += VAR_4;

         VAR_1 += 8;
      }

      for (; VAR_7 < VAR_6; ++VAR_7)
         VAR_4 += *VAR_1++, VAR_5 += VAR_4;

      VAR_4 %= VAR_3, VAR_5 %= VAR_3;
      VAR_2 -= VAR_6;
      VAR_6 = 5552;
   }
   return (VAR_5 << 16) + VAR_4;
}
