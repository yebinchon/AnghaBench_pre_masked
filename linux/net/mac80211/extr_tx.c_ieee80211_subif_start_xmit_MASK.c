
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ,int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;

netdev_tx_t FUNC_6(struct sk_buff *VAR_1,
           struct net_device *VAR_2)
{
 if (FUNC_5(FUNC_4(VAR_1, VAR_2))) {
  struct sk_buff_head VAR_3;

  FUNC_2(&VAR_3);
  FUNC_3(VAR_1, VAR_2, &VAR_3);
  while ((VAR_1 = FUNC_1(&VAR_3)))
   FUNC_0(VAR_1, VAR_2, 0, 0);
 } else {
  FUNC_0(VAR_1, VAR_2, 0, 0);
 }

 return VAR_0;
}
