
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   if (VAR_0 && VAR_1 != ((void*)0)) {
      int VAR_6 = *VAR_2, VAR_7 = *VAR_3;
      int VAR_8 = VAR_5 ? VAR_5 : *VAR_4;
      int VAR_9,VAR_10,VAR_11;
      float VAR_12;


      for (VAR_9 = 0; VAR_9 < (VAR_7>>1); VAR_9++) {
         for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
               VAR_12 = VAR_1[(VAR_9 * VAR_6 + VAR_10) * VAR_8 + VAR_11];
               VAR_1[(VAR_9 * VAR_6 + VAR_10) * VAR_8 + VAR_11] = VAR_1[((VAR_7 - VAR_9 - 1) * VAR_6 + VAR_10) * VAR_8 + VAR_11];
               VAR_1[((VAR_7 - VAR_9 - 1) * VAR_6 + VAR_10) * VAR_8 + VAR_11] = VAR_12;
            }
         }
      }
   }
}
