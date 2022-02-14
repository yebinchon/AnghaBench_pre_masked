
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int max_pkt_offset; int max_pattern_len; int min_pattern_len; int max_patterns; } ;
struct nl80211_coalesce_rule_support {TYPE_1__ pat; int max_delay; int max_rules; } ;
struct TYPE_6__ {TYPE_2__* coalesce; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; } ;
typedef int rule ;
struct TYPE_5__ {int max_pkt_offset; int pattern_max_len; int pattern_min_len; int n_patterns; int max_delay; int n_rules; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,struct nl80211_coalesce_rule_support*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
     struct cfg80211_registered_device *VAR_3)
{
 struct nl80211_coalesce_rule_support VAR_4;

 if (!VAR_3->wiphy.coalesce)
  return 0;

 VAR_4.max_rules = VAR_3->wiphy.coalesce->n_rules;
 VAR_4.max_delay = VAR_3->wiphy.coalesce->max_delay;
 VAR_4.pat.max_patterns = VAR_3->wiphy.coalesce->n_patterns;
 VAR_4.pat.min_pattern_len = VAR_3->wiphy.coalesce->pattern_min_len;
 VAR_4.pat.max_pattern_len = VAR_3->wiphy.coalesce->pattern_max_len;
 VAR_4.pat.max_pkt_offset = VAR_3->wiphy.coalesce->max_pkt_offset;

 if (FUNC_0(VAR_2, VAR_1, sizeof(VAR_4), &VAR_4))
  return -VAR_0;

 return 0;
}
