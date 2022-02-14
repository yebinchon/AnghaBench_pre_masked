
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;

char *
FUNC_4 (const char *VAR_1)
{
  if (VAR_1[0] == '(')
    {
      char *VAR_2 = FUNC_3 (VAR_1, ')');
      char *VAR_3;

      if (! VAR_2)
 {
   FUNC_0 (VAR_0, "missing `)'");
   return 0;
 }

      VAR_3 = (char *) FUNC_1 (VAR_2 - VAR_1);
      if (! VAR_3)
 return 0;

      FUNC_2 (VAR_3, VAR_1 + 1, VAR_2 - VAR_1 - 1);
      VAR_3[VAR_2 - VAR_1 - 1] = '\0';
      return VAR_3;
    }

  return 0;
}
