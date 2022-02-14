
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint64 ;
typedef int stb_uint ;
typedef unsigned char stb_uchar ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char*,int*) ;

int FUNC_6(stb_uchar VAR_0[20], char *VAR_1)
{
   int VAR_2;
   stb_uint64 VAR_3=0;
   unsigned char VAR_4[128];

   FILE *VAR_5 = FUNC_4(VAR_1, "rb");
   stb_uint VAR_6[5];

   if (VAR_5 == ((void*)0)) return 0;

   VAR_6[0] = 0x67452301;
   VAR_6[1] = 0xefcdab89;
   VAR_6[2] = 0x98badcfe;
   VAR_6[3] = 0x10325476;
   VAR_6[4] = 0xc3d2e1f0;

   for(;;) {
      int VAR_7 = FUNC_2(VAR_4, 1, 64, VAR_5);
      if (VAR_7 == 64) {
         FUNC_5(VAR_4, VAR_6);
         VAR_3 += VAR_7;
      } else {
         int VAR_8 = 64;

         VAR_3 += VAR_7;

         VAR_4[VAR_7++] = 0x80;


         if (VAR_7 + 8 > 64)
            VAR_8 = 128;


         FUNC_3(VAR_4+VAR_7, 0, VAR_8-8-VAR_7);

         VAR_2 = VAR_8 - 8;
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 53);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 45);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 37);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 29);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 21);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 13);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 >> 5);
         VAR_4[VAR_2++] = (stb_uchar) (VAR_3 << 3);
         FUNC_0(VAR_2 == VAR_8);
         FUNC_5(VAR_4, VAR_6);
         if (VAR_8 == 128)
            FUNC_5(VAR_4+64, VAR_6);
         else
            FUNC_0(VAR_8 == 64);
         break;
      }
   }
   FUNC_1(VAR_5);

   for (VAR_2=0; VAR_2 < 5; ++VAR_2) {
      VAR_0[VAR_2*4 + 0] = VAR_6[VAR_2] >> 24;
      VAR_0[VAR_2*4 + 1] = VAR_6[VAR_2] >> 16;
      VAR_0[VAR_2*4 + 2] = VAR_6[VAR_2] >> 8;
      VAR_0[VAR_2*4 + 3] = VAR_6[VAR_2] >> 0;
   }

   return 1;
}
