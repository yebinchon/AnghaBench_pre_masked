
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 struct wireless_dev* FUNC_0 (int) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct wireless_dev*) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211_local*,char const*,unsigned char,struct wireless_dev**,int,struct vif_params*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct vif_params*) ;
 struct ieee80211_local* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *FUNC_6(struct wiphy *VAR_1,
      const char *VAR_2,
      unsigned char VAR_3,
      enum nl80211_iftype VAR_4,
      struct vif_params *VAR_5)
{
 struct ieee80211_local *VAR_6 = FUNC_5(VAR_1);
 struct wireless_dev *VAR_7;
 struct ieee80211_sub_if_data *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_2, VAR_3, &VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_8 = FUNC_1(VAR_7);

 if (VAR_4 == VAR_0) {
  VAR_9 = FUNC_4(VAR_8, VAR_5);
  if (VAR_9) {
   FUNC_3(VAR_8);
   return ((void*)0);
  }
 }

 return VAR_7;
}
