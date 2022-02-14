
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned char VAR_0, char **VAR_1, char *VAR_2)
{
 char *VAR_3 = *VAR_1;
 unsigned char VAR_4;

 switch (VAR_0) {
 case '\\':
  VAR_4 = '\\';
  break;
 case '\a':
  VAR_4 = 'a';
  break;
 case '\e':
  VAR_4 = 'e';
  break;
 default:
  return 0;
 }

 if (VAR_3 < VAR_2)
  *VAR_3 = '\\';
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = VAR_4;
 ++VAR_3;

 *VAR_1 = VAR_3;
 return 1;
}
