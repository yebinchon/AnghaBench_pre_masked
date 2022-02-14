
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; } ;
struct ieee802154_local {int skb_queue; } ;



 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct ieee802154_local*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct ieee802154_local *VAR_1 = (struct ieee802154_local *)VAR_0;
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_3(&VAR_1->skb_queue))) {
  switch (VAR_2->pkt_type) {
  case 128:



   VAR_2->pkt_type = 0;
   FUNC_1(VAR_1, VAR_2);
   break;
  default:
   FUNC_0(1, "mac802154: Packet is of unknown type %d\n",
        VAR_2->pkt_type);
   FUNC_2(VAR_2);
   break;
  }
 }
}
