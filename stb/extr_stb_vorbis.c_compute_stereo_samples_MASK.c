
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (float*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(short *VAR_5, int VAR_6, float **VAR_7, int VAR_8, int VAR_9)
{

   float VAR_10[32];
   int VAR_11,VAR_12,VAR_13,VAR_14 = 32 >> 1;

   FUNC_2();
   for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13 += 32 >> 1) {

      int VAR_15 = VAR_13 << 1;
      FUNC_3(VAR_10, 0, sizeof(VAR_10));
      if (VAR_13 + VAR_14 > VAR_9) VAR_14 = VAR_9 - VAR_13;
      for (VAR_12=0; VAR_12 < VAR_6; ++VAR_12) {
         int VAR_16 = VAR_3[VAR_6][VAR_12] & (VAR_1 | VAR_2);
         if (VAR_16 == (VAR_1 | VAR_2)) {
            for (VAR_11=0; VAR_11 < VAR_14; ++VAR_11) {
               VAR_10[VAR_11*2+0] += VAR_7[VAR_12][VAR_8+VAR_13+VAR_11];
               VAR_10[VAR_11*2+1] += VAR_7[VAR_12][VAR_8+VAR_13+VAR_11];
            }
         } else if (VAR_16 == VAR_1) {
            for (VAR_11=0; VAR_11 < VAR_14; ++VAR_11) {
               VAR_10[VAR_11*2+0] += VAR_7[VAR_12][VAR_8+VAR_13+VAR_11];
            }
         } else if (VAR_16 == VAR_2) {
            for (VAR_11=0; VAR_11 < VAR_14; ++VAR_11) {
               VAR_10[VAR_11*2+1] += VAR_7[VAR_12][VAR_8+VAR_13+VAR_11];
            }
         }
      }
      for (VAR_11=0; VAR_11 < (VAR_14<<1); ++VAR_11) {
         FUNC_0(VAR_4);
         int VAR_17 = FUNC_1(VAR_4,VAR_10[VAR_11],15);
         if ((unsigned int) (VAR_17 + 32768) > 65535)
            VAR_17 = VAR_17 < 0 ? -32768 : 32767;
         VAR_5[VAR_15+VAR_11] = VAR_17;
      }
   }
}
