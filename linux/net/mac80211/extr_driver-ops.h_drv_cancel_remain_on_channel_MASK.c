
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cancel_remain_on_channel ) (int *,int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int
FUNC_4(struct ieee80211_local *VAR_0,
        struct ieee80211_sub_if_data *VAR_1)
{
 int VAR_2;

 FUNC_0();

 FUNC_2(VAR_0, VAR_1);
 VAR_2 = VAR_0->ops->cancel_remain_on_channel(&VAR_0->hw, &VAR_1->vif);
 FUNC_3(VAR_0, VAR_2);

 return VAR_2;
}
