
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_rate_control {struct sk_buff* skb; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_tx_rate_control *VAR_2)
{
 struct sk_buff *VAR_3 = VAR_2->skb;
 struct ieee80211_hdr *VAR_4 = (struct ieee80211_hdr *) VAR_3->data;
 struct ieee80211_tx_info *VAR_5 = FUNC_0(VAR_3);
 __le16 VAR_6;

 VAR_6 = VAR_4->frame_control;

 return (VAR_5->flags & (VAR_0 |
          VAR_1)) ||
  !FUNC_1(VAR_6);
}
