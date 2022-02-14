
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mac80211_qos_map {int qos_map; } ;
struct ieee80211_sub_if_data {int qos_map; } ;
struct cfg80211_qos_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mac80211_qos_map*,int ) ;
 struct mac80211_qos_map* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct cfg80211_qos_map*,int) ;
 int FUNC_4 (int ,struct mac80211_qos_map*) ;
 int VAR_2 ;
 struct mac80211_qos_map* FUNC_5 (int ,struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_3,
     struct net_device *VAR_4,
     struct cfg80211_qos_map *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_4);
 struct mac80211_qos_map *VAR_7, *VAR_8;

 if (VAR_5) {
  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   return -VAR_0;
  FUNC_3(&VAR_7->qos_map, VAR_5, sizeof(*VAR_5));
 } else {

  VAR_7 = ((void*)0);
 }

 VAR_8 = FUNC_5(VAR_6->qos_map, VAR_6);
 FUNC_4(VAR_6->qos_map, VAR_7);
 if (VAR_8)
  FUNC_1(VAR_8, VAR_2);

 return 0;
}
