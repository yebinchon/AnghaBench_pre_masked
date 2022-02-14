
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int pi; scalar_t__* sources; int ssa_var; struct TYPE_13__* next; } ;
typedef TYPE_2__ zend_ssa_phi ;
struct TYPE_14__ {TYPE_2__* phis; } ;
typedef TYPE_3__ zend_ssa_block ;
struct TYPE_12__ {int* predecessors; TYPE_5__* blocks; } ;
struct TYPE_15__ {TYPE_1__ cfg; TYPE_3__* blocks; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_16__ {size_t predecessor_offset; int predecessors_count; } ;
typedef TYPE_5__ zend_basic_block ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;

void FUNC_5(zend_ssa *VAR_0, int VAR_1, int VAR_2)
{
 zend_basic_block *VAR_3 = &VAR_0->cfg.blocks[VAR_2];
 zend_ssa_block *VAR_4 = &VAR_0->blocks[VAR_2];
 zend_ssa_phi *VAR_5;
 int VAR_6;


 int VAR_7 = -1;
 int *VAR_8 = &VAR_0->cfg.predecessors[VAR_3->predecessor_offset];

 for (VAR_6 = 0; VAR_6 < VAR_3->predecessors_count; VAR_6++) {
  if (VAR_8[VAR_6] == VAR_1) {
   VAR_7 = VAR_6;
   break;
  }
 }



 if (VAR_7 == -1) {
  return;
 }


 for (VAR_5 = VAR_4->phis; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->pi >= 0) {
   if (VAR_5->pi == VAR_1) {
    FUNC_4(VAR_0, VAR_5->ssa_var);
    FUNC_2(VAR_0, VAR_5);
   }
  } else {
   FUNC_0(VAR_5->sources[VAR_7] >= 0);
   FUNC_3(VAR_0, VAR_5, VAR_7, VAR_3->predecessors_count);
  }
 }


 VAR_3->predecessors_count--;
 if (VAR_7 < VAR_3->predecessors_count) {
  VAR_8 = &VAR_0->cfg.predecessors[VAR_3->predecessor_offset + VAR_7];
  FUNC_1(VAR_8, VAR_8 + 1, (VAR_3->predecessors_count - VAR_7) * sizeof(uint32_t));
 }
}
