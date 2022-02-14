
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_key {scalar_t__ local; scalar_t__ sdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_key*) ;

void FUNC_2(struct ieee80211_key *VAR_0)
{
 FUNC_0(VAR_0->sdata || VAR_0->local);
 FUNC_1(VAR_0);
}
