
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int*,char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
 int VAR_3;

 *VAR_2 = 1;
 if (!VAR_1)
  return 1;
 if (!*VAR_1)
  return 0;
 if (!FUNC_1(VAR_1, "true") || !FUNC_1(VAR_1, "yes") || !FUNC_1(VAR_1, "on"))
  return 1;
 if (!FUNC_1(VAR_1, "false") || !FUNC_1(VAR_1, "no") || !FUNC_1(VAR_1, "off"))
  return 0;
 *VAR_2 = 0;
 return FUNC_0(&VAR_3, VAR_0, VAR_1) < 0 ? -1 : VAR_3;
}
