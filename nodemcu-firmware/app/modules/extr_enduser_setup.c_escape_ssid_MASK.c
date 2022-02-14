
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0 (char *VAR_0, const char *VAR_1)
{
  for (int VAR_2 = 0; VAR_2 < 32 && VAR_1[VAR_2]; ++VAR_2)
  {
    if (VAR_1[VAR_2] == '\\' || VAR_1[VAR_2] == '"')
    {
      *VAR_0++ = '\\';
    }
    *VAR_0++ = VAR_1[VAR_2];
  }
  return VAR_0;
}
