
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* predecessors; } ;
struct TYPE_11__ {TYPE_1__ cfg; TYPE_2__* blocks; } ;
typedef TYPE_3__ zend_ssa ;
typedef int zend_op_array ;
struct TYPE_12__ {int predecessors_count; int successors_count; size_t predecessor_offset; int * successors; } ;
typedef TYPE_4__ zend_basic_block ;
struct TYPE_10__ {int * phis; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (int *,TYPE_3__*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(zend_op_array *VAR_0, zend_ssa *VAR_1, zend_basic_block *VAR_2, int VAR_3)
{
 if (VAR_2->predecessors_count == 1 && VAR_1->blocks[VAR_3].phis == ((void*)0)) {
  int *VAR_4, VAR_5;

  FUNC_0(VAR_2->successors_count == 1);
  VAR_4 = &VAR_1->cfg.predecessors[VAR_2->predecessor_offset];
  for (VAR_5 = 0; VAR_5 < VAR_2->predecessors_count; VAR_5++) {
   FUNC_2(VAR_0, VAR_1, VAR_4[VAR_5], VAR_3, VAR_2->successors[0]);
  }
  FUNC_1(VAR_0, VAR_1, VAR_3);
 }
}
