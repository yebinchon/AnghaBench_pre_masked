
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_local {int tasklet; int tx_status_drop; int skb_queue_unreliable; int skb_queue; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_local* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ieee80211_hw *VAR_3,
     struct sk_buff *VAR_4)
{
 struct ieee80211_local *VAR_5 = FUNC_2(VAR_3);
 struct ieee80211_tx_info *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 VAR_4->pkt_type = VAR_2;
 FUNC_6(VAR_6->flags & VAR_1 ?
         &VAR_5->skb_queue : &VAR_5->skb_queue_unreliable, VAR_4);
 VAR_7 = FUNC_5(&VAR_5->skb_queue) +
  FUNC_5(&VAR_5->skb_queue_unreliable);
 while (VAR_7 > VAR_0 &&
        (VAR_4 = FUNC_4(&VAR_5->skb_queue_unreliable))) {
  FUNC_3(VAR_3, VAR_4);
  VAR_7--;
  FUNC_0(VAR_5->tx_status_drop);
 }
 FUNC_7(&VAR_5->tasklet);
}
