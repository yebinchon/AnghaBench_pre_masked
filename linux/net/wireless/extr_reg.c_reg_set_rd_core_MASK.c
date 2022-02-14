
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {int alpha2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;

__attribute__((used)) static int FUNC_2(const struct ieee80211_regdomain *VAR_1)
{
 if (!FUNC_0(VAR_1->alpha2))
  return -VAR_0;
 FUNC_1(VAR_1);
 return 0;
}
