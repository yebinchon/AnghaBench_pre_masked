
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int pkt_type; } ;
struct ieee802154_local {int tasklet; int skb_queue; } ;
struct ieee802154_hw {int dummy; } ;
struct TYPE_2__ {int lqi; } ;


 int VAR_0 ;
 struct ieee802154_local* FUNC_0 (struct ieee802154_hw*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ieee802154_hw *VAR_1, struct sk_buff *VAR_2, u8 VAR_3)
{
 struct ieee802154_local *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2)->lqi = VAR_3;
 VAR_2->pkt_type = VAR_0;
 FUNC_2(&VAR_4->skb_queue, VAR_2);
 FUNC_3(&VAR_4->tasklet);
}
