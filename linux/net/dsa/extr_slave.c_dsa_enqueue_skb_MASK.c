
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;

netdev_tx_t FUNC_5(struct sk_buff *VAR_1, struct net_device *VAR_2)
{



 if (FUNC_4(FUNC_3(VAR_2)))
  return FUNC_1(VAR_2, VAR_1);




 VAR_1->dev = FUNC_2(VAR_2);
 FUNC_0(VAR_1);

 return VAR_0;
}
