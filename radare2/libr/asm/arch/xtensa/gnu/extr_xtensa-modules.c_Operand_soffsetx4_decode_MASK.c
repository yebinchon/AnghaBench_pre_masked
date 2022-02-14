
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static int
FUNC_0 (uint32 *VAR_0)
{
  unsigned VAR_1, VAR_2;
  VAR_2 = *VAR_0 & 0x3ffff;
  VAR_1 = 0x4 + ((((int) VAR_2 << 14) >> 14) << 2);
  *VAR_0 = VAR_1;
  return 0;
}
