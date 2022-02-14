
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (float,float,float,float) ;
 int FUNC_3 (float) ;
 scalar_t__ FUNC_4 (float) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
   float VAR_6, VAR_7, VAR_8, VAR_9;
   int VAR_10[4],VAR_11,VAR_12;
   FUNC_1(VAR_0, VAR_10);
   VAR_11 = VAR_10[2];
   VAR_12 = VAR_10[3];
   VAR_8 = (float) VAR_11 / VAR_12;

   if (VAR_2 <= 0) VAR_2 = 179;
   if (VAR_3 <= 0) VAR_3 = 179;


   VAR_6 = (float) FUNC_5(FUNC_3(VAR_2/2)) * 2;
   VAR_7 = (float) FUNC_5(FUNC_3(VAR_3/2)) * 2;

   if (VAR_6 <= VAR_8 * VAR_7) {
      float VAR_13 = VAR_6 / VAR_8;
      VAR_9 = (float) FUNC_0(( VAR_13/2) / VAR_1);
   } else {
      VAR_9 = (float) FUNC_0((VAR_7/2) / VAR_1);
   }
   VAR_9 = (float) FUNC_4(VAR_9 * 2);
   FUNC_2(VAR_9, VAR_8, VAR_4, VAR_5);
}
