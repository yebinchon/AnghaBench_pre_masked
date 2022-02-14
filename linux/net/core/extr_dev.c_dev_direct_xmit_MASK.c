
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {struct net_device* dev; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int tx_dropped; } ;


 int FUNC_0 (struct net_device*,struct netdev_queue*,int ) ;
 int FUNC_1 (struct net_device*,struct netdev_queue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,struct net_device*,struct netdev_queue*,int) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct netdev_queue*) ;
 struct netdev_queue* FUNC_12 (struct net_device*,struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,struct net_device*,int*) ;

int FUNC_17(struct sk_buff *VAR_2, u16 VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 struct sk_buff *VAR_5 = VAR_2;
 struct netdev_queue *VAR_6;
 int VAR_7 = VAR_0;
 bool VAR_8 = 0;

 if (FUNC_15(!FUNC_10(VAR_4) ||
       !FUNC_9(VAR_4)))
  goto drop;

 VAR_2 = FUNC_16(VAR_2, VAR_4, &VAR_8);
 if (VAR_2 != VAR_5)
  goto drop;

 FUNC_13(VAR_2, VAR_3);
 VAR_6 = FUNC_12(VAR_4, VAR_2);

 FUNC_6();

 FUNC_0(VAR_4, VAR_6, FUNC_14());
 if (!FUNC_11(VAR_6))
  VAR_7 = FUNC_8(VAR_2, VAR_4, VAR_6, 0);
 FUNC_1(VAR_4, VAR_6);

 FUNC_7();

 if (!FUNC_3(VAR_7))
  FUNC_4(VAR_2);

 return VAR_7;
drop:
 FUNC_2(&VAR_4->tx_dropped);
 FUNC_5(VAR_2);
 return VAR_1;
}
