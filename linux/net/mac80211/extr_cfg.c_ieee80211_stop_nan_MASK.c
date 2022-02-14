
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_sub_if_data {int local; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_0,
          struct wireless_dev *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->local, VAR_2);
 FUNC_2(VAR_2);
}
