
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct taprio_sched {int flags; struct Qdisc** qdiscs; int current_entry; } ;
struct sk_buff {int priority; } ;
struct sched_entry {int gate_mask; } ;
struct net_device {int num_tx_queues; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;
 struct taprio_sched* FUNC_4 (struct Qdisc*) ;
 struct sched_entry* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct sk_buff* FUNC_8 (struct Qdisc*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct Qdisc *VAR_1)
{
 struct taprio_sched *VAR_2 = FUNC_4(VAR_1);
 struct net_device *VAR_3 = FUNC_3(VAR_1);
 struct sched_entry *VAR_4;
 struct sk_buff *VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_6();
 VAR_4 = FUNC_5(VAR_2->current_entry);
 VAR_6 = VAR_4 ? VAR_4->gate_mask : VAR_0;
 FUNC_7();

 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_3->num_tx_queues; VAR_7++) {
  struct Qdisc *VAR_8 = VAR_2->qdiscs[VAR_7];
  int VAR_9;
  u8 VAR_10;

  if (FUNC_9(!VAR_8))
   continue;

  VAR_5 = VAR_8->ops->peek(VAR_8);
  if (!VAR_5)
   continue;

  if (FUNC_1(VAR_2->flags))
   return VAR_5;

  VAR_9 = VAR_5->priority;
  VAR_10 = FUNC_2(VAR_3, VAR_9);

  if (!(VAR_6 & FUNC_0(VAR_10)))
   continue;

  return VAR_5;
 }

 return ((void*)0);
}
