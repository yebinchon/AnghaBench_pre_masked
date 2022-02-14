
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct sta_info {int sta; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct sta_info*,int ) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,int const*) ;
 int FUNC_7 (struct sta_info*,int ) ;

void
FUNC_8(struct wiphy *VAR_1,
         struct net_device *VAR_2,
         const u8 *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_0(VAR_2);
 struct ieee80211_local *VAR_5 = VAR_4->local;
 struct sta_info *VAR_6;

 FUNC_3(&VAR_5->sta_mtx);
 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_6) {
  FUNC_6(VAR_4,
    "Invalid TDLS peer %pM for channel switch cancel\n",
    VAR_3);
  goto out;
 }

 if (!FUNC_7(VAR_6, VAR_0)) {
  FUNC_6(VAR_4, "TDLS channel switch not initiated by %pM\n",
    VAR_3);
  goto out;
 }

 FUNC_2(VAR_5, VAR_4, &VAR_6->sta);
 FUNC_1(VAR_6, VAR_0);

out:
 FUNC_4(&VAR_5->sta_mtx);
}
