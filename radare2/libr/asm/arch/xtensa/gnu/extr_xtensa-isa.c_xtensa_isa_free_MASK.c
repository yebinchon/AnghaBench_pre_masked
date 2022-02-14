
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ funcUnit_lookup_table; scalar_t__ interface_lookup_table; scalar_t__* sysreg_table; scalar_t__ sysreg_lookup_table; scalar_t__ state_lookup_table; scalar_t__ opname_lookup_table; } ;
typedef TYPE_1__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1 (xtensa_isa VAR_0)
{
  xtensa_isa_internal *VAR_1 = (xtensa_isa_internal *) VAR_0;
  int VAR_2;






  if (VAR_1->opname_lookup_table)
    {
      FUNC_0 (VAR_1->opname_lookup_table);
      VAR_1->opname_lookup_table = 0;
    }

  if (VAR_1->state_lookup_table)
    {
      FUNC_0 (VAR_1->state_lookup_table);
      VAR_1->state_lookup_table = 0;
    }

  if (VAR_1->sysreg_lookup_table)
    {
      FUNC_0 (VAR_1->sysreg_lookup_table);
      VAR_1->sysreg_lookup_table = 0;
    }
  for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
    {
      if (VAR_1->sysreg_table[VAR_2])
 {
   FUNC_0 (VAR_1->sysreg_table[VAR_2]);
   VAR_1->sysreg_table[VAR_2] = 0;
 }
    }

  if (VAR_1->interface_lookup_table)
    {
      FUNC_0 (VAR_1->interface_lookup_table);
      VAR_1->interface_lookup_table = 0;
    }

  if (VAR_1->funcUnit_lookup_table)
    {
      FUNC_0 (VAR_1->funcUnit_lookup_table);
      VAR_1->funcUnit_lookup_table = 0;
    }
}
