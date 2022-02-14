
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(char *VAR_0, const char *VAR_1, const size_t VAR_2) {
   size_t VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2 - 1 && VAR_1[VAR_3] != '\0'; VAR_3++) {
        VAR_0[VAR_3] = VAR_1[VAR_3];
   }

   VAR_0[VAR_3] = '\0';

   if (VAR_1[VAR_3] == '\0') {
       return 1;
   } else {
       return 0;
   }
}
