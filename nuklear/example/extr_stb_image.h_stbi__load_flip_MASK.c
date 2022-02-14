
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char stbi_uc ;
typedef int stbi__context ;


 unsigned char* FUNC_0 (int *,int*,int*,int*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned char *FUNC_1(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   unsigned char *VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

   if (VAR_0 && VAR_6 != ((void*)0)) {
      int VAR_7 = *VAR_2, VAR_8 = *VAR_3;
      int VAR_9 = VAR_5 ? VAR_5 : *VAR_4;
      int VAR_10,VAR_11,VAR_12;
      stbi_uc VAR_13;


      for (VAR_10 = 0; VAR_10 < (VAR_8>>1); VAR_10++) {
         for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
            for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
               VAR_13 = VAR_6[(VAR_10 * VAR_7 + VAR_11) * VAR_9 + VAR_12];
               VAR_6[(VAR_10 * VAR_7 + VAR_11) * VAR_9 + VAR_12] = VAR_6[((VAR_8 - VAR_10 - 1) * VAR_7 + VAR_11) * VAR_9 + VAR_12];
               VAR_6[((VAR_8 - VAR_10 - 1) * VAR_7 + VAR_11) * VAR_9 + VAR_12] = VAR_13;
            }
         }
      }
   }

   return VAR_6;
}
