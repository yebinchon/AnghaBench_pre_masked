
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int beacon_found; int orig_mpwr; int max_power; int orig_mag; int max_antenna_gain; int orig_flags; int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wiphy *VAR_1)
{
 struct ieee80211_supported_band *VAR_2;
 enum nl80211_band VAR_3;
 struct ieee80211_channel *VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->bands[VAR_3];
  if (!VAR_2)
   continue;
  for (VAR_5 = 0; VAR_5 < VAR_2->n_channels; VAR_5++) {
   VAR_4 = &VAR_2->channels[VAR_5];
   VAR_4->flags = VAR_4->orig_flags;
   VAR_4->max_antenna_gain = VAR_4->orig_mag;
   VAR_4->max_power = VAR_4->orig_mpwr;
   VAR_4->beacon_found = 0;
  }
 }
}
