
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int,int,int ,int ,int*) ;
 scalar_t__ FUNC_2 (float,int ,int) ;
 int** VAR_3 ;
 int * VAR_4 ;

void FUNC_3(float VAR_5)
{
   int VAR_6;
   int VAR_7 = (int) FUNC_2(VAR_5, 0, 255);
   if (VAR_7 < 0) VAR_7 = 0; else if (VAR_7 > 255) VAR_7 = 255;
   FUNC_0(VAR_1, VAR_4[1]);
   for (VAR_6=0; VAR_6 < 64; ++VAR_6) {
      VAR_3[VAR_6][3] = VAR_7;
      FUNC_1(VAR_1, 0, 0,0,VAR_6, 1,1,1, VAR_0, VAR_2, VAR_3[VAR_6]);
   }
}
