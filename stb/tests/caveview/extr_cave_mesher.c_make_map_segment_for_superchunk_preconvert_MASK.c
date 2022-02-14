
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int fast_chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int,int *,int *) ;

void FUNC_2(int VAR_0, int VAR_1, int VAR_2, fast_chunk *VAR_3[4][4], uint8 VAR_4[34][34][18], uint8 VAR_5[34][34][18])
{
   int VAR_6,VAR_7;
   FUNC_0((VAR_0 & 1) == 0);
   FUNC_0((VAR_1 & 1) == 0);
   for (VAR_7=-1; VAR_7 < 3; ++VAR_7) {
      for (VAR_6=-1; VAR_6 < 3; ++VAR_6) {
         int VAR_8 = VAR_6*16+1;
         int VAR_9 = VAR_7*16+1;
         int VAR_10,VAR_11;
         fast_chunk *VAR_12 = VAR_3[VAR_7+1][VAR_6+1];
         for (VAR_11=0; VAR_11 < 16; ++VAR_11)
            for (VAR_10=0; VAR_10 < 16; ++VAR_10)
               if (VAR_8+VAR_10 >= 0 && VAR_8+VAR_10 < 34 && VAR_9+VAR_11 >= 0 && VAR_9+VAR_11 < 34)
                  FUNC_1(VAR_12,VAR_10,VAR_11, VAR_2, VAR_4[VAR_8+VAR_10][VAR_9+VAR_11], VAR_5[VAR_8+VAR_10][VAR_9+VAR_11]);
      }
   }
}
