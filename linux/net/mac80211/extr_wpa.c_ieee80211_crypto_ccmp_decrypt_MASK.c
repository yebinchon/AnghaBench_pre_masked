
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int data; int len; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {int security_idx; int sta; struct sk_buff* skb; struct ieee80211_key* key; } ;
struct TYPE_3__ {int * rx_pn; int tfm; int replays; } ;
struct TYPE_4__ {TYPE_1__ ccmp; } ;
struct ieee80211_key {TYPE_2__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_rx_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct sk_buff*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;

ieee80211_rx_result
FUNC_14(struct ieee80211_rx_data *VAR_9,
         unsigned int VAR_10)
{
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_9->skb->data;
 int VAR_12;
 struct ieee80211_key *VAR_13 = VAR_9->key;
 struct sk_buff *VAR_14 = VAR_9->skb;
 struct ieee80211_rx_status *VAR_15 = FUNC_0(VAR_14);
 u8 VAR_16[VAR_2];
 int VAR_17;
 int VAR_18;

 VAR_12 = FUNC_4(VAR_11->frame_control);

 if (!FUNC_5(VAR_11->frame_control) &&
     !FUNC_6(VAR_14))
  return VAR_3;

 if (VAR_15->flag & VAR_6) {
  if (!FUNC_10(VAR_9->skb, VAR_12 + VAR_1))
   return VAR_4;
  if (VAR_15->flag & VAR_7)
   VAR_10 = 0;
 } else {
  if (FUNC_12(VAR_9->skb))
   return VAR_4;
 }

 VAR_17 = VAR_14->len - VAR_12 - VAR_1 - VAR_10;
 if (!VAR_9->sta || VAR_17 < 0)
  return VAR_4;

 if (!(VAR_15->flag & VAR_8)) {
  int VAR_19;

  FUNC_1(VAR_16, VAR_14->data + VAR_12);

  VAR_18 = VAR_9->security_idx;

  VAR_19 = FUNC_7(VAR_16, VAR_13->u.ccmp.rx_pn[VAR_18],
        VAR_2);
  if (VAR_19 < 0 ||
      (!VAR_19 && !(VAR_15->flag & VAR_5))) {
   VAR_13->u.ccmp.replays++;
   return VAR_4;
  }

  if (!(VAR_15->flag & VAR_6)) {
   u8 VAR_20[2 * VAR_0];
   u8 VAR_21[VAR_0];

   FUNC_2(VAR_14, VAR_16, VAR_21, VAR_20);

   if (FUNC_3(
        VAR_13->u.ccmp.tfm, VAR_21, VAR_20,
        VAR_14->data + VAR_12 + VAR_1,
        VAR_17,
        VAR_14->data + VAR_14->len - VAR_10))
    return VAR_4;
  }

  FUNC_8(VAR_13->u.ccmp.rx_pn[VAR_18], VAR_16, VAR_2);
 }


 if (FUNC_11(VAR_14, VAR_14->len - VAR_10))
  return VAR_4;
 FUNC_9(VAR_14->data + VAR_1, VAR_14->data, VAR_12);
 FUNC_13(VAR_14, VAR_1);

 return VAR_3;
}
