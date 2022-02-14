
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t tilegx_pipeline ;
typedef unsigned short tilegx_bundle_bits ;
struct tilegx_opcode {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short** VAR_1 ;
 struct tilegx_opcode const* VAR_2 ;

const struct tilegx_opcode *
FUNC_0(tilegx_bundle_bits VAR_3, tilegx_pipeline VAR_4)
{
  const unsigned short *VAR_5 = VAR_1[VAR_4];
  int VAR_6 = 0;

  while (1)
  {
    unsigned short VAR_7 = VAR_5[VAR_6];
    unsigned int VAR_8 =
      ((unsigned int)(VAR_3 >> (VAR_7 & 63))) & (VAR_7 >> 6);

    unsigned short VAR_9 = VAR_5[VAR_6 + 1 + VAR_8];
    if (VAR_9 <= VAR_0)
      return &VAR_2[VAR_9];

    VAR_6 = VAR_9 - VAR_0;
  }
}
