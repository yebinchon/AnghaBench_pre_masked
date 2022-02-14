
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int instrument; TYPE_1__* plan; } ;
struct TYPE_12__ {int num_plan_nodes; int* plan_node_id; int num_workers; } ;
struct TYPE_11__ {int plan_node_id; } ;
typedef TYPE_2__ SharedExecutorInstrumentation ;
typedef TYPE_3__ PlanState ;
typedef int Instrumentation ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 size_t VAR_1 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_3__*,int (*) (TYPE_3__*,TYPE_2__*),TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_7(PlanState *VAR_2,
          SharedExecutorInstrumentation *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_2->plan->plan_node_id;
 Instrumentation *VAR_6;

 FUNC_3(VAR_2->instrument);







 for (VAR_4 = 0; VAR_4 < VAR_3->num_plan_nodes; ++VAR_4)
  if (VAR_3->plan_node_id[VAR_4] == VAR_5)
   break;
 if (VAR_4 >= VAR_3->num_plan_nodes)
  FUNC_5(VAR_0, "plan node %d not found", VAR_5);





 VAR_6 = FUNC_1(VAR_3);
 VAR_6 += VAR_4 * VAR_3->num_workers;
 FUNC_0(FUNC_4());
 FUNC_0(VAR_1 < VAR_3->num_workers);
 FUNC_2(&VAR_6[VAR_1], VAR_2->instrument);

 return FUNC_6(VAR_2, FUNC_7,
         VAR_3);
}
