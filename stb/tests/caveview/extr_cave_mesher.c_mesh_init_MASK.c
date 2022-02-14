
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int* VAR_5 ;
 int * VAR_6 ;
 int FUNC_4 (int*,size_t*,int) ;
 int** VAR_7 ;
 int * VAR_8 ;
 size_t** VAR_9 ;
 int** VAR_10 ;
 int* VAR_11 ;
 int * VAR_12 ;
 int FUNC_5 (int,int) ;

void FUNC_6(void)
{
   int VAR_13;

   VAR_3 = FUNC_0();
   VAR_4 = FUNC_0();

   for (VAR_13=0; VAR_13 < 256; ++VAR_13) {
      FUNC_4(VAR_10[VAR_13], VAR_9[VAR_13]+1, 6);
      VAR_5[VAR_13] = (VAR_9[VAR_13][0] == VAR_0 ? 0 : VAR_13);
      VAR_8[VAR_13] = VAR_6[VAR_9[VAR_13][0]];
   }


   for (VAR_13=0; VAR_13 < 6*256; ++VAR_13) {
      if (VAR_10[0][VAR_13] == 40)
         VAR_7[0][VAR_13] = 38 | 64;
      if (VAR_10[0][VAR_13] == 39)
         VAR_7[0][VAR_13] = 39 | 64;
      if (VAR_10[0][VAR_13] == 105)
         VAR_7[0][VAR_13] = 63;
      if (VAR_10[0][VAR_13] == 212)
         VAR_7[0][VAR_13] = 63;
      if (VAR_10[0][VAR_13] == 80)
         VAR_7[0][VAR_13] = 63;
   }

   for (VAR_13=0; VAR_13 < 6; ++VAR_13) {
      VAR_7[172][VAR_13] = 47 | 64;
      VAR_7[178][VAR_13] = 47 | 64;
      VAR_7[18][VAR_13] = 39 | 64;
      VAR_7[161][VAR_13] = 37 | 64;
      VAR_7[10][VAR_13] = 63;
      VAR_7[11][VAR_13] = 63;

      VAR_7[48][VAR_13] = 63;
   }
   VAR_11[53] = 1;
   VAR_11[67] = 2;
   VAR_11[108] = 3;
   VAR_11[109] = 4;
   VAR_11[114] = 5;
   VAR_11[136] = 6;
   VAR_11[156] = 7;
   for (VAR_13=0; VAR_13 < 256; ++VAR_13)
      if (VAR_11[VAR_13])
         FUNC_1(VAR_13, VAR_12[VAR_11[VAR_13]]);
   VAR_11[35] = 8;
   FUNC_3(35, VAR_12[VAR_11[35]]);
   VAR_11[5] = 11;
   FUNC_2(5, VAR_12[VAR_11[5]]);


   FUNC_5(54, 9);
   FUNC_5(146, 10);
}
