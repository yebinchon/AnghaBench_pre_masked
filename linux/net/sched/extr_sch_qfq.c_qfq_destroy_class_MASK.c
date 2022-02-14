
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int dummy; } ;
struct qfq_class {int qdisc; int rate_est; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qfq_class*) ;
 struct qfq_sched* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qfq_sched*,struct qfq_class*) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0, struct qfq_class *VAR_1)
{
 struct qfq_sched *VAR_2 = FUNC_2(VAR_0);

 FUNC_4(VAR_2, VAR_1);
 FUNC_0(&VAR_1->rate_est);
 FUNC_3(VAR_1->qdisc);
 FUNC_1(VAR_1);
}
