
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int zval ;
struct TYPE_26__ {int vars_count; TYPE_2__* vars; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_27__ {int debug_level; int arena; } ;
typedef TYPE_4__ zend_optimizer_ctx ;
struct TYPE_28__ {int last_var; } ;
typedef TYPE_5__ zend_op_array ;
typedef int zend_call_info ;
struct TYPE_24__ {int mark_feasible_successors; int visit_phi; int visit_instr; } ;
struct TYPE_30__ {TYPE_1__ handlers; } ;
struct TYPE_29__ {TYPE_9__ scdf; int * values; } ;
typedef TYPE_6__ sccp_ctx ;
struct TYPE_25__ {int var; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*,TYPE_3__*,TYPE_5__*,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_4__*,TYPE_9__*,TYPE_5__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*,char*) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int ,int ) ;

int FUNC_14(zend_optimizer_ctx *VAR_6, zend_op_array *VAR_7, zend_ssa *VAR_8, zend_call_info **VAR_9)
{
 sccp_ctx VAR_10;
 int VAR_11 = 0;
 void *VAR_12 = FUNC_10(VAR_6->arena);

 FUNC_5(VAR_6, &VAR_10, VAR_8, VAR_7, VAR_9);

 VAR_10.scdf.handlers.visit_instr = VAR_3;
 VAR_10.scdf.handlers.visit_phi = VAR_4;
 VAR_10.scdf.handlers.mark_feasible_successors = VAR_2;

 FUNC_6(VAR_6, &VAR_10.scdf, VAR_7, VAR_8);
 FUNC_8(&VAR_10.scdf, "SCCP");

 if (VAR_6->debug_level & VAR_1) {
  int VAR_13, VAR_14 = 1;

  for (VAR_13 = VAR_7->last_var; VAR_13 < VAR_8->vars_count; VAR_13++) {
   zval *VAR_15 = &VAR_10.values[VAR_13];

   if (FUNC_1(VAR_15) || FUNC_0(VAR_15)) {
    continue;
   }
   if (VAR_14) {
    VAR_14 = 0;
    FUNC_2(VAR_5, "\nSCCP Values for \"");
    FUNC_12(VAR_7);
    FUNC_2(VAR_5, "\":\n");
   }
   FUNC_2(VAR_5, "    #%d.", VAR_13);
   FUNC_13(VAR_7, VAR_0, VAR_8->vars[VAR_13].var);
   FUNC_2(VAR_5, " =");
   FUNC_9(VAR_15);
   FUNC_2(VAR_5, "\n");
  }
 }

 VAR_11 += FUNC_7(&VAR_10.scdf);
 VAR_11 += FUNC_3(&VAR_10);

 FUNC_4(&VAR_10);
 FUNC_11(&VAR_6->arena, VAR_12);

 return VAR_11;
}
