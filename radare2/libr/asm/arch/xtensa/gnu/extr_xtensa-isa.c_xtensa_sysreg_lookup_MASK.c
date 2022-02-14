
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xtensa_sysreg ;
struct TYPE_2__ {int* max_sysreg_num; scalar_t__** sysreg_table; } ;
typedef TYPE_1__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

xtensa_sysreg
FUNC_1 (xtensa_isa VAR_4, int VAR_5, int VAR_6)
{
  xtensa_isa_internal *VAR_7 = (xtensa_isa_internal *) VAR_4;

  if (VAR_6 != 0) {
   VAR_6 = 1;
  }

  if (VAR_5 < 0 || VAR_5 > VAR_7->max_sysreg_num[VAR_6]
      || VAR_7->sysreg_table[VAR_6][VAR_5] == VAR_0)
    {
      VAR_2 = VAR_1;
      FUNC_0 (VAR_3, "sysreg not recognized");
      return VAR_0;
    }

  return VAR_7->sysreg_table[VAR_6][VAR_5];
}
