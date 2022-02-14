
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_reg_rule {int dummy; } ;


 int FUNC_0 (struct ieee80211_reg_rule const*) ;
 int FUNC_1 (int) ;
 struct ieee80211_reg_rule* FUNC_2 (int,struct ieee80211_regdomain const*,int) ;
 struct ieee80211_regdomain* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static const struct ieee80211_reg_rule *
FUNC_4(struct wiphy *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct ieee80211_regdomain *VAR_3 = FUNC_3(VAR_0);
 const struct ieee80211_reg_rule *VAR_4 = ((void*)0);
 u32 VAR_5;

 for (VAR_5 = FUNC_1(20); VAR_5 >= VAR_2; VAR_5 = VAR_5 / 2) {
  VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_5);
  if (!FUNC_0(VAR_4))
   return VAR_4;
 }

 return VAR_4;
}
