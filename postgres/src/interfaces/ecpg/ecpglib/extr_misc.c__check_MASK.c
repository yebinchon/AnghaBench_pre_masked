
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
 for (VAR_1--; VAR_1 >= 0; VAR_1--)
  if (VAR_0[VAR_1] != 0xff)
   return 0;

 return 1;
}
