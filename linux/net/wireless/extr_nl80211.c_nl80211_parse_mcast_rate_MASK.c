
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_1__* bitrates; } ;
struct cfg80211_registered_device {struct wiphy wiphy; } ;
struct TYPE_2__ {int bitrate; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct cfg80211_registered_device *VAR_1,
    int VAR_2[VAR_0],
    int VAR_3)
{
 struct wiphy *VAR_4 = &VAR_1->wiphy;
 bool VAR_5 = 0;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct ieee80211_supported_band *VAR_8;

  VAR_8 = VAR_4->bands[VAR_6];
  if (!VAR_8)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_8->n_bitrates; VAR_7++) {
   if (VAR_8->bitrates[VAR_7].bitrate == VAR_3) {
    VAR_2[VAR_6] = VAR_7 + 1;
    VAR_5 = 1;
    break;
   }
  }
 }

 return VAR_5;
}
