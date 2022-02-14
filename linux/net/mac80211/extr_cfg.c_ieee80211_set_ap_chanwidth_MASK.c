
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int *) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
          struct net_device *VAR_1,
          struct cfg80211_chan_def *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 u32 VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_3, VAR_2, &VAR_5);
 if (VAR_4 == 0)
  FUNC_1(VAR_3, VAR_5);

 return VAR_4;
}
