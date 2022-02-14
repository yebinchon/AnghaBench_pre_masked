
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* del_nan_func ) (int *,int *,int ) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_5(struct ieee80211_local *VAR_0,
       struct ieee80211_sub_if_data *VAR_1,
       u8 VAR_2)
{
 FUNC_1();
 FUNC_0(VAR_1);

 FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->del_nan_func)
  VAR_0->ops->del_nan_func(&VAR_0->hw, &VAR_1->vif, VAR_2);
 FUNC_4(VAR_0);
}
