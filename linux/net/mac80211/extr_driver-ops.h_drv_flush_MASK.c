
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_vif vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flush ) (int *,struct ieee80211_vif*,int ,int) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct ieee80211_vif*,int ,int) ;
 int FUNC_3 (struct ieee80211_local*,int ,int) ;
 int FUNC_4 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_5(struct ieee80211_local *VAR_0,
        struct ieee80211_sub_if_data *VAR_1,
        u32 VAR_2, bool VAR_3)
{
 struct ieee80211_vif *VAR_4 = VAR_1 ? &VAR_1->vif : ((void*)0);

 FUNC_1();

 if (VAR_1 && !FUNC_0(VAR_1))
  return;

 FUNC_3(VAR_0, VAR_2, VAR_3);
 if (VAR_0->ops->flush)
  VAR_0->ops->flush(&VAR_0->hw, VAR_4, VAR_2, VAR_3);
 FUNC_4(VAR_0);
}
