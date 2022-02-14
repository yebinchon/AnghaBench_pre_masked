
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 const char *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 if (VAR_2[0] == '*' && VAR_2[1] == ':')
  return VAR_2 + 2;
 while (*VAR_2 != 0)
 {
  if (*VAR_2 == '\\' && !VAR_4)
  {
   VAR_2++;
   VAR_4 = 1;
  }
  if (*VAR_2 == ':' && *VAR_3 == 0 && !VAR_4)
   return VAR_2 + 1;
  VAR_4 = 0;
  if (*VAR_3 == 0)
   return ((void*)0);
  if (*VAR_2 == *VAR_3)
  {
   VAR_2++;
   VAR_3++;
  }
  else
   return ((void*)0);
 }
 return ((void*)0);
}
