
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ieee80211_regdomain {size_t n_reg_rules; struct ieee80211_reg_rule const* reg_rules; } ;
struct ieee80211_freq_range {scalar_t__ end_freq_khz; scalar_t__ start_freq_khz; } ;
typedef struct ieee80211_reg_rule {struct ieee80211_freq_range freq_range; } const ieee80211_reg_rule ;



__attribute__((used)) static unsigned int
FUNC_0(const struct ieee80211_regdomain *VAR_0,
     const struct ieee80211_reg_rule *VAR_1)
{
 const struct ieee80211_freq_range *VAR_2 = &VAR_1->freq_range;
 const struct ieee80211_freq_range *VAR_3;
 const struct ieee80211_reg_rule *VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0->n_reg_rules; VAR_7++)
  if (VAR_1 == &VAR_0->reg_rules[VAR_7])
   break;

 if (VAR_7 == VAR_0->n_reg_rules)
  return 0;


 VAR_8 = VAR_7;

 while (VAR_8) {
  VAR_4 = &VAR_0->reg_rules[--VAR_8];
  VAR_3 = &VAR_4->freq_range;

  if (VAR_3->end_freq_khz < VAR_2->start_freq_khz)
   break;

  VAR_2 = VAR_3;
 }

 VAR_5 = VAR_2->start_freq_khz;


 VAR_2 = &VAR_1->freq_range;
 VAR_8 = VAR_7;

 while (VAR_8 < VAR_0->n_reg_rules - 1) {
  VAR_4 = &VAR_0->reg_rules[++VAR_8];
  VAR_3 = &VAR_4->freq_range;

  if (VAR_3->start_freq_khz > VAR_2->end_freq_khz)
   break;

  VAR_2 = VAR_3;
 }

 VAR_6 = VAR_2->end_freq_khz;

 return VAR_6 - VAR_5;
}
