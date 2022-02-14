
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_2__ {int phy_cap_info; } ;
struct ieee80211_sta_he_cap {TYPE_1__ he_cap_elem; int * ppe_thres; } ;


 struct ieee80211_sta_he_cap* FUNC_0 (struct ieee80211_supported_band*,scalar_t__) ;
 struct ieee80211_supported_band* FUNC_1 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

u8 FUNC_4(struct ieee80211_sub_if_data *VAR_0, u8 VAR_1)
{
 const struct ieee80211_sta_he_cap *VAR_2;
 struct ieee80211_supported_band *VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_2(&VAR_2->he_cap_elem);
 return 2 + 1 +
        sizeof(VAR_2->he_cap_elem) + VAR_4 +
        FUNC_3(VAR_2->ppe_thres[0],
         VAR_2->he_cap_elem.phy_cap_info);
}
