
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct skbprio_sched_data {size_t highest_prio; size_t lowest_prio; TYPE_1__* qstats; struct sk_buff_head* qdiscs; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int priority; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {int limit; TYPE_2__ q; } ;
struct TYPE_3__ {int overlimits; int drops; int backlog; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 size_t FUNC_3 (struct skbprio_sched_data*) ;
 size_t FUNC_4 (int ,unsigned int const) ;
 int FUNC_5 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct skbprio_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_9 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
     struct sk_buff **VAR_5)
{
 const unsigned int VAR_6 = VAR_2 - 1;
 struct skbprio_sched_data *VAR_7 = FUNC_7(VAR_4);
 struct sk_buff_head *VAR_8;
 struct sk_buff_head *VAR_9;
 struct sk_buff *VAR_10;
 u16 VAR_11, VAR_12;


 VAR_11 = FUNC_4(VAR_3->priority, VAR_6);

 VAR_8 = &VAR_7->qdiscs[VAR_11];
 if (VAR_4->q.qlen < VAR_4->limit) {
  FUNC_2(VAR_8, VAR_3);
  FUNC_9(VAR_4, VAR_3);
  VAR_7->qstats[VAR_11].backlog += FUNC_6(VAR_3);


  if (VAR_11 > VAR_7->highest_prio)
   VAR_7->highest_prio = VAR_11;

  if (VAR_11 < VAR_7->lowest_prio)
   VAR_7->lowest_prio = VAR_11;

  VAR_4->q.qlen++;
  return VAR_1;
 }


 VAR_12 = VAR_7->lowest_prio;
 if (VAR_11 <= VAR_12) {
  VAR_7->qstats[VAR_11].drops++;
  VAR_7->qstats[VAR_11].overlimits++;
  return FUNC_5(VAR_3, VAR_4, VAR_5);
 }

 FUNC_2(VAR_8, VAR_3);
 FUNC_9(VAR_4, VAR_3);
 VAR_7->qstats[VAR_11].backlog += FUNC_6(VAR_3);


 VAR_9 = &VAR_7->qdiscs[VAR_12];
 VAR_10 = FUNC_1(VAR_9);
 FUNC_0(!VAR_10);
 FUNC_8(VAR_4, VAR_10);
 FUNC_5(VAR_10, VAR_4, VAR_5);

 VAR_7->qstats[VAR_12].backlog -= FUNC_6(VAR_10);
 VAR_7->qstats[VAR_12].drops++;
 VAR_7->qstats[VAR_12].overlimits++;


 if (FUNC_10(VAR_9)) {
  if (VAR_7->lowest_prio == VAR_7->highest_prio) {

   FUNC_0(VAR_4->q.qlen != 1);
   VAR_7->lowest_prio = VAR_11;
   VAR_7->highest_prio = VAR_11;
  } else {
   VAR_7->lowest_prio = FUNC_3(VAR_7);
  }
 }

 if (VAR_11 > VAR_7->highest_prio)
  VAR_7->highest_prio = VAR_11;

 return VAR_0;
}
