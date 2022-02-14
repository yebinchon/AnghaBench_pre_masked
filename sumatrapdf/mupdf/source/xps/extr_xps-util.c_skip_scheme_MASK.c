
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0)
{
 char *VAR_1 = VAR_0;


 if (*VAR_1 >= 'a' && *VAR_1 <= 'z')
 {}
 else if (*VAR_1 >= 'A' && *VAR_1 <= 'Z')
 {}
 else
  return VAR_0;

 while (*++VAR_1)
 {
  if (*VAR_1 >= 'a' && *VAR_1 <= 'z')
  {}
  else if (*VAR_1 >= 'A' && *VAR_1 <= 'Z')
  {}
  else if (*VAR_1 >= '0' && *VAR_1 <= '9')
  {}
  else if (*VAR_1 == '+')
  {}
  else if (*VAR_1 == '-')
  {}
  else if (*VAR_1 == '.')
  {}
  else if (*VAR_1 == ':')
   return VAR_1+1;
  else
   break;
 }
 return VAR_0;
}
