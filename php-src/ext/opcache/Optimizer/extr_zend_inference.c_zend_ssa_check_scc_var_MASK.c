
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_2__ zend_worklist_stack ;
struct TYPE_12__ {struct TYPE_12__* sym_use_chain; int ssa_var; } ;
typedef TYPE_3__ zend_ssa_phi ;
struct TYPE_13__ {int sccs; TYPE_1__* vars; } ;
typedef TYPE_4__ zend_ssa ;
typedef int zend_op_array ;
struct TYPE_10__ {int scc; TYPE_3__* sym_use_chain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int (*) (int )) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(const zend_op_array *VAR_0, zend_ssa *VAR_1, int VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, zend_worklist_stack *VAR_6)
{




 VAR_4[VAR_2] = *VAR_3;
 (*VAR_3)++;
 VAR_5[VAR_2] = VAR_2;

 FUNC_1(VAR_2, FUNC_0);
 if (VAR_5[VAR_2] == VAR_2) {
  VAR_1->vars[VAR_2].scc = VAR_1->sccs;
  while (VAR_6->len > 0) {
   int VAR_7 = FUNC_2(VAR_6);
   if (VAR_4[VAR_7] <= VAR_4[VAR_2]) {
    break;
   }
   FUNC_3(VAR_6);
   VAR_1->vars[VAR_7].scc = VAR_1->sccs;
  }
  VAR_1->sccs++;
 } else {
  FUNC_4(VAR_6, VAR_2);
 }
}
