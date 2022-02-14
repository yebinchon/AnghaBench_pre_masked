
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {int alpha2; } ;


 int FUNC_0 (int ,char const*) ;
 struct ieee80211_regdomain* FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0)
{
 const struct ieee80211_regdomain *VAR_1 = FUNC_1();

 if (!VAR_1)
  return 1;
 return !FUNC_0(VAR_1->alpha2, VAR_0);
}
