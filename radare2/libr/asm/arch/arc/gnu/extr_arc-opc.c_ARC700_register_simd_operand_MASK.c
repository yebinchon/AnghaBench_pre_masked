
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0 (char VAR_0)
{
  switch (VAR_0)
    {
    case '*':
    case '(':
    case ')':
      return 1;
    case '<':
    case '>':
      return 2;
    case '\13':
    case '{':
    case '}':
      return 3;
    case '\15':
    case '\16':
    case '\17':
      return 4;
    }
  return 0;
}
