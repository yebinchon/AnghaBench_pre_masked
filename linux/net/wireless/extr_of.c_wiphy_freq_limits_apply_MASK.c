
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_freq_range {int dummy; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct wiphy*,struct ieee80211_freq_range*,unsigned int,struct ieee80211_channel*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_2,
        struct ieee80211_freq_range *VAR_3,
        unsigned int VAR_4)
{
 enum nl80211_band VAR_5;
 int VAR_6;

 if (FUNC_0(!VAR_4))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct ieee80211_supported_band *VAR_7 = VAR_2->bands[VAR_5];

  if (!VAR_7)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_7->n_channels; VAR_6++) {
   struct ieee80211_channel *VAR_8 = &VAR_7->channels[VAR_6];

   if (VAR_8->flags & VAR_0)
    continue;

   if (!FUNC_2(VAR_2, VAR_3,
         VAR_4,
         VAR_8)) {
    FUNC_1("Disabling freq %d MHz as it's out of OF limits\n",
      VAR_8->center_freq);
    VAR_8->flags |= VAR_0;
   }
  }
 }
}
