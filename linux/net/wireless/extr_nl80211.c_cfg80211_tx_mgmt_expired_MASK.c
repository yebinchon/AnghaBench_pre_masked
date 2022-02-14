
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cfg80211_registered_device*,struct wireless_dev*,int ,struct ieee80211_channel*,int ,int ) ;
 int FUNC_1 (struct wireless_dev*,int ,struct ieee80211_channel*) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

void FUNC_3(struct wireless_dev *VAR_1, u64 VAR_2,
     struct ieee80211_channel *VAR_3,
     gfp_t VAR_4)
{
 struct wiphy *VAR_5 = VAR_1->wiphy;
 struct cfg80211_registered_device *VAR_6 = FUNC_2(VAR_5);

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0,
       VAR_6, VAR_1, VAR_2, VAR_3, 0, VAR_4);
}
