
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float,int) ;
 int** VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (float*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3, short *VAR_4, int VAR_5, float **VAR_6, int VAR_7, int VAR_8)
{

   float VAR_9[32];
   int VAR_10,VAR_11,VAR_12,VAR_13 = 32;
   FUNC_2();
   for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12 += 32) {
      FUNC_3(VAR_9, 0, sizeof(VAR_9));
      if (VAR_12 + VAR_13 > VAR_8) VAR_13 = VAR_8 - VAR_12;
      for (VAR_11=0; VAR_11 < VAR_5; ++VAR_11) {
         if (VAR_1[VAR_5][VAR_11] & VAR_3) {
            for (VAR_10=0; VAR_10 < VAR_13; ++VAR_10)
               VAR_9[VAR_10] += VAR_6[VAR_11][VAR_7+VAR_12+VAR_10];
         }
      }
      for (VAR_10=0; VAR_10 < VAR_13; ++VAR_10) {
         FUNC_0(VAR_2);
         int VAR_14 = FUNC_1(VAR_2,VAR_9[VAR_10],15);
         if ((unsigned int) (VAR_14 + 32768) > 65535)
            VAR_14 = VAR_14 < 0 ? -32768 : 32767;
         VAR_4[VAR_12+VAR_10] = VAR_14;
      }
   }
}
