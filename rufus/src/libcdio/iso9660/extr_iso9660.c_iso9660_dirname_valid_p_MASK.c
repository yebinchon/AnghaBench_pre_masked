
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const*) ;

bool
FUNC_3 (const char VAR_1[])
{
  const char *VAR_2 = VAR_1;
  int VAR_3;

  FUNC_0 (VAR_1 != ((void*)0));

  if (*VAR_2 == '/' || *VAR_2 == '.' || *VAR_2 == '\0')
    return 0;

  if (FUNC_2 (VAR_1) > VAR_0)
    return 0;

  VAR_3 = 0;
  for (; *VAR_2; VAR_2++)
    if (FUNC_1 (*VAR_2))
      {
        VAR_3++;
        if (VAR_3 > 8)
          return 0;
      }
    else if (*VAR_2 == '/')
      {
        if (!VAR_3)
          return 0;
        VAR_3 = 0;
      }
    else
      return 0;

  if (!VAR_3)
    return 0;

  return 1;
}
