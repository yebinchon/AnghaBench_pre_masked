
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(char VAR_0, int *VAR_1)
{
 if ('0' <= VAR_0 && VAR_0 <= '9')
  *VAR_1 = VAR_0 - '0';
 else if ('A' <= VAR_0 && VAR_0 <= 'F')
  *VAR_1 = VAR_0 - 'A' + 10;
 else if ('a' <= VAR_0 && VAR_0 <= 'f')
  *VAR_1 = VAR_0 - 'a' + 10;
 else
  return 0;

 return 1;
}
