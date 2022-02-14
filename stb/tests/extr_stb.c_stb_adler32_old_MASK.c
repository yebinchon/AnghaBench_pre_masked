
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int stb_uchar ;



stb_uint FUNC_0(stb_uint VAR_0, stb_uchar *VAR_1, stb_uint VAR_2)
{
   const stb_uint VAR_3 = 65521;
   stb_uint VAR_4 = VAR_0 & 0xffff;
   stb_uint VAR_5 = VAR_0 >> 16;

   while (VAR_2-- > 0) {
      VAR_4 += *VAR_1++; if (VAR_4 > VAR_3) VAR_4 -= VAR_3;
      VAR_5 += VAR_4 ; if (VAR_5 > VAR_3) VAR_5 -= VAR_3;
   }
   return (VAR_5 << 16) + VAR_4;
}
