
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0 (const char *VAR_0)
{
  const char *VAR_1 = VAR_0;
  char VAR_2;

  while ((VAR_2 = *VAR_1++) != '\0')
    {
      if (VAR_2 == '\\' && *VAR_1 == ',')
 VAR_1++;
      else if (VAR_2 == ',')
 return VAR_1 - 1;
    }
  return ((void*)0);
}
