
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {TYPE_1__* ops; } ;
struct cfg80211_gtk_rekey_data {int dummy; } ;
struct TYPE_2__ {int set_rekey_data; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_gtk_rekey_data*) ;
 struct ieee80211_local* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_1,
        struct net_device *VAR_2,
        struct cfg80211_gtk_rekey_data *VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_2(VAR_1);
 struct ieee80211_sub_if_data *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_4->ops->set_rekey_data)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_5, VAR_3);

 return 0;
}
