
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_reg_rule {int dummy; } ;


 int FUNC_0 (struct ieee80211_reg_rule*,struct ieee80211_reg_rule*,int) ;
 scalar_t__ FUNC_1 (struct ieee80211_reg_rule*,struct ieee80211_reg_rule*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_reg_rule *VAR_0,
       struct ieee80211_reg_rule *VAR_1, u32 *VAR_2)
{
 struct ieee80211_reg_rule *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < *VAR_2; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];

  if (FUNC_1(VAR_3, VAR_0))
   return;


  if (FUNC_1(VAR_0, VAR_3)) {
   FUNC_0(VAR_3, VAR_0, sizeof(*VAR_0));
   return;
  }
 }

 FUNC_0(&VAR_1[*VAR_2], VAR_0, sizeof(*VAR_0));
 (*VAR_2)++;
}
