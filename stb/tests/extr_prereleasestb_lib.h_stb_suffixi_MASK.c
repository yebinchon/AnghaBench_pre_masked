
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

int FUNC_2(char *VAR_0, char *VAR_1)
{
   size_t VAR_2 = FUNC_1(VAR_0);
   size_t VAR_3 = FUNC_1(VAR_1);
   if (VAR_3 <= VAR_2)
      return 0 == FUNC_0(VAR_0+VAR_2-VAR_3, VAR_1);
   else
      return 0;
}
