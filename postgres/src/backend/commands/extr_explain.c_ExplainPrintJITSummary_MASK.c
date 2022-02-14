
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {TYPE_2__* estate; } ;
struct TYPE_9__ {int es_jit_flags; int * es_jit_worker_instr; TYPE_1__* es_jit; } ;
struct TYPE_8__ {int instr; } ;
typedef TYPE_3__ QueryDesc ;
typedef TYPE_4__ JitInstrumentation ;
typedef int ExplainState ;


 int FUNC_0 (int *,int,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int VAR_0 ;

void
FUNC_2(ExplainState *VAR_1, QueryDesc *VAR_2)
{
 JitInstrumentation VAR_3 = {0};

 if (!(VAR_2->estate->es_jit_flags & VAR_0))
  return;





 if (VAR_2->estate->es_jit)
  FUNC_1(&VAR_3, &VAR_2->estate->es_jit->instr);


 if (VAR_2->estate->es_jit_worker_instr)
  FUNC_1(&VAR_3, VAR_2->estate->es_jit_worker_instr);

 FUNC_0(VAR_1, VAR_2->estate->es_jit_flags, &VAR_3, -1);
}
