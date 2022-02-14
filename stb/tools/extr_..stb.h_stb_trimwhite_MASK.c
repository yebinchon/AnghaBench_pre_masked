
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;

char *FUNC_3(char *VAR_0)
{
   int VAR_1,VAR_2;
   VAR_0 = FUNC_1(VAR_0);
   VAR_2 = (int) FUNC_2(VAR_0);
   for (VAR_1=VAR_2-1; VAR_1 >= 0; --VAR_1)
      if (!FUNC_0(VAR_0[VAR_1]))
         break;
   VAR_0[VAR_1+1] = 0;
   return VAR_0;
}
