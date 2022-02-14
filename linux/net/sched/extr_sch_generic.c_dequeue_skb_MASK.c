
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netdev_queue {int dev; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {int flags; struct sk_buff* (* dequeue ) (struct Qdisc*) ;TYPE_1__ q; int gso_skb; struct netdev_queue* dev_queue; } ;
typedef int spinlock_t ;


 struct sk_buff* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct netdev_queue const*) ;
 struct sk_buff* FUNC_2 (struct Qdisc*) ;
 scalar_t__ FUNC_3 (struct Qdisc*) ;
 int * FUNC_4 (struct Qdisc*) ;
 scalar_t__ FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_8 (struct Qdisc*) ;
 struct netdev_queue* FUNC_9 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct sk_buff* FUNC_14 (struct Qdisc*) ;
 int FUNC_15 (struct Qdisc*,struct netdev_queue const*,int,struct sk_buff*) ;
 int FUNC_16 (struct Qdisc*,struct sk_buff*,struct netdev_queue const*,int*) ;
 int FUNC_17 (struct Qdisc*,struct sk_buff*,int*) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_20(struct Qdisc *VAR_3, bool *VAR_4,
       int *VAR_5)
{
 const struct netdev_queue *VAR_6 = VAR_3->dev_queue;
 struct sk_buff *VAR_7 = ((void*)0);

 *VAR_5 = 1;
 if (FUNC_18(!FUNC_11(&VAR_3->gso_skb))) {
  spinlock_t *VAR_8 = ((void*)0);

  if (VAR_3->flags & VAR_1) {
   VAR_8 = FUNC_4(VAR_3);
   FUNC_12(VAR_8);
  }

  VAR_7 = FUNC_10(&VAR_3->gso_skb);




  if (!VAR_7) {
   if (VAR_8)
    FUNC_13(VAR_8);
   goto validate;
  }


  *VAR_4 = 0;
  if (FUNC_19(VAR_7))
   *VAR_4 = 1;

  VAR_6 = FUNC_9(VAR_6->dev, VAR_7);
  if (!FUNC_1(VAR_6)) {
   VAR_7 = FUNC_0(&VAR_3->gso_skb);
   if (FUNC_3(VAR_3)) {
    FUNC_7(VAR_3, VAR_7);
    FUNC_8(VAR_3);
   } else {
    FUNC_6(VAR_3, VAR_7);
    VAR_3->q.qlen--;
   }
  } else {
   VAR_7 = ((void*)0);
  }
  if (VAR_8)
   FUNC_13(VAR_8);
  goto trace;
 }
validate:
 *VAR_4 = 1;

 if ((VAR_3->flags & VAR_2) &&
     FUNC_1(VAR_6))
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 if (FUNC_18(VAR_7)) {
  if (VAR_7 == VAR_0)
   return ((void*)0);
  goto bulk;
 }
 VAR_7 = VAR_3->dequeue(VAR_3);
 if (VAR_7) {
bulk:
  if (FUNC_5(VAR_3))
   FUNC_16(VAR_3, VAR_7, VAR_6, VAR_5);
  else
   FUNC_17(VAR_3, VAR_7, VAR_5);
 }
trace:
 FUNC_15(VAR_3, VAR_6, *VAR_5, VAR_7);
 return VAR_7;
}
