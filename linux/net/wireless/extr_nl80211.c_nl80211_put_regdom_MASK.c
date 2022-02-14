
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_regdomain {unsigned int n_reg_rules; struct ieee80211_reg_rule* reg_rules; scalar_t__ dfs_region; int alpha2; } ;
struct ieee80211_power_rule {unsigned int max_antenna_gain; unsigned int max_eirp; } ;
struct ieee80211_freq_range {unsigned int max_bandwidth_khz; unsigned int start_freq_khz; unsigned int end_freq_khz; } ;
struct ieee80211_reg_rule {unsigned int flags; unsigned int dfs_cac_ms; struct ieee80211_power_rule power_rule; struct ieee80211_freq_range freq_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 unsigned int FUNC_5 (struct ieee80211_regdomain const*,struct ieee80211_reg_rule const*) ;

__attribute__((used)) static int FUNC_6(const struct ieee80211_regdomain *VAR_11,
         struct sk_buff *VAR_12)
{
 struct nlattr *VAR_13;
 unsigned int VAR_14;

 if (FUNC_2(VAR_12, VAR_8, VAR_11->alpha2) ||
     (VAR_11->dfs_region &&
      FUNC_4(VAR_12, VAR_2, VAR_11->dfs_region)))
  goto nla_put_failure;

 VAR_13 = FUNC_1(VAR_12, VAR_9);
 if (!VAR_13)
  goto nla_put_failure;

 for (VAR_14 = 0; VAR_14 < VAR_11->n_reg_rules; VAR_14++) {
  struct nlattr *VAR_15;
  const struct ieee80211_reg_rule *VAR_16;
  const struct ieee80211_freq_range *VAR_17;
  const struct ieee80211_power_rule *VAR_18;
  unsigned int VAR_19;

  VAR_16 = &VAR_11->reg_rules[VAR_14];
  VAR_17 = &VAR_16->freq_range;
  VAR_18 = &VAR_16->power_rule;

  VAR_15 = FUNC_1(VAR_12, VAR_14);
  if (!VAR_15)
   goto nla_put_failure;

  VAR_19 = VAR_17->max_bandwidth_khz;
  if (!VAR_19)
   VAR_19 = FUNC_5(VAR_11,
          VAR_16);

  if (FUNC_3(VAR_12, VAR_10,
    VAR_16->flags) ||
      FUNC_3(VAR_12, VAR_5,
    VAR_17->start_freq_khz) ||
      FUNC_3(VAR_12, VAR_3,
    VAR_17->end_freq_khz) ||
      FUNC_3(VAR_12, VAR_4,
    VAR_19) ||
      FUNC_3(VAR_12, VAR_6,
    VAR_18->max_antenna_gain) ||
      FUNC_3(VAR_12, VAR_7,
    VAR_18->max_eirp) ||
      FUNC_3(VAR_12, VAR_1,
    VAR_16->dfs_cac_ms))
   goto nla_put_failure;

  FUNC_0(VAR_12, VAR_15);
 }

 FUNC_0(VAR_12, VAR_13);
 return 0;

nla_put_failure:
 return -VAR_0;
}
