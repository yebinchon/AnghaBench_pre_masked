
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int center_freq; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;

struct ieee80211_channel *FUNC_0(struct wiphy *VAR_1, int VAR_2)
{
 enum nl80211_band VAR_3;
 struct ieee80211_supported_band *VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1->bands[VAR_3];

  if (!VAR_4)
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_4->n_channels; VAR_5++) {
   if (VAR_4->channels[VAR_5].center_freq == VAR_2)
    return &VAR_4->channels[VAR_5];
  }
 }

 return ((void*)0);
}
