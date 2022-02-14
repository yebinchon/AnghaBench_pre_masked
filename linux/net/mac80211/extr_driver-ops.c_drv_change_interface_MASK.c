
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int (* change_interface ) (int *,int *,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_4 (struct ieee80211_local*,int) ;

int FUNC_5(struct ieee80211_local *VAR_1,
    struct ieee80211_sub_if_data *VAR_2,
    enum nl80211_iftype VAR_3, bool VAR_4)
{
 int VAR_5;

 FUNC_1();

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = VAR_1->ops->change_interface(&VAR_1->hw, &VAR_2->vif, VAR_3, VAR_4);
 FUNC_4(VAR_1, VAR_5);
 return VAR_5;
}
