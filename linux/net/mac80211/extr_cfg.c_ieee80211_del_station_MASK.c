
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct station_del_parameters {int mac; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0, struct net_device *VAR_1,
     struct station_del_parameters *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->mac)
  return FUNC_1(VAR_3, VAR_2->mac);

 FUNC_2(VAR_3);
 return 0;
}
