
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* sources; struct TYPE_9__* next; } ;
typedef TYPE_3__ zend_ssa_phi ;
struct TYPE_7__ {int* predecessors; TYPE_5__* blocks; } ;
struct TYPE_10__ {TYPE_2__* blocks; TYPE_1__ cfg; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_11__ {size_t predecessor_offset; int predecessors_count; } ;
typedef TYPE_5__ zend_basic_block ;
struct TYPE_8__ {TYPE_3__* phis; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(zend_ssa *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 zend_basic_block *VAR_4 = &VAR_0->cfg.blocks[VAR_1];
 int *VAR_5 = &VAR_0->cfg.predecessors[VAR_4->predecessor_offset];
 zend_ssa_phi *VAR_6;

 int VAR_7;
 int VAR_8 = -1;
 int VAR_9 = -1;
 for (VAR_7 = 0; VAR_7 < VAR_4->predecessors_count; VAR_7++) {
  if (VAR_5[VAR_7] == VAR_2) {
   VAR_8 = VAR_7;
  }
  if (VAR_5[VAR_7] == VAR_3) {
   VAR_9 = VAR_7;
  }
 }

 FUNC_0(VAR_8 != -1);
 if (VAR_9 == -1) {

  VAR_5[VAR_8] = VAR_3;
 } else {


  FUNC_1(
   VAR_5 + VAR_8,
   VAR_5 + VAR_8 + 1,
   sizeof(int) * (VAR_4->predecessors_count - VAR_8 - 1)
  );


  for (VAR_6 = VAR_0->blocks[VAR_1].phis; VAR_6; VAR_6 = VAR_6->next) {
   FUNC_1(
    VAR_6->sources + VAR_8,
    VAR_6->sources + VAR_8 + 1,
    sizeof(int) * (VAR_4->predecessors_count - VAR_8 - 1)
   );
  }

  VAR_4->predecessors_count--;
 }
}
