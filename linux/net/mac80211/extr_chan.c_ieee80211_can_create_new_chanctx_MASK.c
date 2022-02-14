
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int chanctx_mtx; } ;


 scalar_t__ FUNC_0 (struct ieee80211_local*) ;
 scalar_t__ FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_local *VAR_0)
{
 FUNC_2(&VAR_0->chanctx_mtx);
 return FUNC_1(VAR_0) < FUNC_0(VAR_0);
}
