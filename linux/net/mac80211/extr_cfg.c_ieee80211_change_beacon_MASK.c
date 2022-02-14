
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int beacon; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;
struct TYPE_4__ {scalar_t__ csa_active; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct cfg80211_beacon_data {int dummy; } ;
struct beacon_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct cfg80211_beacon_data*,int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 struct beacon_data* FUNC_4 (int ,struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_2, struct net_device *VAR_3,
       struct cfg80211_beacon_data *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5;
 struct beacon_data *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_3(VAR_5);




 if (VAR_5->vif.csa_active)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5->u.ap.beacon, VAR_5);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_5, VAR_4, ((void*)0));
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_2(VAR_5, VAR_7);
 return 0;
}
