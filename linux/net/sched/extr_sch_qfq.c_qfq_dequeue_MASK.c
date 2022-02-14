
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct qfq_sched {int iwsum; scalar_t__ V; struct qfq_aggregate* in_serv_agg; } ;
struct qfq_class {int dummy; } ;
struct qfq_aggregate {unsigned int budget; unsigned int initial_budget; unsigned int budgetmax; scalar_t__ F; int active; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (struct qfq_aggregate*,struct qfq_class*,unsigned int) ;
 int FUNC_1 (struct qfq_aggregate*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned int,unsigned long long,unsigned long long) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 struct qfq_sched* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 struct qfq_aggregate* FUNC_7 (struct qfq_sched*) ;
 struct sk_buff* FUNC_8 (struct qfq_aggregate*,struct qfq_class**,unsigned int*) ;
 int FUNC_9 (struct qfq_sched*,struct qfq_aggregate*) ;
 int FUNC_10 (struct qfq_sched*,struct qfq_aggregate*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct Qdisc *VAR_1)
{
 struct qfq_sched *VAR_2 = FUNC_5(VAR_1);
 struct qfq_aggregate *VAR_3 = VAR_2->in_serv_agg;
 struct qfq_class *VAR_4;
 struct sk_buff *VAR_5 = ((void*)0);

 unsigned int VAR_6 = 0;

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (!FUNC_2(&VAR_3->active))
  VAR_5 = FUNC_8(VAR_3, &VAR_4, &VAR_6);






 if (VAR_6 == 0 || VAR_3->budget < VAR_6) {
  FUNC_1(VAR_3);


  VAR_3->initial_budget = VAR_3->budget =
   VAR_3->budgetmax;

  if (!FUNC_2(&VAR_3->active)) {
   FUNC_10(VAR_2, VAR_3, VAR_0);
   FUNC_9(VAR_2, VAR_3);
  } else if (VAR_1->q.qlen == 0) {
   VAR_2->in_serv_agg = ((void*)0);
   return ((void*)0);
  }





  VAR_3 = VAR_2->in_serv_agg = FUNC_7(VAR_2);
  VAR_5 = FUNC_8(VAR_3, &VAR_4, &VAR_6);
 }
 if (!VAR_5)
  return ((void*)0);

 FUNC_6(VAR_1, VAR_5);
 VAR_1->q.qlen--;
 FUNC_4(VAR_1, VAR_5);

 FUNC_0(VAR_3, VAR_4, VAR_6);




 if (FUNC_11(VAR_3->budget < VAR_6))
  VAR_3->budget = 0;
 else
  VAR_3->budget -= VAR_6;

 VAR_2->V += (u64)VAR_6 * VAR_2->iwsum;
 FUNC_3("qfq dequeue: len %u F %lld now %lld\n",
   VAR_6, (unsigned long long) VAR_3->F,
   (unsigned long long) VAR_2->V);

 return VAR_5;
}
