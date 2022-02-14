
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;

char *FUNC_3(char *VAR_2, char *VAR_3, char *VAR_4)
{
   char VAR_5[4096];
   FUNC_1(VAR_5, VAR_3, VAR_1 | VAR_0);
   if (VAR_4)
      FUNC_0(VAR_2, "%s/%s", VAR_4, VAR_5);
   else
      FUNC_2(VAR_2, VAR_5);
   return VAR_2;
}
