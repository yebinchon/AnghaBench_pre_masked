
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop_ap ) (int *,int *) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;

__attribute__((used)) static inline void FUNC_4(struct ieee80211_local *VAR_0,
          struct ieee80211_sub_if_data *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return;

 FUNC_3(VAR_0, VAR_1);
 if (VAR_0->ops->stop_ap)
  VAR_0->ops->stop_ap(&VAR_0->hw, &VAR_1->vif);
 FUNC_2(VAR_0);
}
