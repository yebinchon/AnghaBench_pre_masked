
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* decode ) (int*) ;} ;
typedef TYPE_1__ xtensa_operand_internal ;
typedef int xtensa_opcode ;
typedef int xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int uint32 ;


 TYPE_1__* FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_3 (xtensa_isa VAR_3, xtensa_opcode VAR_4, int VAR_5,
         uint32 *VAR_6)
{
  xtensa_isa_internal *VAR_7 = (xtensa_isa_internal *) VAR_3;
  xtensa_operand_internal *VAR_8;

  VAR_8 = FUNC_0 (VAR_7, VAR_4, VAR_5);
  if (!VAR_8) {
   return -1;
  }


  if (!VAR_8->decode) {
   return 0;
  }

  if ((*VAR_8->decode) (VAR_6))
    {
      VAR_1 = VAR_0;
      FUNC_1 (VAR_2, "cannot decode operand value 0x%08x", *VAR_6);
      return -1;
    }
  return 0;
}
