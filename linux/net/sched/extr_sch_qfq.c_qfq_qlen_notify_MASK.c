
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int dummy; } ;
struct qfq_class {int dummy; } ;
struct Qdisc {int dummy; } ;


 struct qfq_sched* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct qfq_sched*,struct qfq_class*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct qfq_sched *VAR_2 = FUNC_0(VAR_0);
 struct qfq_class *VAR_3 = (struct qfq_class *)VAR_1;

 FUNC_1(VAR_2, VAR_3);
}
