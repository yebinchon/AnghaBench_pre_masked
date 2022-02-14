
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ssa_var; struct TYPE_11__* next; } ;
typedef TYPE_3__ zend_ssa_phi ;
struct TYPE_12__ {TYPE_3__* phis; } ;
typedef TYPE_4__ zend_ssa_block ;
typedef int uint32_t ;
struct TYPE_10__ {int (* visit_phi ) (TYPE_5__*,TYPE_3__*) ;} ;
struct TYPE_13__ {TYPE_2__ handlers; int phi_var_worklist; TYPE_1__* ssa; int block_worklist; int executable_blocks; int feasible_edges; } ;
typedef TYPE_5__ scdf_ctx ;
struct TYPE_9__ {TYPE_4__* blocks; int cfg; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(scdf_ctx *VAR_0, int VAR_1, int VAR_2) {
 uint32_t VAR_3 = FUNC_1(&VAR_0->ssa->cfg, VAR_1, VAR_2);

 if (FUNC_4(VAR_0->feasible_edges, VAR_3)) {

  return;
 }

 FUNC_0("Marking edge %d->%d feasible\n", VAR_1, VAR_2);
 FUNC_5(VAR_0->feasible_edges, VAR_3);

 if (!FUNC_4(VAR_0->executable_blocks, VAR_2)) {
  if (!FUNC_4(VAR_0->block_worklist, VAR_2)) {
   FUNC_0("Adding block %d to worklist\n", VAR_2);
  }
  FUNC_5(VAR_0->block_worklist, VAR_2);
 } else {


  zend_ssa_block *VAR_4 = &VAR_0->ssa->blocks[VAR_2];
  zend_ssa_phi *VAR_5;
  for (VAR_5 = VAR_4->phis; VAR_5; VAR_5 = VAR_5->next) {
   FUNC_3(VAR_0->phi_var_worklist, VAR_5->ssa_var);
   VAR_0->handlers.visit_phi(VAR_0, VAR_5);
  }
 }
}
