
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;
struct TYPE_2__ {int (* remain_on_channel ) (int *,int *,struct ieee80211_channel*,unsigned int,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,struct ieee80211_channel*,unsigned int,int) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_channel*,unsigned int,int) ;
 int FUNC_3 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int FUNC_4(struct ieee80211_local *VAR_0,
     struct ieee80211_sub_if_data *VAR_1,
     struct ieee80211_channel *VAR_2,
     unsigned int VAR_3,
     enum ieee80211_roc_type VAR_4)
{
 int VAR_5;

 FUNC_0();

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = VAR_0->ops->remain_on_channel(&VAR_0->hw, &VAR_1->vif,
         VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_0, VAR_5);

 return VAR_5;
}
