
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi__uint8 ;
typedef int stbi ;


 int* FUNC_0 (int*,int,int,int,int) ;
 int* FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static stbi_uc *FUNC_8(stbi *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   int VAR_5;
   int VAR_6, VAR_7;
   int VAR_8, VAR_9, VAR_10, VAR_11;
   int VAR_12,VAR_13;
   stbi__uint8 *VAR_14;


   if (FUNC_3(VAR_0) != 0x38425053)
      return FUNC_1("not PSD", "Corrupt PSD image");


   if (FUNC_2(VAR_0) != 1)
      return FUNC_1("wrong version", "Unsupported version of PSD image");


   FUNC_7(VAR_0, 6 );


   VAR_6 = FUNC_2(VAR_0);
   if (VAR_6 < 0 || VAR_6 > 16)
      return FUNC_1("wrong channel count", "Unsupported number of channels in PSD image");


   VAR_13 = FUNC_3(VAR_0);
   VAR_12 = FUNC_3(VAR_0);


   if (FUNC_2(VAR_0) != 8)
      return FUNC_1("unsupported bit depth", "PSD bit depth is not 8 bit");
   if (FUNC_2(VAR_0) != 3)
      return FUNC_1("wrong color format", "PSD is not in RGB color format");


   FUNC_7(VAR_0,FUNC_3(VAR_0) );


   FUNC_7(VAR_0, FUNC_3(VAR_0) );


   FUNC_7(VAR_0, FUNC_3(VAR_0) );





   VAR_7 = FUNC_2(VAR_0);
   if (VAR_7 > 1)
      return FUNC_1("bad compression", "PSD has an unknown compression format");


   VAR_14 = (stbi_uc *) FUNC_6(4 * VAR_12*VAR_13);
   if (!VAR_14) return FUNC_1("outofmem", "Out of memory");
   VAR_5 = VAR_12*VAR_13;





   if (VAR_7) {
      FUNC_7(VAR_0, VAR_13 * VAR_6 * 2 );


      for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
         stbi__uint8 *VAR_15;

         VAR_15 = VAR_14+VAR_8;
         if (VAR_8 >= VAR_6) {

            for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) *VAR_15 = (VAR_8 == 3 ? 255 : 0), VAR_15 += 4;
         } else {

            VAR_10 = 0;
            while (VAR_10 < VAR_5) {
               VAR_11 = FUNC_4(VAR_0);
               if (VAR_11 == 128) {

               } else if (VAR_11 < 128) {

                  VAR_11++;
                  VAR_10 += VAR_11;
                  while (VAR_11) {
                     *VAR_15 = FUNC_5(VAR_0);
                     VAR_15 += 4;
                     VAR_11--;
                  }
               } else if (VAR_11 > 128) {
                  stbi__uint8 VAR_16;


                  VAR_11 ^= 0x0FF;
                  VAR_11 += 2;
                  VAR_16 = FUNC_5(VAR_0);
                  VAR_10 += VAR_11;
                  while (VAR_11) {
                     *VAR_15 = VAR_16;
                     VAR_15 += 4;
                     VAR_11--;
                  }
               }
            }
         }
      }

   } else {




      for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
         stbi__uint8 *VAR_17;

         VAR_17 = VAR_14 + VAR_8;
         if (VAR_8 > VAR_6) {

            for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) *VAR_17 = VAR_8 == 3 ? 255 : 0, VAR_17 += 4;
         } else {

            for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
               *VAR_17 = FUNC_5(VAR_0), VAR_17 += 4;
         }
      }
   }

   if (VAR_4 && VAR_4 != 4) {
      VAR_14 = FUNC_0(VAR_14, 4, VAR_4, VAR_12, VAR_13);
      if (VAR_14 == ((void*)0)) return VAR_14;
   }

   if (VAR_3) *VAR_3 = VAR_6;
   *VAR_2 = VAR_13;
   *VAR_1 = VAR_12;

   return VAR_14;
}
