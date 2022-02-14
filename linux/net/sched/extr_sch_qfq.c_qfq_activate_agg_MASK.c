
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {struct qfq_aggregate* in_serv_agg; int V; int oldV; } ;
struct qfq_aggregate {int S; int budgetmax; int budget; int initial_budget; } ;
typedef enum update_reason { ____Placeholder_update_reason } update_reason ;


 int FUNC_0 (struct qfq_sched*,struct qfq_aggregate*) ;
 int FUNC_1 (struct qfq_sched*,struct qfq_aggregate*,int) ;

__attribute__((used)) static void FUNC_2(struct qfq_sched *VAR_0, struct qfq_aggregate *VAR_1,
        enum update_reason VAR_2)
{
 VAR_1->initial_budget = VAR_1->budget = VAR_1->budgetmax;

 FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_0->in_serv_agg == ((void*)0)) {
  VAR_0->in_serv_agg = VAR_1;

  VAR_0->oldV = VAR_0->V = VAR_1->S;
 } else if (VAR_1 != VAR_0->in_serv_agg)
  FUNC_0(VAR_0, VAR_1);
}
