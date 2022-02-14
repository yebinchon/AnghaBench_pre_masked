
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi__context ;


 int* FUNC_0 (int*,int,int,int,int) ;
 int* FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static stbi_uc *FUNC_7(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   int VAR_5;
   int VAR_6, VAR_7;
   int VAR_8, VAR_9, VAR_10, VAR_11;
   int VAR_12;
   int VAR_13,VAR_14;
   stbi_uc *VAR_15;


   if (FUNC_3(VAR_0) != 0x38425053)
      return FUNC_1("not PSD", "Corrupt PSD image");


   if (FUNC_2(VAR_0) != 1)
      return FUNC_1("wrong version", "Unsupported version of PSD image");


   FUNC_6(VAR_0, 6 );


   VAR_6 = FUNC_2(VAR_0);
   if (VAR_6 < 0 || VAR_6 > 16)
      return FUNC_1("wrong channel count", "Unsupported number of channels in PSD image");


   VAR_14 = FUNC_3(VAR_0);
   VAR_13 = FUNC_3(VAR_0);


   VAR_12 = FUNC_2(VAR_0);
   if (VAR_12 != 8 && VAR_12 != 16)
      return FUNC_1("unsupported bit depth", "PSD bit depth is not 8 or 16 bit");
   if (FUNC_2(VAR_0) != 3)
      return FUNC_1("wrong color format", "PSD is not in RGB color format");


   FUNC_6(VAR_0,FUNC_3(VAR_0) );


   FUNC_6(VAR_0, FUNC_3(VAR_0) );


   FUNC_6(VAR_0, FUNC_3(VAR_0) );





   VAR_7 = FUNC_2(VAR_0);
   if (VAR_7 > 1)
      return FUNC_1("bad compression", "PSD has an unknown compression format");


   VAR_15 = (stbi_uc *) FUNC_5(4 * VAR_13*VAR_14);
   if (!VAR_15) return FUNC_1("outofmem", "Out of memory");
   VAR_5 = VAR_13*VAR_14;





   if (VAR_7) {
      FUNC_6(VAR_0, VAR_14 * VAR_6 * 2 );


      for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
         stbi_uc *VAR_16;

         VAR_16 = VAR_15+VAR_8;
         if (VAR_8 >= VAR_6) {

            for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_16 += 4)
               *VAR_16 = (VAR_8 == 3 ? 255 : 0);
         } else {

            VAR_10 = 0;
            while (VAR_10 < VAR_5) {
               VAR_11 = FUNC_4(VAR_0);
               if (VAR_11 == 128) {

               } else if (VAR_11 < 128) {

                  VAR_11++;
                  VAR_10 += VAR_11;
                  while (VAR_11) {
                     *VAR_16 = FUNC_4(VAR_0);
                     VAR_16 += 4;
                     VAR_11--;
                  }
               } else if (VAR_11 > 128) {
                  stbi_uc VAR_17;


                  VAR_11 ^= 0x0FF;
                  VAR_11 += 2;
                  VAR_17 = FUNC_4(VAR_0);
                  VAR_10 += VAR_11;
                  while (VAR_11) {
                     *VAR_16 = VAR_17;
                     VAR_16 += 4;
                     VAR_11--;
                  }
               }
            }
         }
      }

   } else {




      for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
         stbi_uc *VAR_18;

         VAR_18 = VAR_15 + VAR_8;
         if (VAR_8 >= VAR_6) {

            stbi_uc VAR_19 = VAR_8 == 3 ? 255 : 0;
            for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_18 += 4)
               *VAR_18 = VAR_19;
         } else {

            if (VAR_12 == 16) {
               for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_18 += 4)
                  *VAR_18 = (stbi_uc) (FUNC_2(VAR_0) >> 8);
            } else {
               for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_18 += 4)
                  *VAR_18 = FUNC_4(VAR_0);
            }
         }
      }
   }

   if (VAR_4 && VAR_4 != 4) {
      VAR_15 = FUNC_0(VAR_15, 4, VAR_4, VAR_13, VAR_14);
      if (VAR_15 == ((void*)0)) return VAR_15;
   }

   if (VAR_3) *VAR_3 = 4;
   *VAR_2 = VAR_14;
   *VAR_1 = VAR_13;

   return VAR_15;
}
