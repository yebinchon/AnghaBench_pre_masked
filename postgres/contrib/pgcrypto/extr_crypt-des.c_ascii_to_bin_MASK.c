
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int
FUNC_0(char VAR_0)
{
 if (VAR_0 > 'z')
  return 0;
 if (VAR_0 >= 'a')
  return (VAR_0 - 'a' + 38);
 if (VAR_0 > 'Z')
  return 0;
 if (VAR_0 >= 'A')
  return (VAR_0 - 'A' + 12);
 if (VAR_0 > '9')
  return 0;
 if (VAR_0 >= '.')
  return (VAR_0 - '.');
 return 0;
}
