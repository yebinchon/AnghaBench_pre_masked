
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int sta; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sta_pre_rcu_remove ) (int *,int *,int *) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int *) ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_local *VAR_0,
       struct ieee80211_sub_if_data *VAR_1,
       struct sta_info *VAR_2)
{
 FUNC_2();

 VAR_1 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_1))
  return;

 FUNC_5(VAR_0, VAR_1, &VAR_2->sta);
 if (VAR_0->ops->sta_pre_rcu_remove)
  VAR_0->ops->sta_pre_rcu_remove(&VAR_0->hw, &VAR_1->vif,
            &VAR_2->sta);
 FUNC_4(VAR_0);
}
