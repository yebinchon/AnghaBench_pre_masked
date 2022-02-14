
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t tilegx_mnemonic ;
struct tilegx_opcode {int dummy; } ;
struct TYPE_4__ {int line; scalar_t__ output_registers; scalar_t__ input_registers; int pipe; struct tilegx_opcode const* opcode; } ;


 int FUNC_0 (struct tilegx_opcode const*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 struct tilegx_opcode* VAR_2 ;

void FUNC_2(tilegx_mnemonic VAR_3, int VAR_4)
{
 const struct tilegx_opcode* VAR_5 = ((void*)0);

 FUNC_1(&VAR_0[1], &VAR_0[0], VAR_1 * sizeof VAR_0[0]);

 VAR_5 = &VAR_2[VAR_3];
 VAR_0[0].opcode = VAR_5;
 VAR_0[0].pipe = FUNC_0(VAR_5);
 VAR_0[0].input_registers = 0;
 VAR_0[0].output_registers = 0;
 VAR_0[0].line = VAR_4;
 ++VAR_1;
}
