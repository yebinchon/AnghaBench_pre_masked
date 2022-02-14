
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; struct net_device* dev; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_7__ {int flags; } ;
struct ieee802154_local {int tx_work; int workqueue; struct sk_buff* tx_skb; TYPE_3__ hw; TYPE_1__* ops; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {scalar_t__ xmit_async; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct ieee802154_local*,struct sk_buff*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_13(struct ieee802154_local *VAR_4, struct sk_buff *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->dev;
 int VAR_7;

 if (!(VAR_4->hw.flags & VAR_2)) {
  struct sk_buff *VAR_8;
  u16 VAR_9;

  if (FUNC_12(FUNC_11(VAR_5) < VAR_1)) {
   VAR_8 = FUNC_9(VAR_5, 0, VAR_1,
            VAR_0);
   if (FUNC_6(VAR_8)) {
    FUNC_0(VAR_5);
    VAR_5 = VAR_8;
   } else {
    goto err_tx;
   }
  }

  VAR_9 = FUNC_1(0, VAR_5->data, VAR_5->len);
  FUNC_7(VAR_9, FUNC_10(VAR_5, 2));
 }


 FUNC_3(&VAR_4->hw);


 if (VAR_4->ops->xmit_async) {
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (VAR_7) {
   FUNC_4(&VAR_4->hw);
   goto err_tx;
  }

  VAR_6->stats.tx_packets++;
  VAR_6->stats.tx_bytes += VAR_5->len;
 } else {
  VAR_4->tx_skb = VAR_5;
  FUNC_8(VAR_4->workqueue, &VAR_4->tx_work);
 }

 return VAR_3;

err_tx:
 FUNC_5(VAR_5);
 return VAR_3;
}
