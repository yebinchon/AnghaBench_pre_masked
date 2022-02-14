
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
   float VAR_5 = 1, VAR_6, VAR_7 = *VAR_0;
   if (VAR_7 == VAR_1) return;
   if (VAR_1 < VAR_7) {
      VAR_1 = -VAR_1;
      VAR_7 = -VAR_7;
      VAR_5 = -1;
   }

   if (VAR_7 < 0) {
      VAR_6 = VAR_7 + VAR_3 * VAR_4;
      if (VAR_6 > 0) {
         VAR_6 = 0;
         VAR_4 = VAR_4 - VAR_7 / VAR_3;
         if (VAR_4 < 0) VAR_4 = 0;
      } else {
         VAR_4 = 0;
      }
      VAR_7 = VAR_6;
   }

   VAR_6 = VAR_7 + VAR_2*VAR_4;
   if (VAR_6 > VAR_1) VAR_6 = VAR_1;
   *VAR_0 = VAR_6 * VAR_5;

}
