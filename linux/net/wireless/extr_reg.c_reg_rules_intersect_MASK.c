
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_wmm_rule {int * ap; int * client; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_power_rule {scalar_t__ max_eirp; scalar_t__ max_antenna_gain; } ;
struct ieee80211_freq_range {scalar_t__ start_freq_khz; scalar_t__ end_freq_khz; scalar_t__ max_bandwidth_khz; } ;
struct ieee80211_reg_rule {int flags; scalar_t__ dfs_cac_ms; int has_wmm; struct ieee80211_wmm_rule wmm_rule; struct ieee80211_power_rule power_rule; struct ieee80211_freq_range freq_range; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_reg_rule*) ;
 void* FUNC_1 (scalar_t__,scalar_t__) ;
 void* FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ieee80211_regdomain const*,struct ieee80211_reg_rule const*) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(const struct ieee80211_regdomain *VAR_3,
          const struct ieee80211_regdomain *VAR_4,
          const struct ieee80211_reg_rule *VAR_5,
          const struct ieee80211_reg_rule *VAR_6,
          struct ieee80211_reg_rule *VAR_7)
{
 const struct ieee80211_freq_range *VAR_8, *VAR_9;
 struct ieee80211_freq_range *VAR_10;
 const struct ieee80211_power_rule *VAR_11, *VAR_12;
 struct ieee80211_power_rule *VAR_13;
 const struct ieee80211_wmm_rule *VAR_14, *VAR_15;
 struct ieee80211_wmm_rule *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;

 VAR_8 = &VAR_5->freq_range;
 VAR_9 = &VAR_6->freq_range;
 VAR_10 = &VAR_7->freq_range;

 VAR_11 = &VAR_5->power_rule;
 VAR_12 = &VAR_6->power_rule;
 VAR_13 = &VAR_7->power_rule;

 VAR_14 = &VAR_5->wmm_rule;
 VAR_15 = &VAR_6->wmm_rule;
 VAR_16 = &VAR_7->wmm_rule;

 VAR_10->start_freq_khz = FUNC_1(VAR_8->start_freq_khz,
      VAR_9->start_freq_khz);
 VAR_10->end_freq_khz = FUNC_2(VAR_8->end_freq_khz,
           VAR_9->end_freq_khz);

 VAR_18 = VAR_8->max_bandwidth_khz;
 VAR_19 = VAR_9->max_bandwidth_khz;

 if (VAR_5->flags & VAR_2)
  VAR_18 = FUNC_3(VAR_3, VAR_5);
 if (VAR_6->flags & VAR_2)
  VAR_19 = FUNC_3(VAR_4, VAR_6);

 VAR_10->max_bandwidth_khz = FUNC_2(VAR_18, VAR_19);

 VAR_7->flags = VAR_5->flags | VAR_6->flags;
 if ((VAR_5->flags & VAR_2) &&
     (VAR_6->flags & VAR_2))
  VAR_7->flags |= VAR_2;
 else
  VAR_7->flags &= ~VAR_2;

 VAR_17 = VAR_10->end_freq_khz - VAR_10->start_freq_khz;
 if (VAR_10->max_bandwidth_khz > VAR_17)
  VAR_10->max_bandwidth_khz = VAR_17;

 VAR_13->max_eirp = FUNC_2(VAR_11->max_eirp,
  VAR_12->max_eirp);
 VAR_13->max_antenna_gain = FUNC_2(VAR_11->max_antenna_gain,
  VAR_12->max_antenna_gain);

 VAR_7->dfs_cac_ms = FUNC_1(VAR_5->dfs_cac_ms,
        VAR_6->dfs_cac_ms);

 if (VAR_5->has_wmm && VAR_6->has_wmm) {
  u8 VAR_20;

  for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
   FUNC_4(&VAR_14->client[VAR_20],
      &VAR_15->client[VAR_20],
      &VAR_16->client[VAR_20]);
   FUNC_4(&VAR_14->ap[VAR_20],
      &VAR_15->ap[VAR_20],
      &VAR_16->ap[VAR_20]);
  }

  VAR_7->has_wmm = 1;
 } else if (VAR_5->has_wmm) {
  *VAR_16 = *VAR_14;
  VAR_7->has_wmm = 1;
 } else if (VAR_6->has_wmm) {
  *VAR_16 = *VAR_15;
  VAR_7->has_wmm = 1;
 } else {
  VAR_7->has_wmm = 0;
 }

 if (!FUNC_0(VAR_7))
  return -VAR_0;

 return 0;
}
