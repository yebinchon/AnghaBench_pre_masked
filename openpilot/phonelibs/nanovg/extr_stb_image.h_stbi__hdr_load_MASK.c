
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float stbi_uc ;
typedef int stbi__context ;


 int FUNC_0 (float*) ;
 int VAR_0 ;
 float* FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,float*,int) ;
 int FUNC_4 (float*,float*,int) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,char**,int) ;

__attribute__((used)) static float *FUNC_10(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   char VAR_6[VAR_0];
   char *VAR_7;
   int VAR_8 = 0;
   int VAR_9, VAR_10;
   stbi_uc *VAR_11;
   float *VAR_12;
   int VAR_13;
   unsigned char VAR_14, VAR_15;
   int VAR_16, VAR_17, VAR_18, VAR_19,VAR_20, VAR_21;



   if (FUNC_7(FUNC_5(VAR_1,VAR_6), "#?RADIANCE") != 0)
      return FUNC_1("not HDR", "Corrupt HDR image");


   for(;;) {
      VAR_7 = FUNC_5(VAR_1,VAR_6);
      if (VAR_7[0] == 0) break;
      if (FUNC_7(VAR_7, "FORMAT=32-bit_rle_rgbe") == 0) VAR_8 = 1;
   }

   if (!VAR_8) return FUNC_1("unsupported format", "Unsupported HDR format");



   VAR_7 = FUNC_5(VAR_1,VAR_6);
   if (FUNC_8(VAR_7, "-Y ", 3)) return FUNC_1("unsupported data layout", "Unsupported HDR format");
   VAR_7 += 3;
   VAR_10 = (int) FUNC_9(VAR_7, &VAR_7, 10);
   while (*VAR_7 == ' ') ++VAR_7;
   if (FUNC_8(VAR_7, "+X ", 3)) return FUNC_1("unsupported data layout", "Unsupported HDR format");
   VAR_7 += 3;
   VAR_9 = (int) FUNC_9(VAR_7, ((void*)0), 10);

   *VAR_2 = VAR_9;
   *VAR_3 = VAR_10;

   if (VAR_4) *VAR_4 = 3;
   if (VAR_5 == 0) VAR_5 = 3;


   VAR_12 = (float *) FUNC_6(VAR_10 * VAR_9 * VAR_5 * sizeof(float));



   if ( VAR_9 < 8 || VAR_9 >= 32768) {

      for (VAR_17=0; VAR_17 < VAR_10; ++VAR_17) {
         for (VAR_16=0; VAR_16 < VAR_9; ++VAR_16) {
            stbi_uc VAR_22[4];
           main_decode_loop:
            FUNC_3(VAR_1, VAR_22, 4);
            FUNC_4(VAR_12 + VAR_17 * VAR_9 * VAR_5 + VAR_16 * VAR_5, VAR_22, VAR_5);
         }
      }
   } else {

      VAR_11 = ((void*)0);

      for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17) {
         VAR_19 = FUNC_2(VAR_1);
         VAR_20 = FUNC_2(VAR_1);
         VAR_13 = FUNC_2(VAR_1);
         if (VAR_19 != 2 || VAR_20 != 2 || (VAR_13 & 0x80)) {


            stbi_uc VAR_23[4];
            VAR_23[0] = (stbi_uc) VAR_19;
            VAR_23[1] = (stbi_uc) VAR_20;
            VAR_23[2] = (stbi_uc) VAR_13;
            VAR_23[3] = (stbi_uc) FUNC_2(VAR_1);
            FUNC_4(VAR_12, VAR_23, VAR_5);
            VAR_16 = 1;
            VAR_17 = 0;
            FUNC_0(VAR_11);
            goto main_decode_loop;
         }
         VAR_13 <<= 8;
         VAR_13 |= FUNC_2(VAR_1);
         if (VAR_13 != VAR_9) { FUNC_0(VAR_12); FUNC_0(VAR_11); return FUNC_1("invalid decoded scanline length", "corrupt HDR"); }
         if (VAR_11 == ((void*)0)) VAR_11 = (stbi_uc *) FUNC_6(VAR_9 * 4);

         for (VAR_18 = 0; VAR_18 < 4; ++VAR_18) {
            VAR_16 = 0;
            while (VAR_16 < VAR_9) {
               VAR_14 = FUNC_2(VAR_1);
               if (VAR_14 > 128) {

                  VAR_15 = FUNC_2(VAR_1);
                  VAR_14 -= 128;
                  for (VAR_21 = 0; VAR_21 < VAR_14; ++VAR_21)
                     VAR_11[VAR_16++ * 4 + VAR_18] = VAR_15;
               } else {

                  for (VAR_21 = 0; VAR_21 < VAR_14; ++VAR_21)
                     VAR_11[VAR_16++ * 4 + VAR_18] = FUNC_2(VAR_1);
               }
            }
         }
         for (VAR_16=0; VAR_16 < VAR_9; ++VAR_16)
            FUNC_4(VAR_12+(VAR_17*VAR_9 + VAR_16)*VAR_5, VAR_11 + VAR_16*4, VAR_5);
      }
      FUNC_0(VAR_11);
   }

   return VAR_12;
}
