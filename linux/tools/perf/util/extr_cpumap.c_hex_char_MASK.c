
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char FUNC_0(unsigned char VAR_0)
{
 if (VAR_0 < 10)
  return VAR_0 + '0';
 if (VAR_0 < 16)
  return VAR_0 - 10 + 'a';
 return '?';
}
