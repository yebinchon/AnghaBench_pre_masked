
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_regdomain {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct wiphy*,struct ieee80211_regdomain*) ;
 int FUNC_2 () ;

int FUNC_3(struct wiphy *VAR_0,
     struct ieee80211_regdomain *VAR_1)
{
 int VAR_2;

 FUNC_0();

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;


 FUNC_2();
 return 0;
}
