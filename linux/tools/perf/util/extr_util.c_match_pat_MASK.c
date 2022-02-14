
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static bool FUNC_1(char *VAR_0, const char **VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return 1;

 while (VAR_1[VAR_2]) {
  if (FUNC_0(VAR_0, VAR_1[VAR_2]))
   return 1;

  VAR_2++;
 }

 return 0;
}
