
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct plug_sched_data {scalar_t__ limit; int pkts_current_epoch; int unplug_indefinite; } ;
struct TYPE_2__ {scalar_t__ backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*) ;
 struct plug_sched_data* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0, struct Qdisc *VAR_1,
   struct sk_buff **VAR_2)
{
 struct plug_sched_data *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_1->qstats.backlog + VAR_0->len <= VAR_3->limit)) {
  if (!VAR_3->unplug_indefinite)
   VAR_3->pkts_current_epoch++;
  return FUNC_2(VAR_0, VAR_1);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
