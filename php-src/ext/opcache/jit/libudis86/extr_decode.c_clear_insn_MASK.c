
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ud {TYPE_1__* operand; scalar_t__ _rex; scalar_t__ vex_op; scalar_t__ br_far; scalar_t__ have_modrm; int * itab_entry; int mnemonic; scalar_t__ pfx_str; scalar_t__ pfx_rex; scalar_t__ pfx_repe; scalar_t__ pfx_rep; scalar_t__ pfx_repne; scalar_t__ pfx_lock; scalar_t__ pfx_adr; scalar_t__ pfx_opr; scalar_t__ pfx_seg; scalar_t__ error; } ;
struct TYPE_2__ {void* type; } ;


 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_0(register struct ud* VAR_2)
{
  VAR_2->error = 0;
  VAR_2->pfx_seg = 0;
  VAR_2->pfx_opr = 0;
  VAR_2->pfx_adr = 0;
  VAR_2->pfx_lock = 0;
  VAR_2->pfx_repne = 0;
  VAR_2->pfx_rep = 0;
  VAR_2->pfx_repe = 0;
  VAR_2->pfx_rex = 0;
  VAR_2->pfx_str = 0;
  VAR_2->mnemonic = VAR_0;
  VAR_2->itab_entry = ((void*)0);
  VAR_2->have_modrm = 0;
  VAR_2->br_far = 0;
  VAR_2->vex_op = 0;
  VAR_2->_rex = 0;
  VAR_2->operand[0].type = VAR_1;
  VAR_2->operand[1].type = VAR_1;
  VAR_2->operand[2].type = VAR_1;
  VAR_2->operand[3].type = VAR_1;
}
