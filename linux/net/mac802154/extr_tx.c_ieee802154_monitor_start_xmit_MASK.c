
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int skb_iif; } ;
struct net_device {int ifindex; } ;
struct ieee802154_sub_if_data {int local; } ;
typedef int netdev_tx_t ;


 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

netdev_tx_t
FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct ieee802154_sub_if_data *VAR_2 = FUNC_0(VAR_1);

 VAR_0->skb_iif = VAR_1->ifindex;

 return FUNC_1(VAR_2->local, VAR_0);
}
