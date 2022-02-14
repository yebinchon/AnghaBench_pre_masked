
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_5__ {int noperands; int * odecs; int opcode; int mnemonic; } ;
typedef TYPE_1__ rsp_instruction_priv ;
struct TYPE_6__ {int noperands; int * operands; int opcode; int mnemonic; } ;
typedef TYPE_2__ rsp_instruction ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;

rsp_instruction FUNC_2(ut64 VAR_0, ut32 VAR_1) {
 int VAR_2;
 const rsp_instruction_priv* VAR_3 = FUNC_0 (VAR_1);

 rsp_instruction VAR_4;

 VAR_4.mnemonic = VAR_3->mnemonic;
 VAR_4.opcode = VAR_3->opcode;
 VAR_4.noperands = VAR_3->noperands;
 for (VAR_2 = 0; VAR_2 < VAR_4.noperands; ++VAR_2) {
  VAR_4.operands[VAR_2] = FUNC_1 (VAR_0, VAR_1, &VAR_3->odecs[VAR_2]);
 }

 return VAR_4;
}
