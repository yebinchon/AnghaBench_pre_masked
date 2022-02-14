
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {struct sk_buff* skb; int key; int local; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_rx_result ;
typedef int __le16 ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct sk_buff*,int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;

ieee80211_rx_result
FUNC_9(struct ieee80211_rx_data *VAR_7)
{
 struct sk_buff *VAR_8 = VAR_7->skb;
 struct ieee80211_rx_status *VAR_9 = FUNC_0(VAR_8);
 struct ieee80211_hdr *VAR_10 = (struct ieee80211_hdr *)VAR_8->data;
 __le16 VAR_11 = VAR_10->frame_control;

 if (!FUNC_3(VAR_11) && !FUNC_2(VAR_11))
  return VAR_2;

 if (!(VAR_9->flag & VAR_4)) {
  if (FUNC_8(VAR_7->skb))
   return VAR_3;
  if (FUNC_4(VAR_7->local, VAR_7->skb, VAR_7->key))
   return VAR_3;
 } else if (!(VAR_9->flag & VAR_6)) {
  if (!FUNC_6(VAR_7->skb, FUNC_1(VAR_11) +
         VAR_1))
   return VAR_3;
  FUNC_5(VAR_7->local, VAR_7->skb, VAR_7->key);

  if (!(VAR_9->flag & VAR_5) &&
      FUNC_7(VAR_7->skb, VAR_7->skb->len - VAR_0))
   return VAR_3;
 }

 return VAR_2;
}
