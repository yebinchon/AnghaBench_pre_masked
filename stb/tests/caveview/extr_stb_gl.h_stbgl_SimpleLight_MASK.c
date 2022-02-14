
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,float*) ;
 float FUNC_3 (float) ;

void FUNC_4(int VAR_8, float VAR_9, float VAR_10, float VAR_11, float VAR_12)
{
   float VAR_13 = (float) (1.0f/FUNC_3(VAR_10*VAR_10+VAR_11*VAR_11+VAR_12*VAR_12));
   float VAR_14[4] = { VAR_10*VAR_13,VAR_11*VAR_13,VAR_12*VAR_13,0 }, VAR_15[4] = { 0,0,0,0 };
   float VAR_16[4] = { VAR_9,VAR_9,VAR_9,0 };
   GLuint VAR_17 = VAR_5 + VAR_8;
   FUNC_2(VAR_17, VAR_6, VAR_14);
   FUNC_2(VAR_17, VAR_3, VAR_16);
   FUNC_2(VAR_17, VAR_0, VAR_15);
   FUNC_2(VAR_17, VAR_7, VAR_15);
   FUNC_1(VAR_17);
   FUNC_0(VAR_4, VAR_1);
   FUNC_1(VAR_2);
}
