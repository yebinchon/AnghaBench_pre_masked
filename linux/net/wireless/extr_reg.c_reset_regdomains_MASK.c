
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct ieee80211_regdomain const* VAR_1 ;
 int VAR_2 ;
 struct ieee80211_regdomain* FUNC_1 () ;
 int FUNC_2 (int ,struct ieee80211_regdomain const*) ;
 int FUNC_3 (struct ieee80211_regdomain const*) ;
 int FUNC_4 (int *) ;
 struct ieee80211_regdomain const VAR_3 ;

__attribute__((used)) static void FUNC_5(bool VAR_4,
        const struct ieee80211_regdomain *VAR_5)
{
 const struct ieee80211_regdomain *VAR_6;

 FUNC_0();

 VAR_6 = FUNC_1();


 if (VAR_6 == VAR_1)
  VAR_6 = ((void*)0);
 if (VAR_1 == &VAR_3)
  VAR_1 = ((void*)0);
 if (VAR_6 == &VAR_3)
  VAR_6 = ((void*)0);

 FUNC_3(VAR_6);
 FUNC_3(VAR_1);

 VAR_1 = &VAR_3;
 FUNC_2(VAR_0, VAR_5);

 if (!VAR_4)
  return;

 FUNC_4(&VAR_2);
}
