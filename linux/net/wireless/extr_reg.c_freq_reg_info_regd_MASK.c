
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_regdomain {int n_reg_rules; struct ieee80211_reg_rule* reg_rules; } ;
struct ieee80211_freq_range {int dummy; } ;
struct ieee80211_reg_rule {struct ieee80211_freq_range freq_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_reg_rule const* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_freq_range const*,int ,int ) ;
 int FUNC_2 (struct ieee80211_freq_range const*,int ) ;

__attribute__((used)) static const struct ieee80211_reg_rule *
FUNC_3(u32 VAR_2,
     const struct ieee80211_regdomain *VAR_3, u32 VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;
 bool VAR_7 = 0;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3->n_reg_rules; VAR_5++) {
  const struct ieee80211_reg_rule *VAR_8;
  const struct ieee80211_freq_range *VAR_9 = ((void*)0);

  VAR_8 = &VAR_3->reg_rules[VAR_5];
  VAR_9 = &VAR_8->freq_range;






  if (!VAR_6)
   VAR_6 = FUNC_2(VAR_9, VAR_2);

  VAR_7 = FUNC_1(VAR_9, VAR_2, VAR_4);

  if (VAR_6 && VAR_7)
   return VAR_8;
 }

 if (!VAR_6)
  return FUNC_0(-VAR_1);

 return FUNC_0(-VAR_0);
}
