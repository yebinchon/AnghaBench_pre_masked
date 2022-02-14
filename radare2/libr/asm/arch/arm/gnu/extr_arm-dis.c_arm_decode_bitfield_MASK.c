
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0 (const char *VAR_0,
       unsigned long VAR_1,
       unsigned long *VAR_2,
       int *VAR_3)
{
  unsigned long VAR_4 = 0;
  int VAR_5 = 0;

  do
    {
      int VAR_6, VAR_7;
      int VAR_8;

      for (VAR_6 = 0; *VAR_0 >= '0' && *VAR_0 <= '9'; VAR_0++) {
       VAR_6 = VAR_6 * 10 + *VAR_0 - '0';
      }
      if (*VAR_0 == '-') {
       for (VAR_7 = 0, VAR_0++; *VAR_0 >= '0' && *VAR_0 <= '9'; VAR_0++) {
        VAR_7 = VAR_7 * 10 + *VAR_0 - '0';
       }
      } else {
       VAR_7 = VAR_6;
      }
      VAR_8 = VAR_7 - VAR_6;
      if (VAR_8 < 0) {
return ((void*)0);
}
      VAR_4 |= ((VAR_1 >> VAR_6) & ((2ul << VAR_8) - 1)) << VAR_5;
      VAR_5 += VAR_8 + 1;
    }
  while (*VAR_0++ == ',');
  *VAR_2 = VAR_4;
  if (VAR_3) {
   *VAR_3 = VAR_5;
  }
  return VAR_0 - 1;
}
