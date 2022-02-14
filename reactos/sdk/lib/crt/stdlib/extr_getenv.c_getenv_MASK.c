
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char*** FUNC_0 () ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,char) ;
 size_t FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0)
{
   char **VAR_1;
   size_t VAR_2 = FUNC_3(VAR_0);

   for (VAR_1 = *FUNC_0(); *VAR_1; VAR_1++)
   {
      char *VAR_3 = *VAR_1;
      char *VAR_4 = FUNC_2(VAR_3,'=');
      if (VAR_4 && ((unsigned int)(VAR_4 - VAR_3) == VAR_2) && !FUNC_1(VAR_3, VAR_0, VAR_2))
         return VAR_4 + 1;
   }
   return ((void*)0);
}
