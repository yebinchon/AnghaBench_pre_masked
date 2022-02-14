
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skbprio_sched_data {size_t highest_prio; size_t lowest_prio; TYPE_1__* qstats; struct sk_buff_head* qdiscs; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_3__ {int backlog; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 size_t FUNC_2 (struct skbprio_sched_data*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct skbprio_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff_head*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct Qdisc *VAR_1)
{
 struct skbprio_sched_data *VAR_2 = FUNC_5(VAR_1);
 struct sk_buff_head *VAR_3 = &VAR_2->qdiscs[VAR_2->highest_prio];
 struct sk_buff *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_8(!VAR_4))
  return ((void*)0);

 VAR_1->q.qlen--;
 FUNC_6(VAR_1, VAR_4);
 FUNC_3(VAR_1, VAR_4);

 VAR_2->qstats[VAR_2->highest_prio].backlog -= FUNC_4(VAR_4);


 if (FUNC_7(VAR_3)) {
  if (VAR_2->lowest_prio == VAR_2->highest_prio) {
   FUNC_0(VAR_1->q.qlen);
   VAR_2->highest_prio = 0;
   VAR_2->lowest_prio = VAR_0 - 1;
  } else {
   VAR_2->highest_prio = FUNC_2(VAR_2);
  }
 }
 return VAR_4;
}
