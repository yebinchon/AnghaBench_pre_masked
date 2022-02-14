
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct TYPE_6__ {int * hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_tx_data {TYPE_4__* key; TYPE_1__* local; struct sk_buff* skb; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_7__ {scalar_t__ cipher; int flags; int * key; } ;
struct TYPE_8__ {TYPE_3__ conf; } ;
struct TYPE_5__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int,char*,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,struct ieee80211_hdr*,int *,size_t,int *) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int * FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

ieee80211_tx_result
FUNC_11(struct ieee80211_tx_data *VAR_12)
{
 u8 *VAR_13, *VAR_14, *VAR_15;
 size_t VAR_16;
 unsigned int VAR_17;
 struct ieee80211_hdr *VAR_18;
 struct sk_buff *VAR_19 = VAR_12->skb;
 struct ieee80211_tx_info *VAR_20 = FUNC_0(VAR_19);
 int VAR_21;

 VAR_18 = (struct ieee80211_hdr *)VAR_19->data;
 if (!VAR_12->key || VAR_12->key->conf.cipher != VAR_11 ||
     VAR_19->len < 24 || !FUNC_4(VAR_18->frame_control))
  return VAR_9;

 VAR_17 = FUNC_2(VAR_18->frame_control);
 if (VAR_19->len < VAR_17)
  return VAR_10;

 VAR_13 = VAR_19->data + VAR_17;
 VAR_16 = VAR_19->len - VAR_17;

 if (FUNC_10(VAR_20->flags & VAR_5)) {

  VAR_20->control.hw_key = ((void*)0);
 }

 if (VAR_20->control.hw_key &&
     (VAR_20->flags & VAR_4 ||
      FUNC_3(&VAR_12->local->hw, VAR_8)) &&
     !(VAR_12->key->conf.flags & (VAR_0 |
         VAR_1))) {

  return VAR_9;
 }

 VAR_21 = VAR_6;
 if (!VAR_20->control.hw_key)
  VAR_21 += VAR_2;

 if (FUNC_1(FUNC_9(VAR_19) < VAR_21 ||
   FUNC_7(VAR_19) < VAR_3,
   "mmic: not enough head/tail (%d/%d,%d/%d)\n",
   FUNC_7(VAR_19), VAR_3,
   FUNC_9(VAR_19), VAR_21))
  return VAR_10;

 VAR_15 = FUNC_8(VAR_19, VAR_6);

 if (VAR_12->key->conf.flags & VAR_1) {

  FUNC_5(VAR_15, 0, VAR_6);
  return VAR_9;
 }

 VAR_14 = &VAR_12->key->conf.key[VAR_7];
 FUNC_6(VAR_14, VAR_18, VAR_13, VAR_16, VAR_15);
 if (FUNC_10(VAR_20->flags & VAR_5))
  VAR_15[0]++;

 return VAR_9;
}
