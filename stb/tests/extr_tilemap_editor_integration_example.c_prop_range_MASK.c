
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (short*) ;

__attribute__((used)) static float FUNC_1(int VAR_0, short *VAR_1, int VAR_2)
{
   if (FUNC_0(VAR_1)) {
      static float VAR_3[8][2] = {
         { 0, 1 },
         { -15, 15 },
         { -15, 15 },
         { 0, 6 },
         { 0, 10 },
         { 0, 10 },
         { 0, 1 },
         { 0, 1 },
      };
      return VAR_3[VAR_0][VAR_2];
   }
   return 0;
}
