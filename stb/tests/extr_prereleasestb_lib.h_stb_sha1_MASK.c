
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef unsigned char stb_uchar ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int*) ;

void FUNC_2(stb_uchar VAR_0[20], stb_uchar *VAR_1, stb_uint VAR_2)
{
   unsigned char VAR_3[128];
   stb_uint VAR_4, VAR_5, VAR_6;
   int VAR_7;

   stb_uint VAR_8[5];

   VAR_8[0] = 0x67452301;
   VAR_8[1] = 0xefcdab89;
   VAR_8[2] = 0x98badcfe;
   VAR_8[3] = 0x10325476;
   VAR_8[4] = 0xc3d2e1f0;







   VAR_4 = VAR_2 & ~63;


   if (((VAR_2+9) & ~63) == VAR_4) {

      VAR_4 -= 64;
   }

   VAR_5 = VAR_4 + 128;


   FUNC_0(VAR_4 + 128 >= VAR_2+9);
   FUNC_0(VAR_4 < VAR_2 || VAR_2 < 64-9);

   VAR_6 = 0;
   if (VAR_4 > VAR_2)
      VAR_6 = (stb_uint) - (int) VAR_4;

   for (; VAR_4 + VAR_6 < VAR_2; ++VAR_6)
      VAR_3[VAR_6] = VAR_1[VAR_4 + VAR_6];
   VAR_3[VAR_6++] = 0x80;
   while (VAR_6 < 128-5)
      VAR_3[VAR_6++] = 0;

   VAR_3[VAR_6++] = VAR_2 >> 29;
   VAR_3[VAR_6++] = VAR_2 >> 21;
   VAR_3[VAR_6++] = VAR_2 >> 13;
   VAR_3[VAR_6++] = VAR_2 >> 5;
   VAR_3[VAR_6++] = VAR_2 << 3;
   FUNC_0(VAR_6 == 128 && VAR_4 + VAR_6 == VAR_5);

   for (VAR_6=0; VAR_6 < VAR_5; VAR_6 += 64) {
      if (VAR_6+64 >= VAR_4+64)
         FUNC_1(&VAR_3[VAR_6 - VAR_4], VAR_8);
      else
         FUNC_1(&VAR_1[VAR_6], VAR_8);
   }

   for (VAR_7=0; VAR_7 < 5; ++VAR_7) {
      VAR_0[VAR_7*4 + 0] = VAR_8[VAR_7] >> 24;
      VAR_0[VAR_7*4 + 1] = VAR_8[VAR_7] >> 16;
      VAR_0[VAR_7*4 + 2] = VAR_8[VAR_7] >> 8;
      VAR_0[VAR_7*4 + 3] = VAR_8[VAR_7] >> 0;
   }
}
