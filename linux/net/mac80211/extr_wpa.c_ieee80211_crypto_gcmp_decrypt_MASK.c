
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
struct TYPE_4__ {TYPE_1__ gcmp; } ;
struct ieee80211_key {TYPE_2__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_rx_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
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
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;

ieee80211_rx_result
FUNC_14(struct ieee80211_rx_data *VAR_10)
{
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_10->skb->data;
 int VAR_12;
 struct ieee80211_key *VAR_13 = VAR_10->key;
 struct sk_buff *VAR_14 = VAR_10->skb;
 struct ieee80211_rx_status *VAR_15 = FUNC_0(VAR_14);
 u8 VAR_16[VAR_3];
 int VAR_17, VAR_18, VAR_19 = VAR_2;

 VAR_12 = FUNC_4(VAR_11->frame_control);

 if (!FUNC_5(VAR_11->frame_control) &&
     !FUNC_6(VAR_14))
  return VAR_4;

 if (VAR_15->flag & VAR_7) {
  if (!FUNC_10(VAR_10->skb, VAR_12 + VAR_1))
   return VAR_5;
  if (VAR_15->flag & VAR_8)
   VAR_19 = 0;
 } else {
  if (FUNC_12(VAR_10->skb))
   return VAR_5;
 }

 VAR_17 = VAR_14->len - VAR_12 - VAR_1 - VAR_19;
 if (!VAR_10->sta || VAR_17 < 0)
  return VAR_5;

 if (!(VAR_15->flag & VAR_9)) {
  int VAR_20;

  FUNC_1(VAR_16, VAR_14->data + VAR_12);

  VAR_18 = VAR_10->security_idx;

  VAR_20 = FUNC_7(VAR_16, VAR_13->u.gcmp.rx_pn[VAR_18],
        VAR_3);
  if (VAR_20 < 0 ||
      (!VAR_20 && !(VAR_15->flag & VAR_6))) {
   VAR_13->u.gcmp.replays++;
   return VAR_5;
  }

  if (!(VAR_15->flag & VAR_7)) {
   u8 VAR_21[2 * VAR_0];
   u8 VAR_22[VAR_0];

   FUNC_2(VAR_14, VAR_16, VAR_22, VAR_21);

   if (FUNC_3(
        VAR_13->u.gcmp.tfm, VAR_22, VAR_21,
        VAR_14->data + VAR_12 + VAR_1,
        VAR_17,
        VAR_14->data + VAR_14->len -
        VAR_2))
    return VAR_5;
  }

  FUNC_8(VAR_13->u.gcmp.rx_pn[VAR_18], VAR_16, VAR_3);
 }


 if (FUNC_11(VAR_14, VAR_14->len - VAR_19))
  return VAR_5;
 FUNC_9(VAR_14->data + VAR_1, VAR_14->data, VAR_12);
 FUNC_13(VAR_14, VAR_1);

 return VAR_4;
}
