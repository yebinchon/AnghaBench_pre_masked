
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct taprio_sched {int flags; struct Qdisc** qdiscs; int current_entry; } ;
struct sk_buff {int priority; } ;
struct sched_entry {int gate_mask; int budget; int close_time; } ;
struct net_device {int num_tx_queues; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__* ops; } ;
typedef int ktime_t ;
struct TYPE_3__ {struct sk_buff* (* dequeue ) (struct Qdisc*) ;struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct taprio_sched*,int) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct Qdisc*,struct sk_buff*) ;
 struct net_device* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct taprio_sched* FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*,struct sk_buff*) ;
 struct sched_entry* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 struct sk_buff* FUNC_15 (struct Qdisc*) ;
 struct sk_buff* FUNC_16 (struct Qdisc*) ;
 struct sk_buff* FUNC_17 (struct Qdisc*) ;
 int FUNC_18 (struct taprio_sched*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_20(struct Qdisc *VAR_1)
{
 struct taprio_sched *VAR_2 = FUNC_10(VAR_1);
 struct net_device *VAR_3 = FUNC_8(VAR_1);
 struct sk_buff *VAR_4 = ((void*)0);
 struct sched_entry *VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_13();
 VAR_5 = FUNC_12(VAR_2->current_entry);





 VAR_6 = VAR_5 ? VAR_5->gate_mask : VAR_0;

 if (!VAR_6)
  goto done;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_tx_queues; VAR_7++) {
  struct Qdisc *VAR_8 = VAR_2->qdiscs[VAR_7];
  ktime_t VAR_9;
  int VAR_10;
  int VAR_11;
  u8 VAR_12;

  if (FUNC_19(!VAR_8))
   continue;

  if (FUNC_1(VAR_2->flags)) {
   VAR_4 = VAR_8->ops->dequeue(VAR_8);
   if (!VAR_4)
    continue;
   goto skb_found;
  }

  VAR_4 = VAR_8->ops->peek(VAR_8);
  if (!VAR_4)
   continue;

  VAR_10 = VAR_4->priority;
  VAR_12 = FUNC_6(VAR_3, VAR_10);

  if (!(VAR_6 & FUNC_0(VAR_12)))
   continue;

  VAR_11 = FUNC_9(VAR_4);
  VAR_9 = FUNC_3(FUNC_18(VAR_2),
         FUNC_5(VAR_2, VAR_11));




  if (VAR_6 != VAR_0 &&
      FUNC_4(VAR_9, VAR_5->close_time))
   continue;


  if (VAR_6 != VAR_0 &&
      FUNC_2(VAR_11, &VAR_5->budget) < 0)
   continue;

  VAR_4 = VAR_8->ops->dequeue(VAR_8);
  if (FUNC_19(!VAR_4))
   goto done;

skb_found:
  FUNC_7(VAR_1, VAR_4);
  FUNC_11(VAR_1, VAR_4);
  VAR_1->q.qlen--;

  goto done;
 }

done:
 FUNC_14();

 return VAR_4;
}
