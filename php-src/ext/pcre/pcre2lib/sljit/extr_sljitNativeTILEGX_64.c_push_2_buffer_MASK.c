
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t tilegx_mnemonic ;
struct tilegx_opcode {char* name; } ;
struct sljit_compiler {int dummy; } ;
typedef int sljit_s32 ;
struct TYPE_2__ {int* operand_value; int line; long input_registers; long output_registers; int pipe; struct tilegx_opcode const* opcode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 size_t VAR_1 ;
 int FUNC_2 (struct tilegx_opcode const*) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (char*,char*) ;
 struct tilegx_opcode* VAR_4 ;
 int FUNC_4 (struct sljit_compiler*) ;

__attribute__((used)) static sljit_s32 FUNC_5(struct sljit_compiler *VAR_5, tilegx_mnemonic VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 if (VAR_3 == VAR_1)
  FUNC_0(FUNC_4(VAR_5));

 const struct tilegx_opcode* VAR_10 = &VAR_4[VAR_6];
 VAR_2[VAR_3].opcode = VAR_10;
 VAR_2[VAR_3].pipe = FUNC_2(VAR_10);
 VAR_2[VAR_3].operand_value[0] = VAR_7;
 VAR_2[VAR_3].operand_value[1] = VAR_8;
 VAR_2[VAR_3].line = VAR_9;

 switch (VAR_6) {
 case 141:
 case 140:
  VAR_2[VAR_3].input_registers = 1L << VAR_7;
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_2[VAR_3].input_registers = (1L << VAR_7) | (1L << VAR_8);
  VAR_2[VAR_3].output_registers = 0;
  break;
 case 139:
 case 138:
 case 136:
 case 137:
 case 134:
 case 135:
 case 132:
 case 133:
  VAR_2[VAR_3].input_registers = 1L << VAR_8;
  VAR_2[VAR_3].output_registers = 1L << VAR_7;
  break;
 default:
  FUNC_3("unrecoginzed opc: %s\n", VAR_10->name);
  FUNC_1();
 }

 VAR_3++;

 return VAR_0;
}
