
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5, unsigned int VAR_6)
{
   unsigned char VAR_7[VAR_0];
   int VAR_8 = VAR_4 - VAR_6;
   int VAR_9;
   FUNC_1(VAR_7, 0, VAR_0);
   for (VAR_9=0; VAR_9 < VAR_3; ++VAR_9) {
      int VAR_10;
      unsigned int VAR_11;
      FUNC_1(VAR_7, 0, VAR_6);

      VAR_11 = 0;


      switch (VAR_6) {
         case 2:
            for (VAR_10=0; VAR_10 <= VAR_8; ++VAR_10) {
               VAR_11 += VAR_2[VAR_10*VAR_5] - VAR_7[VAR_10 & VAR_1];
               VAR_7[(VAR_10+VAR_6) & VAR_1] = VAR_2[VAR_10*VAR_5];
               VAR_2[VAR_10*VAR_5] = (unsigned char) (VAR_11 / 2);
            }
            break;
         case 3:
            for (VAR_10=0; VAR_10 <= VAR_8; ++VAR_10) {
               VAR_11 += VAR_2[VAR_10*VAR_5] - VAR_7[VAR_10 & VAR_1];
               VAR_7[(VAR_10+VAR_6) & VAR_1] = VAR_2[VAR_10*VAR_5];
               VAR_2[VAR_10*VAR_5] = (unsigned char) (VAR_11 / 3);
            }
            break;
         case 4:
            for (VAR_10=0; VAR_10 <= VAR_8; ++VAR_10) {
               VAR_11 += VAR_2[VAR_10*VAR_5] - VAR_7[VAR_10 & VAR_1];
               VAR_7[(VAR_10+VAR_6) & VAR_1] = VAR_2[VAR_10*VAR_5];
               VAR_2[VAR_10*VAR_5] = (unsigned char) (VAR_11 / 4);
            }
            break;
         case 5:
            for (VAR_10=0; VAR_10 <= VAR_8; ++VAR_10) {
               VAR_11 += VAR_2[VAR_10*VAR_5] - VAR_7[VAR_10 & VAR_1];
               VAR_7[(VAR_10+VAR_6) & VAR_1] = VAR_2[VAR_10*VAR_5];
               VAR_2[VAR_10*VAR_5] = (unsigned char) (VAR_11 / 5);
            }
            break;
         default:
            for (VAR_10=0; VAR_10 <= VAR_8; ++VAR_10) {
               VAR_11 += VAR_2[VAR_10*VAR_5] - VAR_7[VAR_10 & VAR_1];
               VAR_7[(VAR_10+VAR_6) & VAR_1] = VAR_2[VAR_10*VAR_5];
               VAR_2[VAR_10*VAR_5] = (unsigned char) (VAR_11 / VAR_6);
            }
            break;
      }

      for (; VAR_10 < VAR_4; ++VAR_10) {
         FUNC_0(VAR_2[VAR_10*VAR_5] == 0);
         VAR_11 -= VAR_7[VAR_10 & VAR_1];
         VAR_2[VAR_10*VAR_5] = (unsigned char) (VAR_11 / VAR_6);
      }

      VAR_2 += 1;
   }
}
