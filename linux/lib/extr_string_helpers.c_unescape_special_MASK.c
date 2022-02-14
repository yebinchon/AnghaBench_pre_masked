
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(char **VAR_0, char **VAR_1)
{
 char *VAR_2 = *VAR_1, *VAR_3 = *VAR_0;

 switch (*VAR_3) {
 case '\"':
  *VAR_2 = '\"';
  break;
 case '\\':
  *VAR_2 = '\\';
  break;
 case 'a':
  *VAR_2 = '\a';
  break;
 case 'e':
  *VAR_2 = '\e';
  break;
 default:
  return 0;
 }
 *VAR_1 += 1;
 *VAR_0 += 1;
 return 1;
}
