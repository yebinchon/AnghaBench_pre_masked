
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct cfg80211_gtk_rekey_data {int dummy; } ;
struct TYPE_2__ {int (* set_rekey_data ) (int *,int *,struct cfg80211_gtk_rekey_data*) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,int *,struct cfg80211_gtk_rekey_data*) ;
 int FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_gtk_rekey_data*) ;

__attribute__((used)) static inline void FUNC_4(struct ieee80211_local *VAR_0,
          struct ieee80211_sub_if_data *VAR_1,
          struct cfg80211_gtk_rekey_data *VAR_2)
{
 if (!FUNC_0(VAR_1))
  return;

 FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->set_rekey_data)
  VAR_0->ops->set_rekey_data(&VAR_0->hw, &VAR_1->vif, VAR_2);
 FUNC_2(VAR_0);
}
