
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 scalar_t__ FUNC_0 (struct ieee80211_sub_if_data*,struct sta_info*,int ,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_supported_band*,struct sta_info*,scalar_t__) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_0,
     struct sta_info *VAR_1, u8 VAR_2,
     enum nl80211_band VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_0->local;
 struct ieee80211_supported_band *VAR_5 = VAR_4->hw.wiphy->bands[VAR_3];

 u32 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_6 > 0) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_4, VAR_5, VAR_1, VAR_6);
 }
}
