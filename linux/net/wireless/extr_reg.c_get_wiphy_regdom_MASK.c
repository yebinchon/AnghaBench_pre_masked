
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct ieee80211_regdomain {int dummy; } ;


 struct ieee80211_regdomain const* FUNC_0 (int ) ;

const struct ieee80211_regdomain *FUNC_1(struct wiphy *VAR_0)
{
 return FUNC_0(VAR_0->regd);
}
