
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ start_freq_khz; scalar_t__ end_freq_khz; scalar_t__ max_bandwidth_khz; } ;
struct TYPE_4__ {scalar_t__ max_antenna_gain; scalar_t__ max_eirp; } ;
struct ieee80211_reg_rule {scalar_t__ flags; TYPE_1__ freq_range; TYPE_2__ power_rule; } ;



__attribute__((used)) static bool FUNC_0(struct ieee80211_reg_rule *VAR_0,
     struct ieee80211_reg_rule *VAR_1)
{

 if (VAR_0->flags != VAR_1->flags)
  return 0;


 if ((VAR_0->power_rule.max_antenna_gain >
      VAR_1->power_rule.max_antenna_gain) ||
     VAR_0->power_rule.max_eirp > VAR_1->power_rule.max_eirp)
  return 0;


 if (VAR_0->freq_range.start_freq_khz > VAR_1->freq_range.start_freq_khz ||
     VAR_0->freq_range.end_freq_khz < VAR_1->freq_range.end_freq_khz)
  return 0;


 if (VAR_0->freq_range.max_bandwidth_khz <
     VAR_1->freq_range.max_bandwidth_khz)
  return 0;

 return 1;
}
