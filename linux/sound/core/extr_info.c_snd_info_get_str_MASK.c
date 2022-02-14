
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(char *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;

 while (*VAR_1 == ' ' || *VAR_1 == '\t')
  VAR_1++;
 if (*VAR_1 == '"' || *VAR_1 == '\'') {
  VAR_3 = *VAR_1++;
  while (--VAR_2 > 0 && *VAR_1 && *VAR_1 != VAR_3) {
   *VAR_0++ = *VAR_1++;
  }
  if (*VAR_1 == VAR_3)
   VAR_1++;
 } else {
  while (--VAR_2 > 0 && *VAR_1 && *VAR_1 != ' ' && *VAR_1 != '\t') {
   *VAR_0++ = *VAR_1++;
  }
 }
 *VAR_0 = 0;
 while (*VAR_1 == ' ' || *VAR_1 == '\t')
  VAR_1++;
 return VAR_1;
}
