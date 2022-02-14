
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int* sources; int pi; int var; int ssa_var; struct TYPE_16__* next; struct TYPE_16__** use_chains; } ;
typedef TYPE_4__ zend_ssa_phi ;
struct TYPE_15__ {TYPE_2__* blocks; } ;
struct TYPE_17__ {TYPE_3__ cfg; TYPE_1__* blocks; } ;
typedef TYPE_5__ zend_ssa ;
typedef int zend_op_array ;
struct TYPE_18__ {int size; int use; int def; } ;
typedef TYPE_6__ zend_dfg ;
typedef int zend_arena ;
struct TYPE_14__ {int predecessors_count; } ;
struct TYPE_13__ {TYPE_4__* phis; } ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int const*,TYPE_6__*,TYPE_5__*,int,int,int) ;
 TYPE_4__* FUNC_4 (int **,int,int) ;

__attribute__((used)) static zend_ssa_phi *FUNC_5(
  zend_arena **VAR_0, const zend_op_array *VAR_1, zend_dfg *VAR_2, zend_ssa *VAR_3,
  int VAR_4, int VAR_5, int VAR_6)
{
 zend_ssa_phi *VAR_7;
 if (!FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) {
  return ((void*)0);
 }

 VAR_7 = FUNC_4(VAR_0, 1,
  FUNC_1(sizeof(zend_ssa_phi)) +
  FUNC_1(sizeof(int) * VAR_3->cfg.blocks[VAR_5].predecessors_count) +
  sizeof(void*) * VAR_3->cfg.blocks[VAR_5].predecessors_count);
 VAR_7->sources = (int*)(((char*)VAR_7) + FUNC_1(sizeof(zend_ssa_phi)));
 FUNC_2(VAR_7->sources, 0xff, sizeof(int) * VAR_3->cfg.blocks[VAR_5].predecessors_count);
 VAR_7->use_chains = (zend_ssa_phi**)(((char*)VAR_7->sources) + FUNC_1(sizeof(int) * VAR_3->cfg.blocks[VAR_5].predecessors_count));

 VAR_7->pi = VAR_4;
 VAR_7->var = VAR_6;
 VAR_7->ssa_var = -1;
 VAR_7->next = VAR_3->blocks[VAR_5].phis;
 VAR_3->blocks[VAR_5].phis = VAR_7;




 FUNC_0(VAR_2->def, VAR_2->size, VAR_5, VAR_6);




 if (VAR_3->cfg.blocks[VAR_5].predecessors_count > 1) {
  FUNC_0(VAR_2->use, VAR_2->size, VAR_5, VAR_6);
 }

 return VAR_7;
}
