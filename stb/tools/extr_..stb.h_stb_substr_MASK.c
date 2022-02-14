
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (char*) ;

char *FUNC_3(char *VAR_0, int VAR_1)
{
   char *VAR_2;
   int VAR_3 = (int) FUNC_2(VAR_0);
   if (VAR_3 < VAR_1) VAR_1 = VAR_3;
   VAR_2 = (char *) FUNC_0(VAR_1+1);
   FUNC_1(VAR_2,VAR_1+1,VAR_0,VAR_1);
   VAR_2[VAR_1] = 0;
   return VAR_2;
}
