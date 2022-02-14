
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


struct TYPE_15__ {int type; int range; } ;
struct TYPE_16__ {scalar_t__ pi; struct TYPE_16__* next; TYPE_3__ constraint; scalar_t__ has_range_constraint; int var; int * sources; int ssa_var; } ;
typedef TYPE_4__ zend_ssa_phi ;
struct TYPE_17__ {TYPE_1__* blocks; } ;
typedef TYPE_5__ zend_ssa ;
typedef int zend_op_array ;
struct TYPE_18__ {TYPE_2__* blocks; } ;
typedef TYPE_6__ zend_cfg ;
typedef int uint32_t ;
struct TYPE_14__ {int predecessors_count; } ;
struct TYPE_13__ {TYPE_4__* phis; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__ const*,int,int ) ;
 int FUNC_2 (int const*,TYPE_5__ const*,int *,int ) ;
 int FUNC_3 (int const*,TYPE_5__ const*,int ,int ,int ,int ) ;
 int FUNC_4 (int const*,TYPE_5__ const*,int *,int ) ;

__attribute__((used)) static void FUNC_5(const zend_cfg *VAR_1, const zend_op_array *VAR_2, const zend_ssa *VAR_3, int VAR_4, uint32_t VAR_5)
{
 FUNC_1(VAR_1, VAR_4, VAR_5);
 if (VAR_3 && VAR_3->blocks && VAR_3->blocks[VAR_4].phis) {
  zend_ssa_phi *VAR_6 = VAR_3->blocks[VAR_4].phis;

  do {
   int VAR_7;

   FUNC_0(VAR_0, "        ");
   FUNC_3(VAR_2, VAR_3, VAR_6->ssa_var, 0, VAR_6->var, VAR_5);
   if (VAR_6->pi < 0) {
    FUNC_0(VAR_0, " = Phi(");
    for (VAR_7 = 0; VAR_7 < VAR_1->blocks[VAR_4].predecessors_count; VAR_7++) {
     if (VAR_7 > 0) {
      FUNC_0(VAR_0, ", ");
     }
     FUNC_3(VAR_2, VAR_3, VAR_6->sources[VAR_7], 0, VAR_6->var, VAR_5);
    }
    FUNC_0(VAR_0, ")\n");
   } else {
    FUNC_0(VAR_0, " = Pi<BB%ld>(", VAR_6->pi);
    FUNC_3(VAR_2, VAR_3, VAR_6->sources[0], 0, VAR_6->var, VAR_5);
    FUNC_0(VAR_0, " &");
    if (VAR_6->has_range_constraint) {
     FUNC_2(VAR_2, VAR_3, &VAR_6->constraint.range, VAR_5);
    } else {
     FUNC_4(VAR_2, VAR_3, &VAR_6->constraint.type, VAR_5);
    }
    FUNC_0(VAR_0, ")\n");
   }
   VAR_6 = VAR_6->next;
  } while (VAR_6);
 }
}
