
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int aarch64_operand_error ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ aarch64_opcode ;
typedef int aarch64_inst ;
typedef int aarch64_insn ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,int ,int *,int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*) ;

int
FUNC_6 (aarch64_insn VAR_3, aarch64_inst *VAR_4,
       bfd_boolean VAR_5,
       aarch64_operand_error *VAR_6)
{
  const aarch64_opcode *VAR_7 = FUNC_3 (VAR_3);
  while (VAR_7 != ((void*)0))
    {


      if (FUNC_2 (VAR_7, VAR_3, VAR_4, VAR_5, VAR_6) == 1)
 return VAR_0;
      VAR_7 = FUNC_1 (VAR_7);
    }

  return VAR_1;
}
