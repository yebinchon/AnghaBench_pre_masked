
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t tilegx_mnemonic ;
struct tilegx_opcode {int dummy; } ;
struct sljit_compiler {int dummy; } ;
typedef int sljit_s32 ;
struct TYPE_2__ {int* operand_value; long input_registers; int line; scalar_t__ output_registers; int pipe; struct tilegx_opcode const* opcode; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct sljit_compiler*) ;
 int FUNC_2 (struct tilegx_opcode const*) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 struct tilegx_opcode* VAR_3 ;
 int FUNC_3 (struct sljit_compiler*) ;

__attribute__((used)) static sljit_s32 FUNC_4(struct sljit_compiler *VAR_4, tilegx_mnemonic VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_2 == VAR_0)
  FUNC_0(FUNC_3(VAR_4));

 const struct tilegx_opcode* VAR_8 = &VAR_3[VAR_5];
 VAR_1[VAR_2].opcode = VAR_8;
 VAR_1[VAR_2].pipe = FUNC_2(VAR_8);
 VAR_1[VAR_2].operand_value[0] = VAR_6;
 VAR_1[VAR_2].input_registers = 1L << VAR_6;
 VAR_1[VAR_2].output_registers = 0;
 VAR_1[VAR_2].line = VAR_7;
 VAR_2++;

 return FUNC_1(VAR_4);
}
