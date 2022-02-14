
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pi; size_t block; int* sources; struct TYPE_10__** use_chains; } ;
typedef TYPE_3__ zend_ssa_phi ;
struct TYPE_8__ {TYPE_2__* blocks; } ;
struct TYPE_11__ {TYPE_1__ cfg; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_9__ {int predecessors_count; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline zend_ssa_phi **FUNC_1(zend_ssa *VAR_0, int VAR_1, zend_ssa_phi *VAR_2)
{
 if (VAR_2->pi >= 0) {
  return &VAR_2->use_chains[0];
 } else {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->cfg.blocks[VAR_2->block].predecessors_count; VAR_3++) {
   if (VAR_2->sources[VAR_3] == VAR_1) {
    return &VAR_2->use_chains[VAR_3];
   }
  }
 }
 FUNC_0(0);
 return ((void*)0);
}
