
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int regulatory_flags; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_power_rule {int max_eirp; int max_antenna_gain; } ;
struct ieee80211_reg_rule {scalar_t__ dfs_cac_ms; int flags; struct ieee80211_power_rule power_rule; } ;
struct ieee80211_channel {int center_freq; int flags; int orig_flags; int beacon_found; int max_antenna_gain; int max_reg_power; int max_power; scalar_t__ dfs_cac_ms; int dfs_state; int dfs_state_entered; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_reg_rule* FUNC_4 (int,struct ieee80211_regdomain const*,int) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ieee80211_regdomain const*,struct ieee80211_reg_rule const*,struct ieee80211_channel*) ;

__attribute__((used)) static void FUNC_8(struct wiphy *VAR_6,
      struct ieee80211_channel *VAR_7,
      const struct ieee80211_regdomain *VAR_8)
{
 u32 VAR_9 = 0;
 const struct ieee80211_reg_rule *VAR_10 = ((void*)0);
 const struct ieee80211_power_rule *VAR_11 = ((void*)0);
 u32 VAR_12;

 for (VAR_12 = FUNC_3(20); VAR_12 >= FUNC_3(5); VAR_12 = VAR_12 / 2) {
  VAR_10 = FUNC_4(FUNC_3(VAR_7->center_freq),
           VAR_8, VAR_12);
  if (!FUNC_0(VAR_10))
   break;
 }

 if (FUNC_0(VAR_10)) {
  FUNC_6("Disabling freq %d MHz as custom regd has no rule that fits it\n",
    VAR_7->center_freq);
  if (VAR_6->regulatory_flags & VAR_4) {
   VAR_7->flags |= VAR_0;
  } else {
   VAR_7->orig_flags |= VAR_0;
   VAR_7->flags = VAR_7->orig_flags;
  }
  return;
 }

 VAR_11 = &VAR_10->power_rule;
 VAR_9 = FUNC_7(VAR_8, VAR_10, VAR_7);

 VAR_7->dfs_state_entered = VAR_5;
 VAR_7->dfs_state = VAR_3;

 VAR_7->beacon_found = 0;

 if (VAR_6->regulatory_flags & VAR_4)
  VAR_7->flags = VAR_7->orig_flags | VAR_9 |
         FUNC_5(VAR_10->flags);
 else
  VAR_7->flags |= FUNC_5(VAR_10->flags) | VAR_9;

 VAR_7->max_antenna_gain = (int) FUNC_1(VAR_11->max_antenna_gain);
 VAR_7->max_reg_power = VAR_7->max_power =
  (int) FUNC_2(VAR_11->max_eirp);

 if (VAR_7->flags & VAR_1) {
  if (VAR_10->dfs_cac_ms)
   VAR_7->dfs_cac_ms = VAR_10->dfs_cac_ms;
  else
   VAR_7->dfs_cac_ms = VAR_2;
 }

 VAR_7->max_power = VAR_7->max_reg_power;
}
