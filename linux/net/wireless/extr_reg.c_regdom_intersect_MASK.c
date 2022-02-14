
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {unsigned int n_reg_rules; char* alpha2; int dfs_region; struct ieee80211_reg_rule* reg_rules; } ;
struct ieee80211_reg_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_reg_rule*,struct ieee80211_reg_rule*,unsigned int*) ;
 struct ieee80211_regdomain* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211_regdomain const*,struct ieee80211_regdomain const*,struct ieee80211_reg_rule const*,struct ieee80211_reg_rule const*,struct ieee80211_reg_rule*) ;
 int FUNC_4 (struct ieee80211_regdomain*,int ,unsigned int) ;

__attribute__((used)) static struct ieee80211_regdomain *
FUNC_5(const struct ieee80211_regdomain *VAR_2,
   const struct ieee80211_regdomain *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7 = 0;
 const struct ieee80211_reg_rule *VAR_8, *VAR_9;
 struct ieee80211_reg_rule VAR_10;
 struct ieee80211_regdomain *VAR_11;

 if (!VAR_2 || !VAR_3)
  return ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_2->n_reg_rules; VAR_5++) {
  VAR_8 = &VAR_2->reg_rules[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_3->n_reg_rules; VAR_6++) {
   VAR_9 = &VAR_3->reg_rules[VAR_6];
   if (!FUNC_3(VAR_2, VAR_3, VAR_8, VAR_9,
       &VAR_10))
    VAR_7++;
  }
 }

 if (!VAR_7)
  return ((void*)0);

 VAR_11 = FUNC_1(FUNC_4(VAR_11, VAR_1, VAR_7), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_2->n_reg_rules; VAR_5++) {
  VAR_8 = &VAR_2->reg_rules[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_3->n_reg_rules; VAR_6++) {
   VAR_9 = &VAR_3->reg_rules[VAR_6];
   VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_8, VAR_9,
      &VAR_10);




   if (VAR_4)
    continue;

   FUNC_0(&VAR_10, VAR_11->reg_rules,
     &VAR_11->n_reg_rules);
  }
 }

 VAR_11->alpha2[0] = '9';
 VAR_11->alpha2[1] = '8';
 VAR_11->dfs_region = FUNC_2(VAR_2->dfs_region,
        VAR_3->dfs_region);

 return VAR_11;
}
