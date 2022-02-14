
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;

char *FUNC_3(char *VAR_0, char *VAR_1)
{
   size_t VAR_2 = FUNC_2(VAR_1);
   char *VAR_3;
   if (VAR_2==0) return VAR_0;
   while ((VAR_3 = FUNC_0(VAR_0, *VAR_1)) != ((void*)0)) {
      if (0==FUNC_1(VAR_3, VAR_1, VAR_2))
         return VAR_3;
      VAR_0 = VAR_3+1;
   }
   return ((void*)0);
}
