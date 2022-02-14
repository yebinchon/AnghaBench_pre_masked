
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(char *VAR_0)
{
 for (; *VAR_0; VAR_0++)
 {
  if (*VAR_0 < 0x21 || *VAR_0 > 0x7E || *VAR_0 == 0x2C )
   return 0;
 }
 return 1;
}
