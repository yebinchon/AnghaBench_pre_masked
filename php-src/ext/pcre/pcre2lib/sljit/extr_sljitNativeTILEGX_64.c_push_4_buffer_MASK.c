
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t tilegx_mnemonic ;
struct tilegx_opcode {int dummy; } ;
struct sljit_compiler {int dummy; } ;
typedef int sljit_s32 ;
struct TYPE_2__ {int* operand_value; long input_registers; long output_registers; int line; int pipe; struct tilegx_opcode const* opcode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct tilegx_opcode const*) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 struct tilegx_opcode* VAR_4 ;
 int FUNC_2 (struct sljit_compiler*) ;

__attribute__((used)) static sljit_s32 FUNC_3(struct sljit_compiler *VAR_5, tilegx_mnemonic VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 if (VAR_3 == VAR_1)
  FUNC_0(FUNC_2(VAR_5));

 const struct tilegx_opcode* VAR_12 = &VAR_4[VAR_6];
 VAR_2[VAR_3].opcode = VAR_12;
 VAR_2[VAR_3].pipe = FUNC_1(VAR_12);
 VAR_2[VAR_3].operand_value[0] = VAR_7;
 VAR_2[VAR_3].operand_value[1] = VAR_8;
 VAR_2[VAR_3].operand_value[2] = VAR_9;
 VAR_2[VAR_3].operand_value[3] = VAR_10;
 VAR_2[VAR_3].input_registers = 1L << VAR_8;
 VAR_2[VAR_3].output_registers = 1L << VAR_7;
 VAR_2[VAR_3].line = VAR_11;
 VAR_3++;

 return VAR_0;
}
