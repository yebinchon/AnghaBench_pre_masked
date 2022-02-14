
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_txpower ) (int *,int *,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct ieee80211_local *VAR_1,
      struct ieee80211_sub_if_data *VAR_2, int *VAR_3)
{
 int VAR_4;

 if (!VAR_1->ops->get_txpower)
  return -VAR_0;

 VAR_4 = VAR_1->ops->get_txpower(&VAR_1->hw, &VAR_2->vif, VAR_3);
 FUNC_1(VAR_1, VAR_2, *VAR_3, VAR_4);

 return VAR_4;
}
