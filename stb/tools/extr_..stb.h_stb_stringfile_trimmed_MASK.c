
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char** FUNC_1 (char*,int*) ;

char ** FUNC_2(char *VAR_0, int *VAR_1, char VAR_2)
{
   int VAR_3,VAR_4,VAR_5=0;
   char **VAR_6 = FUNC_1(VAR_0, &VAR_4);
   if (VAR_6 == ((void*)0)) return ((void*)0);
   for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3) {
      char *VAR_7 = FUNC_0(VAR_6[VAR_3]);
      if (*VAR_7 && *VAR_7 != VAR_2)
         VAR_6[VAR_5++] = VAR_7;
   }
   VAR_6[VAR_5] = ((void*)0);
   if (VAR_1) *VAR_1 = VAR_5;
   return VAR_6;
}
