
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{
 while (*VAR_0 >= 'a' && *VAR_0 <= 'z')
  ++VAR_0;
 if (VAR_0[0] == ':' && VAR_0[1] == '/' && VAR_0[2] == '/')
  return 0;
 return 1;
}
