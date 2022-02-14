
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xstats ;
struct tc_qfq_stats {int lmax; int weight; } ;
struct qfq_class {int qdisc; int rate_est; int bstats; TYPE_1__* agg; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int lmax; int class_weight; } ;


 int FUNC_0 (struct gnet_dump*,struct tc_qfq_stats*,int) ;
 scalar_t__ FUNC_1 (int ,struct gnet_dump*,int *,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,int *) ;
 int FUNC_3 (struct tc_qfq_stats*,int ,int) ;
 scalar_t__ FUNC_4 (struct gnet_dump*,int ) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_0, unsigned long VAR_1,
    struct gnet_dump *VAR_2)
{
 struct qfq_class *VAR_3 = (struct qfq_class *)VAR_1;
 struct tc_qfq_stats VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.weight = VAR_3->agg->class_weight;
 VAR_4.lmax = VAR_3->agg->lmax;

 if (FUNC_1(FUNC_5(VAR_0),
      VAR_2, ((void*)0), &VAR_3->bstats) < 0 ||
     FUNC_2(VAR_2, &VAR_3->rate_est) < 0 ||
     FUNC_4(VAR_2, VAR_3->qdisc) < 0)
  return -1;

 return FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
