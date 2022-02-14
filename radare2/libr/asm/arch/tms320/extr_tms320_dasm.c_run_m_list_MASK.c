
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int opcode64; TYPE_1__* insn; } ;
typedef TYPE_2__ tms320_dasm_t ;
struct TYPE_8__ {scalar_t__ v; int n; int f; } ;
typedef TYPE_3__ insn_mask_t ;
struct TYPE_6__ {TYPE_3__* m_list; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(tms320_dasm_t * VAR_0)
{
 insn_mask_t * VAR_1;

 if (!VAR_0->insn->m_list) {
  return 1;
 }

 for (VAR_1 = VAR_0->insn->m_list; !FUNC_1(VAR_1); VAR_1++) {

  if (FUNC_0 (VAR_0->opcode64, VAR_1->f, VAR_1->n) != VAR_1->v) {
   return 0;
  }
 }

 return 1;
}
