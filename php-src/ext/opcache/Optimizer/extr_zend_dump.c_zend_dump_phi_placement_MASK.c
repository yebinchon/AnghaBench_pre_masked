
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pi; struct TYPE_7__* next; int var; } ;
typedef TYPE_2__ zend_ssa_phi ;
struct TYPE_8__ {TYPE_2__* phis; } ;
typedef TYPE_3__ zend_ssa_block ;
struct TYPE_6__ {int blocks_count; } ;
struct TYPE_9__ {TYPE_1__ cfg; TYPE_3__* blocks; } ;
typedef TYPE_4__ zend_ssa ;
typedef int zend_op_array ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int ,int ) ;

void FUNC_3(const zend_op_array *VAR_2, const zend_ssa *VAR_3)
{
 int VAR_4;
 zend_ssa_block *VAR_5 = VAR_3->blocks;
 int VAR_6 = VAR_3->cfg.blocks_count;

 FUNC_0(VAR_1, "\nSSA Phi() Placement for \"");
 FUNC_1(VAR_2);
 FUNC_0(VAR_1, "\"\n");
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_5 && VAR_5[VAR_4].phis) {
   zend_ssa_phi *VAR_7 = VAR_5[VAR_4].phis;
   int VAR_8 = 1;

   FUNC_0(VAR_1, "  BB%d:\n", VAR_4);
   if (VAR_7->pi >= 0) {
    FUNC_0(VAR_1, "    ; pi={");
   } else {
    FUNC_0(VAR_1, "    ; phi={");
   }
   do {
    if (VAR_8) {
     VAR_8 = 0;
    } else {
     FUNC_0(VAR_1, ", ");
    }
    FUNC_2(VAR_2, VAR_0, VAR_7->var);
    VAR_7 = VAR_7->next;
   } while (VAR_7);
   FUNC_0(VAR_1, "}\n");
  }
 }
}
