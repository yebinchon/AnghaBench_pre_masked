
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int skb_iif; } ;
struct net_device {int ifindex; } ;
struct ieee802154_sub_if_data {int local; int sec; } ;
typedef int netdev_tx_t ;


 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,char*,int) ;

netdev_tx_t
FUNC_5(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct ieee802154_sub_if_data *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;





 VAR_4 = FUNC_3(&VAR_3->sec, VAR_1);
 if (VAR_4) {
  FUNC_4(VAR_2, "encryption failed: %i\n", VAR_4);
  FUNC_2(VAR_1);
  return VAR_0;
 }

 VAR_1->skb_iif = VAR_2->ifindex;

 return FUNC_1(VAR_3->local, VAR_1);
}
