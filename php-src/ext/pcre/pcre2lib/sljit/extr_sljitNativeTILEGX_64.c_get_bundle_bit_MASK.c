
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tilegx_bundle_bits ;
struct tilegx_operand {int (* insert ) (int) ;} ;
struct tilegx_opcode {int num_operands; size_t** operands; int * fixed_bit_values; } ;
struct jit_instr {size_t pipe; int* operand_value; struct tilegx_opcode* opcode; } ;


 int FUNC_0 (int) ;
 struct tilegx_operand* VAR_0 ;

tilegx_bundle_bits FUNC_1(struct jit_instr *VAR_1)
{
 int VAR_2, VAR_3;
 const struct tilegx_opcode* VAR_4 = VAR_1->opcode;
 tilegx_bundle_bits VAR_5 = VAR_4->fixed_bit_values[VAR_1->pipe];

 const struct tilegx_operand* VAR_6 = ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_4->num_operands; VAR_2++) {
  VAR_6 = &VAR_0[VAR_4->operands[VAR_1->pipe][VAR_2]];
  VAR_3 = VAR_1->operand_value[VAR_2];

  VAR_5 |= VAR_6->insert(VAR_3);
 }

 return VAR_5;
}
