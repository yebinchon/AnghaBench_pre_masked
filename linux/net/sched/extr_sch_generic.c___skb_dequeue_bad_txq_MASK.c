
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netdev_queue {int dev; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {int flags; TYPE_1__ q; int skb_bad_txq; struct netdev_queue* dev_queue; } ;
typedef int spinlock_t ;


 struct sk_buff* VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct netdev_queue const*) ;
 scalar_t__ FUNC_2 (struct Qdisc*) ;
 int * FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_5 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_6 (struct Qdisc*) ;
 struct netdev_queue* FUNC_7 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static inline struct sk_buff *FUNC_11(struct Qdisc *VAR_2)
{
 const struct netdev_queue *VAR_3 = VAR_2->dev_queue;
 spinlock_t *VAR_4 = ((void*)0);
 struct sk_buff *VAR_5;

 if (VAR_2->flags & VAR_1) {
  VAR_4 = FUNC_3(VAR_2);
  FUNC_9(VAR_4);
 }

 VAR_5 = FUNC_8(&VAR_2->skb_bad_txq);
 if (VAR_5) {

  VAR_3 = FUNC_7(VAR_3->dev, VAR_5);
  if (!FUNC_1(VAR_3)) {
   VAR_5 = FUNC_0(&VAR_2->skb_bad_txq);
   if (FUNC_2(VAR_2)) {
    FUNC_5(VAR_2, VAR_5);
    FUNC_6(VAR_2);
   } else {
    FUNC_4(VAR_2, VAR_5);
    VAR_2->q.qlen--;
   }
  } else {
   VAR_5 = VAR_0;
  }
 }

 if (VAR_4)
  FUNC_10(VAR_4);

 return VAR_5;
}
