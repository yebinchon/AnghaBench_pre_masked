
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int stb_uchar ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(stb_uchar *VAR_0, stb_uint VAR_1[5])
{
   int VAR_2;
   stb_uint VAR_3,VAR_4,VAR_5,VAR_6,VAR_7;
   stb_uint VAR_8[80];

   for (VAR_2=0; VAR_2 < 16; ++VAR_2)
      VAR_8[VAR_2] = FUNC_1(&VAR_0[VAR_2*4]);
   for (VAR_2=16; VAR_2 < 80; ++VAR_2) {
      stb_uint VAR_9;
      VAR_9 = VAR_8[VAR_2-3] ^ VAR_8[VAR_2-8] ^ VAR_8[VAR_2-14] ^ VAR_8[VAR_2-16];
      VAR_8[VAR_2] = (VAR_9 + VAR_9) | (VAR_9 >> 31);
   }

   VAR_3 = VAR_1[0];
   VAR_4 = VAR_1[1];
   VAR_5 = VAR_1[2];
   VAR_6 = VAR_1[3];
   VAR_7 = VAR_1[4];
   VAR_2=0;
   for (; VAR_2 < 20; ++VAR_2) { stb_uint VAR_10 = (VAR_3 << 5) + (VAR_3 >> 27) + (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + VAR_7 + (0x5a827999) + VAR_8[VAR_2]; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = (VAR_4 << 30) + (VAR_4 >> 2); VAR_4 = VAR_3; VAR_3 = VAR_10; };
   for (; VAR_2 < 40; ++VAR_2) { stb_uint VAR_11 = (VAR_3 << 5) + (VAR_3 >> 27) + (VAR_4 ^ VAR_5 ^ VAR_6) + VAR_7 + (0x6ed9eba1) + VAR_8[VAR_2]; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = (VAR_4 << 30) + (VAR_4 >> 2); VAR_4 = VAR_3; VAR_3 = VAR_11; };
   for (; VAR_2 < 60; ++VAR_2) { stb_uint VAR_12 = (VAR_3 << 5) + (VAR_3 >> 27) + ((VAR_4 & VAR_5) + (VAR_6 & (VAR_4 ^ VAR_5))) + VAR_7 + (0x8f1bbcdc) + VAR_8[VAR_2]; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = (VAR_4 << 30) + (VAR_4 >> 2); VAR_4 = VAR_3; VAR_3 = VAR_12; };
   for (; VAR_2 < 80; ++VAR_2) { stb_uint VAR_13 = (VAR_3 << 5) + (VAR_3 >> 27) + (VAR_4 ^ VAR_5 ^ VAR_6) + VAR_7 + (0xca62c1d6) + VAR_8[VAR_2]; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = (VAR_4 << 30) + (VAR_4 >> 2); VAR_4 = VAR_3; VAR_3 = VAR_13; };



   VAR_1[0] += VAR_3;
   VAR_1[1] += VAR_4;
   VAR_1[2] += VAR_5;
   VAR_1[3] += VAR_6;
   VAR_1[4] += VAR_7;
}
