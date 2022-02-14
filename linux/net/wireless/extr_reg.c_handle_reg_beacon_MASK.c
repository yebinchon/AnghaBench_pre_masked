
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int regulatory_flags; struct ieee80211_supported_band** bands; } ;
struct TYPE_2__ {size_t band; scalar_t__ center_freq; } ;
struct reg_beacon {TYPE_1__ chan; } ;
struct ieee80211_supported_band {struct ieee80211_channel* channels; } ;
struct ieee80211_channel {scalar_t__ center_freq; int beacon_found; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wiphy*,struct ieee80211_channel*,struct ieee80211_channel*) ;
 int FUNC_2 (struct wiphy*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_2, unsigned int VAR_3,
         struct reg_beacon *VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 struct ieee80211_channel *VAR_6;
 bool VAR_7 = 0;
 struct ieee80211_channel VAR_8;

 VAR_5 = VAR_2->bands[VAR_4->chan.band];
 VAR_6 = &VAR_5->channels[VAR_3];

 if (FUNC_0(VAR_6->center_freq != VAR_4->chan.center_freq))
  return;

 if (VAR_6->beacon_found)
  return;

 VAR_6->beacon_found = 1;

 if (!FUNC_2(VAR_2))
  return;

 if (VAR_2->regulatory_flags & VAR_1)
  return;

 VAR_8 = *VAR_6;

 if (VAR_6->flags & VAR_0) {
  VAR_6->flags &= ~VAR_0;
  VAR_7 = 1;
 }

 if (VAR_7)
  FUNC_1(VAR_2, &VAR_8, VAR_6);
}
