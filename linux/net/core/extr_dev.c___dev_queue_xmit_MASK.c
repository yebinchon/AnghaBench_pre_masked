
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ tc_at_ingress; int sk; struct net_device* dev; } ;
struct netdev_queue {int xmit_lock_owner; int qdisc; } ;
struct net_device {int priv_flags; int flags; int tx_dropped; int name; } ;
struct Qdisc {scalar_t__ enqueue; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct netdev_queue*,int) ;
 int FUNC_1 (struct net_device*,struct netdev_queue*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct net_device*,struct netdev_queue*) ;
 int FUNC_3 (struct sk_buff*,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,struct net_device*,struct netdev_queue*,int*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_6 ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*,int ) ;
 struct netdev_queue* FUNC_12 (struct net_device*,struct sk_buff*,struct net_device*) ;
 int FUNC_13 (struct netdev_queue*) ;
 int FUNC_14 (struct sk_buff*) ;
 struct Qdisc* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 struct sk_buff* FUNC_18 (struct sk_buff*,int*,struct net_device*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 TYPE_1__* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (int *) ;
 int FUNC_26 (struct sk_buff*) ;
 scalar_t__ FUNC_27 (int) ;
 struct sk_buff* FUNC_28 (struct sk_buff*,struct net_device*,int*) ;

__attribute__((used)) static int FUNC_29(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct net_device *VAR_9 = VAR_7->dev;
 struct netdev_queue *VAR_10;
 struct Qdisc *VAR_11;
 int VAR_12 = -VAR_1;
 bool VAR_13 = 0;

 FUNC_21(VAR_7);

 if (FUNC_27(FUNC_22(VAR_7)->tx_flags & VAR_5))
  FUNC_3(VAR_7, ((void*)0), VAR_7->sk, VAR_4);




 FUNC_16();

 FUNC_23(VAR_7);

 FUNC_14(VAR_7);
 if (VAR_9->priv_flags & VAR_3)
  FUNC_19(VAR_7);
 else
  FUNC_20(VAR_7);

 VAR_10 = FUNC_12(VAR_9, VAR_7, VAR_8);
 VAR_11 = FUNC_15(VAR_10->qdisc);

 FUNC_26(VAR_7);
 if (VAR_11->enqueue) {
  VAR_12 = FUNC_2(VAR_7, VAR_11, VAR_9, VAR_10);
  goto out;
 }
 if (VAR_9->flags & VAR_2) {
  int VAR_14 = FUNC_24();

  if (VAR_10->xmit_lock_owner != VAR_14) {
   if (FUNC_7())
    goto recursion_alert;

   VAR_7 = FUNC_28(VAR_7, VAR_9, &VAR_13);
   if (!VAR_7)
    goto out;

   FUNC_0(VAR_9, VAR_10, VAR_14);

   if (!FUNC_13(VAR_10)) {
    FUNC_9();
    VAR_7 = FUNC_5(VAR_7, VAR_9, VAR_10, &VAR_12);
    FUNC_8();
    if (FUNC_6(VAR_12)) {
     FUNC_1(VAR_9, VAR_10);
     goto out;
    }
   }
   FUNC_1(VAR_9, VAR_10);
   FUNC_11("Virtual device %s asks to queue packet!\n",
          VAR_9->name);
  } else {



recursion_alert:
   FUNC_11("Dead loop on virtual device %s, fix it urgently!\n",
          VAR_9->name);
  }
 }

 VAR_12 = -VAR_0;
 FUNC_17();

 FUNC_4(&VAR_9->tx_dropped);
 FUNC_10(VAR_7);
 return VAR_12;
out:
 FUNC_17();
 return VAR_12;
}
