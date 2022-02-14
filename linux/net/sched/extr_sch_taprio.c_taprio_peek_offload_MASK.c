
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taprio_sched {struct Qdisc** qdiscs; } ;
struct sk_buff {int dummy; } ;
struct net_device {int num_tx_queues; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 struct net_device* FUNC_0 (struct Qdisc*) ;
 struct taprio_sched* FUNC_1 (struct Qdisc*) ;
 struct sk_buff* FUNC_2 (struct Qdisc*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct Qdisc *VAR_0)
{
 struct taprio_sched *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = FUNC_0(VAR_0);
 struct sk_buff *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_tx_queues; VAR_4++) {
  struct Qdisc *VAR_5 = VAR_1->qdiscs[VAR_4];

  if (FUNC_3(!VAR_5))
   continue;

  VAR_3 = VAR_5->ops->peek(VAR_5);
  if (!VAR_3)
   continue;

  return VAR_3;
 }

 return ((void*)0);
}
