
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int dummy; } ;
struct qfq_class {struct qfq_aggregate* agg; } ;
struct qfq_aggregate {int num_classes; } ;


 int FUNC_0 (struct qfq_sched*,struct qfq_aggregate*) ;
 int FUNC_1 (struct qfq_sched*,struct qfq_aggregate*,int) ;

__attribute__((used)) static void FUNC_2(struct qfq_sched *VAR_0, struct qfq_class *VAR_1)
{
 struct qfq_aggregate *VAR_2 = VAR_1->agg;

 VAR_1->agg = ((void*)0);
 if (VAR_2->num_classes == 1) {
  FUNC_0(VAR_0, VAR_2);
  return;
 }
 FUNC_1(VAR_0, VAR_2, VAR_2->num_classes-1);
}
