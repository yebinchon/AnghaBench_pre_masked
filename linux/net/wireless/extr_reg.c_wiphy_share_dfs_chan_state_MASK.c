
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_channel*,struct ieee80211_channel*) ;
 int FUNC_1 (struct wiphy*,struct wiphy*) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_1,
           struct wiphy *VAR_2)
{
 struct ieee80211_supported_band *VAR_3, *VAR_4;
 struct ieee80211_channel *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (!FUNC_1(VAR_1, VAR_2))
  return;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_4 = VAR_1->bands[VAR_9];
  VAR_3 = VAR_2->bands[VAR_9];
  if (!VAR_4 || !VAR_3)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_4->n_channels; VAR_7++) {
   VAR_6 = &VAR_4->channels[VAR_7];
   for (VAR_8 = 0; VAR_8 < VAR_3->n_channels; VAR_8++) {
    VAR_5 = &VAR_3->channels[VAR_8];
    FUNC_0(VAR_6, VAR_5);
   }
  }
 }
}
