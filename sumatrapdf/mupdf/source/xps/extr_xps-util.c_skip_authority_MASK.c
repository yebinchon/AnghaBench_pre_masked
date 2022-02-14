
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0)
{
 char *VAR_1 = VAR_0;


 if (VAR_1[0] != '/' || VAR_1[1] != '/')
  return VAR_0;
 VAR_1 += 2;


 while (*VAR_1 && *VAR_1 != '/' && *VAR_1 != '?')
  VAR_1++;

 return VAR_1;
}
