
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2(char *VAR_0, char *VAR_1)
{
   char VAR_2[4096];
   if (VAR_0[0]) {
      FUNC_0(VAR_2, "%s && %s", VAR_0, VAR_1);
      return FUNC_1(VAR_2) == 0;
   } else {
      return FUNC_1(VAR_1) == 0;
   }
}
