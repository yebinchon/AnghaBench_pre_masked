
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_vif {int * hw_queue; } ;
struct TYPE_3__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {int band; int hw_queue; TYPE_1__ control; } ;
struct ieee80211_tx_data {int skbs; TYPE_2__* sta; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {struct ieee80211_sta sta; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_hw*,int *) ;
 scalar_t__ FUNC_5 (struct ieee80211_sub_if_data*,struct ieee80211_tx_data*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct ieee80211_tx_data*) ;
 size_t FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 struct ieee80211_sub_if_data* FUNC_9 (struct ieee80211_vif*) ;

bool FUNC_10(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2, struct sk_buff *VAR_3,
         int VAR_4, struct ieee80211_sta **VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_9(VAR_2);
 struct ieee80211_tx_info *VAR_7 = FUNC_0(VAR_3);
 struct ieee80211_tx_data VAR_8;
 struct sk_buff *VAR_9;

 if (FUNC_5(VAR_6, &VAR_8, ((void*)0), VAR_3) == VAR_0)
  return 0;

 VAR_7->band = VAR_4;
 VAR_7->control.vif = VAR_2;
 VAR_7->hw_queue = VAR_2->hw_queue[FUNC_7(VAR_3)];

 if (FUNC_6(&VAR_8))
  return 0;

 if (VAR_5) {
  if (VAR_8.sta)
   *VAR_5 = &VAR_8.sta->sta;
  else
   *VAR_5 = ((void*)0);
 }


 VAR_9 = FUNC_2(&VAR_8.skbs);
 if (FUNC_1(VAR_9 != VAR_3 || !FUNC_8(&VAR_8.skbs))) {
  FUNC_3(VAR_1, VAR_9);
  FUNC_4(VAR_1, &VAR_8.skbs);
  return 0;
 }

 return 1;
}
