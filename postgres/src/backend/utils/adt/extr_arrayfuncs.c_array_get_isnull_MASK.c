
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;



__attribute__((used)) static bool
FUNC_0(const bits8 *VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 0;
 if (VAR_0[VAR_1 / 8] & (1 << (VAR_1 % 8)))
  return 0;
 return 1;
}
