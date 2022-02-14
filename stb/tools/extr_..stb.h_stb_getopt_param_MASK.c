
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char**,char*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*,size_t,char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char) ;
 size_t FUNC_6 (char*) ;

char **FUNC_7(int *VAR_0, char **VAR_1, char *VAR_2)
{
   char ** VAR_3=((void*)0);
   int VAR_4,VAR_5=1;
   for (VAR_4=1; VAR_4 < *VAR_0; ++VAR_4) {
      if (VAR_1[VAR_4][0] != '-') {
         VAR_1[VAR_5++] = VAR_1[VAR_4];
      } else {
         if (VAR_1[VAR_4][1] == 0) {
            ++VAR_4;
            while (VAR_4 < *VAR_0)
               VAR_1[VAR_5++] = VAR_1[VAR_4++];
            break;
         } else if (VAR_1[VAR_4][1] == '-') {

            FUNC_1(VAR_3, FUNC_4(VAR_1[VAR_4]));
         } else {
            int VAR_6;
            char *VAR_7 = VAR_1[VAR_4];
            for (VAR_6=1; VAR_7[VAR_6]; ++VAR_6) {
               char *VAR_8;
               if (FUNC_5(VAR_2, VAR_7[VAR_6])) {
                  char *VAR_9 = &VAR_7[VAR_6+1], VAR_10 = VAR_7[VAR_6];
                  size_t VAR_11=0;
                  if (*VAR_9 == 0) {
                     if (VAR_4 == *VAR_0-1) {
                        *VAR_0 = 0;
                        FUNC_2(VAR_3);
                        return ((void*)0);
                     }
                     VAR_9 = VAR_1[++VAR_4];
                  } else
                     VAR_6 += (int) FUNC_6(VAR_9);
                  VAR_11 = FUNC_6(VAR_9);
                  VAR_8 = (char *) FUNC_0(VAR_11+2);
                  if (!VAR_8) return ((void*)0);
                  VAR_8[0] = VAR_10;
                  FUNC_3(VAR_8+1, VAR_11+2, VAR_9);
               } else {

                  VAR_8 = (char *) FUNC_0(2);
                  if (!VAR_8) return ((void*)0);
                  VAR_8[0] = VAR_7[VAR_6];
                  VAR_8[1] = 0;
               }
               FUNC_1(VAR_3, VAR_8);
            }
         }
      }
   }
   FUNC_1(VAR_3, ((void*)0));
   *VAR_0 = VAR_5;
   return VAR_3;
}
