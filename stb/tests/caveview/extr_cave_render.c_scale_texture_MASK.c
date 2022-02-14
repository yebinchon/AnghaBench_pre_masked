
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int** VAR_1 ;

void FUNC_1(unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7,VAR_8,VAR_9;
   FUNC_0(VAR_5 == 256 && VAR_6 == 256);
   for (VAR_8=0; VAR_8 < VAR_0; ++VAR_8) {
      for (VAR_7=0; VAR_7 < VAR_0; ++VAR_7) {
         uint32 VAR_10=0;
         for (VAR_9=0; VAR_9 < 4; ++VAR_9) {
            VAR_10 >>= 8;
            VAR_10 += VAR_2[ 4*(VAR_3+(VAR_7>>2)) + 4*VAR_5*(VAR_4+(VAR_8>>2)) + VAR_9]<<24;
         }
         VAR_1[VAR_8][VAR_7] = VAR_10;
      }
   }
}
