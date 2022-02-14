
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int wsum; int iwsum; struct qfq_aggregate* in_serv_agg; } ;
struct qfq_aggregate {scalar_t__ class_weight; int nonfull_next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qfq_aggregate*) ;
 struct qfq_aggregate* FUNC_2 (struct qfq_sched*) ;

__attribute__((used)) static void FUNC_3(struct qfq_sched *VAR_1, struct qfq_aggregate *VAR_2)
{
 FUNC_0(&VAR_2->nonfull_next);
 VAR_1->wsum -= VAR_2->class_weight;
 if (VAR_1->wsum != 0)
  VAR_1->iwsum = VAR_0 / VAR_1->wsum;

 if (VAR_1->in_serv_agg == VAR_2)
  VAR_1->in_serv_agg = FUNC_2(VAR_1);
 FUNC_1(VAR_2);
}
