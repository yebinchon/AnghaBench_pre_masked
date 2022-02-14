
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int dummy; } ;
struct qfq_class {int alist; struct qfq_aggregate* agg; } ;
struct qfq_aggregate {int active; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct qfq_sched*,struct qfq_aggregate*) ;

__attribute__((used)) static void FUNC_3(struct qfq_sched *VAR_0, struct qfq_class *VAR_1)
{
 struct qfq_aggregate *VAR_2 = VAR_1->agg;


 FUNC_0(&VAR_1->alist);
 if (FUNC_1(&VAR_2->active))
  FUNC_2(VAR_0, VAR_2);
}
