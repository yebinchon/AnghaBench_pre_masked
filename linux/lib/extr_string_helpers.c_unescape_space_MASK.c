
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(char **VAR_0, char **VAR_1)
{
 char *VAR_2 = *VAR_1, *VAR_3 = *VAR_0;

 switch (*VAR_3) {
 case 'n':
  *VAR_2 = '\n';
  break;
 case 'r':
  *VAR_2 = '\r';
  break;
 case 't':
  *VAR_2 = '\t';
  break;
 case 'v':
  *VAR_2 = '\v';
  break;
 case 'f':
  *VAR_2 = '\f';
  break;
 default:
  return 0;
 }
 *VAR_1 += 1;
 *VAR_0 += 1;
 return 1;
}
