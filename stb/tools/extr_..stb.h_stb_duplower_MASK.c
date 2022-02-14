
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char FUNC_1 (char) ;

char *FUNC_2(char *VAR_0)
{
   char *VAR_1 = FUNC_0(VAR_0), *VAR_2 = VAR_1;
   while (*VAR_2) {
      *VAR_2 = FUNC_1(*VAR_2);
      ++VAR_2;
   }
   return VAR_1;
}
