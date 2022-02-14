
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211_sta {int dummy; } ;
struct sta_info {int rate_ctrl_lock; void* rate_ctrl_priv; struct ieee80211_sta sta; } ;
struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct ieee80211_tx_rate_control {int skb; } ;
struct TYPE_8__ {TYPE_4__* rates; } ;
struct ieee80211_tx_info {TYPE_3__ control; } ;
struct ieee80211_sub_if_data {int vif; TYPE_2__* local; } ;
struct TYPE_9__ {int idx; scalar_t__ count; scalar_t__ flags; } ;
struct TYPE_7__ {int hw; struct rate_control_ref* rate_ctrl; } ;
struct TYPE_6__ {int (* get_rate ) (int ,struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct ieee80211_sta*,int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct ieee80211_sta*,struct ieee80211_tx_rate_control*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;
 scalar_t__ FUNC_8 (struct sta_info*,int ) ;

void FUNC_9(struct ieee80211_sub_if_data *VAR_4,
      struct sta_info *VAR_5,
      struct ieee80211_tx_rate_control *VAR_6)
{
 struct rate_control_ref *VAR_7 = VAR_4->local->rate_ctrl;
 void *VAR_8 = ((void*)0);
 struct ieee80211_sta *VAR_9 = ((void*)0);
 struct ieee80211_tx_info *VAR_10 = FUNC_1(VAR_6->skb);
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_10->control.rates[VAR_11].idx = -1;
  VAR_10->control.rates[VAR_11].flags = 0;
  VAR_10->control.rates[VAR_11].count = 0;
 }

 if (FUNC_4(VAR_5 ? &VAR_5->sta : ((void*)0), VAR_6))
  return;

 if (FUNC_3(&VAR_4->local->hw, VAR_0))
  return;

 if (VAR_5 && FUNC_8(VAR_5, VAR_3)) {
  VAR_9 = &VAR_5->sta;
  VAR_8 = VAR_5->rate_ctrl_priv;
 }

 if (VAR_9) {
  FUNC_5(&VAR_5->rate_ctrl_lock);
  VAR_7->ops->get_rate(VAR_7->priv, VAR_9, VAR_8, VAR_6);
  FUNC_6(&VAR_5->rate_ctrl_lock);
 } else {
  FUNC_4(((void*)0), VAR_6);
 }

 if (FUNC_3(&VAR_4->local->hw, VAR_2))
  return;

 FUNC_2(&VAR_4->vif, VAR_9, VAR_6->skb,
          VAR_10->control.rates,
          FUNC_0(VAR_10->control.rates));
}
