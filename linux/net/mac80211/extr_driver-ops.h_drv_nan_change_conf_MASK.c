
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct cfg80211_nan_conf {int dummy; } ;
struct TYPE_2__ {int (* nan_change_conf ) (int *,int *,struct cfg80211_nan_conf*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,struct cfg80211_nan_conf*,int ) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_nan_conf*,int ) ;
 int FUNC_4 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int FUNC_5(struct ieee80211_local *VAR_1,
           struct ieee80211_sub_if_data *VAR_2,
           struct cfg80211_nan_conf *VAR_3,
           u32 VAR_4)
{
 int VAR_5;

 FUNC_1();
 FUNC_0(VAR_2);

 if (!VAR_1->ops->nan_change_conf)
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = VAR_1->ops->nan_change_conf(&VAR_1->hw, &VAR_2->vif, VAR_3,
       VAR_4);
 FUNC_4(VAR_1, VAR_5);

 return VAR_5;
}
