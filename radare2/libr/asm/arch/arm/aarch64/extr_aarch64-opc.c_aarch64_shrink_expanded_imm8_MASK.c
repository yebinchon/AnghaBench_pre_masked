
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



int
FUNC_0 (uint64_t VAR_0)
{
  int VAR_1, VAR_2;
  uint32_t VAR_3;

  VAR_2 = 0;
  for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
    {
      VAR_3 = (VAR_0 >> (8 * VAR_1)) & 0xff;
      if (VAR_3 == 0xff)
 VAR_2 |= 1 << VAR_1;
      else if (VAR_3 != 0x00)
 return -1;
    }
  return VAR_2;
}
