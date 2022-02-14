
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sta_info {int dummy; } ;
struct sk_buff {int len; } ;
struct ieee80211_tx_info {int flags; int hw_queue; } ;
struct ieee80211_tx_data {int sta; int skbs; int skb; int flags; } ;
struct TYPE_2__ {int * hw_queue; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; } ;
typedef scalar_t__ ieee80211_tx_result ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ieee80211_local*,int *,int,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,int ) ;
 scalar_t__ FUNC_6 (struct ieee80211_sub_if_data*,struct ieee80211_tx_data*,struct sta_info*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct ieee80211_tx_data*) ;
 int FUNC_8 (struct ieee80211_tx_data*) ;
 size_t FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static bool FUNC_11(struct ieee80211_sub_if_data *VAR_4,
    struct sta_info *VAR_5, struct sk_buff *VAR_6,
    bool VAR_7, u32 VAR_8)
{
 struct ieee80211_local *VAR_9 = VAR_4->local;
 struct ieee80211_tx_data VAR_10;
 ieee80211_tx_result VAR_11;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_6);
 bool VAR_13 = 1;
 int VAR_14;

 if (FUNC_10(VAR_6->len < 10)) {
  FUNC_2(VAR_6);
  return 1;
 }


 VAR_14 = VAR_6->len;
 VAR_11 = FUNC_6(VAR_4, &VAR_10, VAR_5, VAR_6);

 VAR_10.flags |= VAR_8;

 if (FUNC_10(VAR_11 == VAR_2)) {
  FUNC_3(&VAR_9->hw, VAR_6);
  return 1;
 } else if (FUNC_10(VAR_11 == VAR_3)) {
  return 1;
 }


 if (!(VAR_12->flags & VAR_0) ||
     !FUNC_4(&VAR_9->hw, VAR_1))
  VAR_12->hw_queue =
   VAR_4->vif.hw_queue[FUNC_9(VAR_6)];

 if (FUNC_7(&VAR_10))
  return 1;

 if (FUNC_5(VAR_9, VAR_4, VAR_10.sta, VAR_10.skb))
  return 1;

 if (!FUNC_8(&VAR_10))
  VAR_13 = FUNC_1(VAR_9, &VAR_10.skbs, VAR_14,
     VAR_10.sta, VAR_7);

 return VAR_13;
}
