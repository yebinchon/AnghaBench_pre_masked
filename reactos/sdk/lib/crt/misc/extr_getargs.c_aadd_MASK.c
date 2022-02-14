
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 char** FUNC_0 (int) ;
 char** FUNC_1 (char**,int) ;

int FUNC_2(char* VAR_3)
{
   char** VAR_4;
   if ((VAR_1 % VAR_0) == 0)
   {
      if (VAR_2 == ((void*)0))
         VAR_4 = FUNC_0(sizeof(char*) * (1 + VAR_0));
      else
         VAR_4 = FUNC_1(VAR_2, sizeof(char*) * (VAR_1 + 1 + VAR_0));
      if (VAR_4 == ((void*)0))
         return -1;
      VAR_2 = VAR_4;
   }
   VAR_2[VAR_1++] = VAR_3;
   VAR_2[VAR_1] = ((void*)0);
   return 0;
}
