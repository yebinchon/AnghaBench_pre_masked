
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct sta_info {TYPE_1__ sta; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sta_info* FUNC_4 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_5 (struct sta_info*,struct station_info*,int) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_2, struct net_device *VAR_3,
      int VAR_4, u8 *VAR_5, struct station_info *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_3);
 struct ieee80211_local *VAR_8 = VAR_7->local;
 struct sta_info *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_2(&VAR_8->sta_mtx);

 VAR_9 = FUNC_4(VAR_7, VAR_4);
 if (VAR_9) {
  VAR_10 = 0;
  FUNC_1(VAR_5, VAR_9->sta.addr, VAR_1);
  FUNC_5(VAR_9, VAR_6, 1);
 }

 FUNC_3(&VAR_8->sta_mtx);

 return VAR_10;
}
