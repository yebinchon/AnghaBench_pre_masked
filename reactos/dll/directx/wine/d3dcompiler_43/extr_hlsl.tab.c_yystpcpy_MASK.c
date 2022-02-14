
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (char *VAR_0, const char *VAR_1)
{
  char *VAR_2 = VAR_0;
  const char *VAR_3 = VAR_1;

  while ((*VAR_2++ = *VAR_3++) != '\0')
    continue;

  return VAR_2 - 1;
}
