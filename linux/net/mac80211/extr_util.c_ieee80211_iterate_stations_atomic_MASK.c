
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_local*,void (*) (void*,struct ieee80211_sta*),void*) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct ieee80211_hw *VAR_0,
   void (*VAR_1)(void *VAR_2,
      struct ieee80211_sta *VAR_3),
   void *VAR_4)
{
 struct ieee80211_local *VAR_5 = FUNC_1(VAR_0);

 FUNC_2();
 FUNC_0(VAR_5, VAR_1, VAR_4);
 FUNC_3();
}
