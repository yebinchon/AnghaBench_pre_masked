
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {int tkip_iv16; int tkip_iv32; int security_idx; TYPE_3__* sta; TYPE_1__* local; struct sk_buff* skb; struct ieee80211_key* key; } ;
struct ieee80211_key {int dummy; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int ieee80211_rx_result ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {int wep_rx_ctx; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct ieee80211_key*,scalar_t__,int,int ,int ,int,int ,int *,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

ieee80211_rx_result
FUNC_8(struct ieee80211_rx_data *VAR_7)
{
 struct ieee80211_hdr *VAR_8 = (struct ieee80211_hdr *) VAR_7->skb->data;
 int VAR_9, VAR_10, VAR_11 = 0;
 struct ieee80211_key *VAR_12 = VAR_7->key;
 struct sk_buff *VAR_13 = VAR_7->skb;
 struct ieee80211_rx_status *VAR_14 = FUNC_0(VAR_13);

 VAR_9 = FUNC_1(VAR_8->frame_control);

 if (!FUNC_2(VAR_8->frame_control))
  return VAR_2;

 if (!VAR_7->sta || VAR_13->len - VAR_9 < 12)
  return VAR_3;


 if (FUNC_5(VAR_7->skb))
  return VAR_3;
 VAR_8 = (void *)VAR_13->data;






 if (VAR_14->flag & VAR_4)
  VAR_11 = 1;

 VAR_10 = FUNC_3(&VAR_7->local->wep_rx_ctx,
       VAR_12, VAR_13->data + VAR_9,
       VAR_13->len - VAR_9, VAR_7->sta->sta.addr,
       VAR_8->addr1, VAR_11, VAR_7->security_idx,
       &VAR_7->tkip_iv32,
       &VAR_7->tkip_iv16);
 if (VAR_10 != VAR_6)
  return VAR_3;


 if (!(VAR_14->flag & VAR_5))
  FUNC_7(VAR_13, VAR_13->len - VAR_0);


 FUNC_4(VAR_13->data + VAR_1, VAR_13->data, VAR_9);
 FUNC_6(VAR_13, VAR_1);

 return VAR_2;
}
