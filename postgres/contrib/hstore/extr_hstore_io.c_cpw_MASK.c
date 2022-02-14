
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1;

 while (VAR_3 - VAR_1 < VAR_2)
 {
  if (*VAR_3 == '"' || *VAR_3 == '\\')
   *VAR_0++ = '\\';
  *VAR_0++ = *VAR_3++;
 }
 return VAR_0;
}
