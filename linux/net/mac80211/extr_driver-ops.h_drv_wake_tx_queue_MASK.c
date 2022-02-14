
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vif; } ;
struct txq_info {TYPE_2__ txq; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; scalar_t__ in_reconfig; } ;
struct TYPE_3__ {int (* wake_tx_queue ) (int *,TYPE_2__*) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct txq_info*) ;
 struct ieee80211_sub_if_data* FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct ieee80211_local *VAR_0,
         struct txq_info *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_3(VAR_1->txq.vif);

 if (VAR_0->in_reconfig)
  return;

 if (!FUNC_0(VAR_2))
  return;

 FUNC_2(VAR_0, VAR_2, VAR_1);
 VAR_0->ops->wake_tx_queue(&VAR_0->hw, &VAR_1->txq);
}
