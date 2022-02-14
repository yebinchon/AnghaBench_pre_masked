
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_local *VAR_1 = VAR_0->local;

 FUNC_1(&VAR_1->sta_mtx);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->sta_mtx);
}
