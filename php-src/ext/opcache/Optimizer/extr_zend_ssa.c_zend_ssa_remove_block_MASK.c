
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_18__ {int ssa_var; struct TYPE_18__* next; } ;
typedef TYPE_2__ zend_ssa_phi ;
struct TYPE_19__ {TYPE_2__* phis; } ;
typedef TYPE_3__ zend_ssa_block ;
struct TYPE_17__ {int* predecessors; TYPE_6__* blocks; } ;
struct TYPE_20__ {TYPE_1__ cfg; int * ops; TYPE_3__* blocks; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_21__ {TYPE_12__* opcodes; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_22__ {int start; int len; int successors_count; int* successors; size_t predecessor_offset; int predecessors_count; size_t idom; int children; int next_child; int level; int flags; } ;
typedef TYPE_6__ zend_basic_block ;
struct TYPE_16__ {scalar_t__ opcode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_12__*,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (TYPE_4__*,int ) ;

void FUNC_6(zend_op_array *VAR_2, zend_ssa *VAR_3, int VAR_4)
{
 zend_basic_block *VAR_5 = &VAR_3->cfg.blocks[VAR_4];
 zend_ssa_block *VAR_6 = &VAR_3->blocks[VAR_4];
 int *VAR_7;
 zend_ssa_phi *VAR_8;
 int VAR_9, VAR_10;

 VAR_5->flags &= ~VAR_0;


 for (VAR_8 = VAR_6->phis; VAR_8; VAR_8 = VAR_8->next) {
  FUNC_5(VAR_3, VAR_8->ssa_var);
  FUNC_3(VAR_3, VAR_8);
 }


 for (VAR_9 = VAR_5->start; VAR_9 < VAR_5->start + VAR_5->len; VAR_9++) {
  if (VAR_2->opcodes[VAR_9].opcode == VAR_1) {
   continue;
  }

  FUNC_1(VAR_3, &VAR_3->ops[VAR_9]);
  FUNC_2(VAR_3, &VAR_2->opcodes[VAR_9], &VAR_3->ops[VAR_9]);
 }

 for (VAR_10 = 0; VAR_10 < VAR_5->successors_count; VAR_10++) {
  FUNC_4(VAR_3, VAR_4, VAR_5->successors[VAR_10]);
 }


 VAR_7 = &VAR_3->cfg.predecessors[VAR_5->predecessor_offset];
 for (VAR_9 = 0; VAR_9 < VAR_5->predecessors_count; VAR_9++) {
  if (VAR_7[VAR_9] >= 0) {
   zend_basic_block *VAR_11 = &VAR_3->cfg.blocks[VAR_7[VAR_9]];

   for (VAR_10 = 0; VAR_10 < VAR_11->successors_count; VAR_10++) {
    if (VAR_11->successors[VAR_10] == VAR_4) {
     FUNC_0(VAR_11->successors + VAR_10,
       VAR_11->successors + VAR_10 + 1,
       sizeof(int) * (VAR_11->successors_count - VAR_10 - 1));
     VAR_11->successors_count--;
     VAR_10--;
    }
   }
  }
 }

 VAR_5->successors_count = 0;
 VAR_5->predecessors_count = 0;


 if (VAR_5->idom >= 0) {
  VAR_9 = VAR_3->cfg.blocks[VAR_5->idom].children;
  if (VAR_9 == VAR_4) {
   VAR_3->cfg.blocks[VAR_5->idom].children = VAR_5->next_child;
  } else if (VAR_9 >= 0) {
   while (VAR_3->cfg.blocks[VAR_9].next_child >= 0) {
    if (VAR_3->cfg.blocks[VAR_9].next_child == VAR_4) {
     VAR_3->cfg.blocks[VAR_9].next_child = VAR_5->next_child;
     break;
    }
    VAR_9 = VAR_3->cfg.blocks[VAR_9].next_child;
   }
  }
 }
 VAR_5->idom = -1;
 VAR_5->level = -1;
 VAR_5->children = -1;
 VAR_5->next_child = -1;
}
