
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt__point ;


 int FUNC_0 (int *,int,float,float) ;

__attribute__((used)) static int FUNC_1(stbtt__point *VAR_0, int *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, int VAR_9)
{

   float VAR_10 = (VAR_2 + 2*VAR_4 + VAR_6)/4;
   float VAR_11 = (VAR_3 + 2*VAR_5 + VAR_7)/4;

   float VAR_12 = (VAR_2+VAR_6)/2 - VAR_10;
   float VAR_13 = (VAR_3+VAR_7)/2 - VAR_11;
   if (VAR_9 > 16)
      return 1;
   if (VAR_12*VAR_12+VAR_13*VAR_13 > VAR_8) {
      FUNC_1(VAR_0, VAR_1, VAR_2,VAR_3, (VAR_2+VAR_4)/2.0f,(VAR_3+VAR_5)/2.0f, VAR_10,VAR_11, VAR_8,VAR_9+1);
      FUNC_1(VAR_0, VAR_1, VAR_10,VAR_11, (VAR_4+VAR_6)/2.0f,(VAR_5+VAR_7)/2.0f, VAR_6,VAR_7, VAR_8,VAR_9+1);
   } else {
      FUNC_0(VAR_0, *VAR_1,VAR_6,VAR_7);
      *VAR_1 = *VAR_1+1;
   }
   return 1;
}
