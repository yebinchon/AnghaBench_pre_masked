
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char**) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, const char *VAR_1, char **VAR_2,
    char **VAR_3)
{
 if (!*VAR_2)
  goto set_new;

 if (*VAR_3) {
  if (FUNC_1(*VAR_2, *VAR_3))
   FUNC_0("alias %s differs in field '%s'\n",
     VAR_0, VAR_1);
  FUNC_2(VAR_2);
 } else
  return;
set_new:
 *VAR_2 = *VAR_3;
 *VAR_3 = ((void*)0);
}
