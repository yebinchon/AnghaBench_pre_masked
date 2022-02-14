
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long long (* get_tsf ) (int *,int *) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 unsigned long long FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_local*,unsigned long long) ;

u64 FUNC_5(struct ieee80211_local *VAR_0,
  struct ieee80211_sub_if_data *VAR_1)
{
 u64 VAR_2 = -1ULL;

 FUNC_1();

 if (!FUNC_0(VAR_1))
  return VAR_2;

 FUNC_3(VAR_0, VAR_1);
 if (VAR_0->ops->get_tsf)
  VAR_2 = VAR_0->ops->get_tsf(&VAR_0->hw, &VAR_1->vif);
 FUNC_4(VAR_0, VAR_2);
 return VAR_2;
}
