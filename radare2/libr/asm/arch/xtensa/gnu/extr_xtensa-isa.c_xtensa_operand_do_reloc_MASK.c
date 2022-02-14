
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ (* do_reloc ) (int*,int) ;} ;
typedef TYPE_1__ xtensa_operand_internal ;
typedef int xtensa_opcode ;
typedef int xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int uint32 ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_4 (xtensa_isa VAR_5, xtensa_opcode VAR_6, int VAR_7,
    uint32 *VAR_8, uint32 VAR_9)
{
  xtensa_isa_internal *VAR_10 = (xtensa_isa_internal *) VAR_5;
  xtensa_operand_internal *VAR_11;

  VAR_11 = FUNC_0 (VAR_10, VAR_6, VAR_7);
  if (!VAR_11) {
   return -1;
  }

  if ((VAR_11->flags & VAR_0) == 0) {
   return 0;
  }

  if (!VAR_11->do_reloc)
    {
      VAR_3 = VAR_2;
      FUNC_2 (VAR_4, "operand missing do_reloc function");
      return -1;
    }

  if ((*VAR_11->do_reloc) (VAR_8, VAR_9))
    {
      VAR_3 = VAR_1;
      FUNC_1 (VAR_4,
        "do_reloc failed for value 0x%08x at PC 0x%08x", *VAR_8, VAR_9);
      return -1;
    }

  return 0;
}
