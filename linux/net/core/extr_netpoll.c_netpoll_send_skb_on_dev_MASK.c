
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netpoll_info {int tx_work; int txq; } ;
struct netpoll {TYPE_2__* dev; } ;
struct netdev_queue {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; int name; } ;
struct TYPE_4__ {int npinfo; } ;
struct TYPE_3__ {int ndo_start_xmit; } ;


 scalar_t__ FUNC_0 (struct net_device*,struct netdev_queue*) ;
 int FUNC_1 (struct net_device*,struct netdev_queue*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 () ;
 struct netdev_queue* FUNC_8 (struct net_device*,struct sk_buff*,int *) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct netdev_queue*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct sk_buff*,struct net_device*,struct netdev_queue*) ;
 struct netpoll_info* FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *,struct sk_buff*) ;
 int FUNC_19 (unsigned long) ;

void FUNC_20(struct netpoll *VAR_2, struct sk_buff *VAR_3,
        struct net_device *VAR_4)
{
 int VAR_5 = VAR_0;
 unsigned long VAR_6;

 struct netpoll_info *VAR_7;

 FUNC_7();

 VAR_7 = FUNC_15(VAR_2->dev->npinfo);
 if (!VAR_7 || !FUNC_10(VAR_4) || !FUNC_9(VAR_4)) {
  FUNC_3(VAR_3);
  return;
 }


 if (FUNC_17(&VAR_7->txq) == 0 && !FUNC_12(VAR_4)) {
  struct netdev_queue *VAR_8;

  VAR_8 = FUNC_8(VAR_4, VAR_3, ((void*)0));


  for (VAR_6 = FUNC_6(1)/VAR_1;
       VAR_6 > 0; --VAR_6) {
   if (FUNC_0(VAR_4, VAR_8)) {
    if (!FUNC_11(VAR_8))
     VAR_5 = FUNC_14(VAR_3, VAR_4, VAR_8);

    FUNC_1(VAR_4, VAR_8);

    if (FUNC_4(VAR_5))
     break;

   }


   FUNC_13(VAR_2->dev);

   FUNC_19(VAR_1);
  }

  FUNC_2(!FUNC_5(),
   "netpoll_send_skb_on_dev(): %s enabled interrupts in poll (%pS)\n",
   VAR_4->name, VAR_4->netdev_ops->ndo_start_xmit);

 }

 if (!FUNC_4(VAR_5)) {
  FUNC_18(&VAR_7->txq, VAR_3);
  FUNC_16(&VAR_7->tx_work,0);
 }
}
