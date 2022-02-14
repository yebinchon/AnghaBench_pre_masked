
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {size_t band; int center_freq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_reg_rule const*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_reg_rule* FUNC_2 (int ,struct ieee80211_regdomain const*,int ) ;
 struct ieee80211_regdomain* FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct ieee80211_channel*) ;

__attribute__((used)) static void FUNC_5(struct wiphy *VAR_5,
      struct ieee80211_channel *VAR_6)
{
 struct ieee80211_supported_band *VAR_7 = VAR_5->bands[VAR_6->band];
 struct ieee80211_channel *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 const struct ieee80211_regdomain *VAR_10;
 unsigned int VAR_11;
 u32 VAR_12;

 if (!FUNC_4(VAR_6)) {
  VAR_6->flags |= VAR_0;
  return;
 }





 for (VAR_11 = 0; VAR_11 < VAR_7->n_channels; VAR_11++) {
  struct ieee80211_channel *VAR_13 = &VAR_7->channels[VAR_11];

  if (VAR_13->center_freq == (VAR_6->center_freq - 20))
   VAR_8 = VAR_13;
  if (VAR_13->center_freq == (VAR_6->center_freq + 20))
   VAR_9 = VAR_13;
 }

 VAR_12 = 0;
 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10) {
  const struct ieee80211_reg_rule *VAR_14 =
   FUNC_2(FUNC_1(VAR_6->center_freq),
        VAR_10, FUNC_1(20));

  if (!FUNC_0(VAR_14))
   VAR_12 = VAR_14->flags;
 }






 if (!FUNC_4(VAR_8) ||
     VAR_12 & VAR_3)
  VAR_6->flags |= VAR_1;
 else
  VAR_6->flags &= ~VAR_1;

 if (!FUNC_4(VAR_9) ||
     VAR_12 & VAR_4)
  VAR_6->flags |= VAR_2;
 else
  VAR_6->flags &= ~VAR_2;
}
