
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4;
   if (VAR_3) {
      for (VAR_4=0; VAR_4 < VAR_2; ++VAR_4)
         if (VAR_1[VAR_4] == '?') {
            if (!VAR_0[VAR_4]) return 0;
         } else
            if (FUNC_0(VAR_1[VAR_4]) != FUNC_0(VAR_0[VAR_4]))
               return 0;
   } else {
      for (VAR_4=0; VAR_4 < VAR_2; ++VAR_4)
         if (VAR_1[VAR_4] == '?') {
            if (!VAR_0[VAR_4]) return 0;
         } else
            if (VAR_1[VAR_4] != VAR_0[VAR_4])
               return 0;
   }
   return 1;
}
