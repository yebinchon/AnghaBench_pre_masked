
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct disassemble_info {int dummy; } ;
typedef int bfd_vma ;
struct TYPE_5__ {int operands; int opcode; } ;
typedef TYPE_1__ aarch64_inst ;


 int FUNC_0 (TYPE_1__ const*,struct disassemble_info*) ;
 int FUNC_1 (TYPE_1__ const*,struct disassemble_info*) ;
 int FUNC_2 (int ,int ,int ,struct disassemble_info*) ;

__attribute__((used)) static void
FUNC_3 (bfd_vma VAR_0, const aarch64_inst *VAR_1,
      struct disassemble_info *VAR_2)
{
  FUNC_1 (VAR_1, VAR_2);
  FUNC_2 (VAR_0, VAR_1->opcode, VAR_1->operands, VAR_2);
  FUNC_0 (VAR_1, VAR_2);
}
