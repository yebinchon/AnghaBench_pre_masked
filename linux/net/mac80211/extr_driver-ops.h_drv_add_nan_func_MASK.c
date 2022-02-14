
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct cfg80211_nan_func {int dummy; } ;
struct TYPE_2__ {int (* add_nan_func ) (int *,int *,struct cfg80211_nan_func const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,struct cfg80211_nan_func const*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_nan_func const*) ;
 int FUNC_4 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int FUNC_5(struct ieee80211_local *VAR_1,
       struct ieee80211_sub_if_data *VAR_2,
       const struct cfg80211_nan_func *VAR_3)
{
 int VAR_4;

 FUNC_1();
 FUNC_0(VAR_2);

 if (!VAR_1->ops->add_nan_func)
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_1->ops->add_nan_func(&VAR_1->hw, &VAR_2->vif, VAR_3);
 FUNC_4(VAR_1, VAR_4);

 return VAR_4;
}
