
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_registered_device {struct cfg80211_coalesce_rules* coalesce; } ;
struct cfg80211_coalesce_rules {int n_rules; int n_patterns; struct cfg80211_coalesce_rules* rules; struct cfg80211_coalesce_rules* patterns; struct cfg80211_coalesce_rules* mask; } ;
struct cfg80211_coalesce {int n_rules; int n_patterns; struct cfg80211_coalesce* rules; struct cfg80211_coalesce* patterns; struct cfg80211_coalesce* mask; } ;


 int FUNC_0 (struct cfg80211_coalesce_rules*) ;

void FUNC_1(struct cfg80211_registered_device *VAR_0)
{
 struct cfg80211_coalesce *VAR_1 = VAR_0->coalesce;
 int VAR_2, VAR_3;
 struct cfg80211_coalesce_rules *VAR_4;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_rules; VAR_2++) {
  VAR_4 = &VAR_1->rules[VAR_2];
  for (VAR_3 = 0; VAR_3 < VAR_4->n_patterns; VAR_3++)
   FUNC_0(VAR_4->patterns[VAR_3].mask);
  FUNC_0(VAR_4->patterns);
 }
 FUNC_0(VAR_1->rules);
 FUNC_0(VAR_1);
 VAR_0->coalesce = ((void*)0);
}
