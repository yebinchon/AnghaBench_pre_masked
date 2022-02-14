
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int num_workers; int instrument; } ;
struct TYPE_17__ {TYPE_9__* worker_instrument; TYPE_2__* state; int instrument; TYPE_1__* plan; } ;
struct TYPE_16__ {int num_plan_nodes; int* plan_node_id; int num_workers; } ;
struct TYPE_15__ {int es_query_cxt; } ;
struct TYPE_14__ {int plan_node_id; } ;
typedef int SortState ;
typedef TYPE_3__ SharedExecutorInstrumentation ;
typedef TYPE_4__ PlanState ;
typedef int MemoryContext ;
typedef int Instrumentation ;
typedef int HashState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;


 int VAR_1 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 TYPE_9__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_4__*,int (*) (TYPE_4__*,TYPE_3__*),TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_12(PlanState *VAR_2,
         SharedExecutorInstrumentation *VAR_3)
{
 Instrumentation *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = VAR_2->plan->plan_node_id;
 MemoryContext VAR_9;


 for (VAR_5 = 0; VAR_5 < VAR_3->num_plan_nodes; ++VAR_5)
  if (VAR_3->plan_node_id[VAR_5] == VAR_8)
   break;
 if (VAR_5 >= VAR_3->num_plan_nodes)
  FUNC_5(VAR_0, "plan node %d not found", VAR_8);


 VAR_4 = FUNC_2(VAR_3);
 VAR_4 += VAR_5 * VAR_3->num_workers;
 for (VAR_6 = 0; VAR_6 < VAR_3->num_workers; ++VAR_6)
  FUNC_3(VAR_2->instrument, &VAR_4[VAR_6]);
 VAR_9 = FUNC_4(VAR_2->state->es_query_cxt);
 VAR_7 = FUNC_7(VAR_3->num_workers, sizeof(Instrumentation));
 VAR_2->worker_instrument =
  FUNC_10(VAR_7 + FUNC_9(VAR_1, VAR_4));
 FUNC_4(VAR_9);

 VAR_2->worker_instrument->num_workers = VAR_3->num_workers;
 FUNC_6(&VAR_2->worker_instrument->instrument, VAR_4, VAR_7);


 switch (FUNC_8(VAR_2))
 {
  case 128:
   FUNC_1((SortState *) VAR_2);
   break;
  case 129:
   FUNC_0((HashState *) VAR_2);
   break;
  default:
   break;
 }

 return FUNC_11(VAR_2, FUNC_12,
         VAR_3);
}
