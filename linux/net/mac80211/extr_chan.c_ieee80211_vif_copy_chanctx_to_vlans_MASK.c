
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int chanctx_mtx; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_0,
      bool VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_0->local;

 FUNC_1(&VAR_2->chanctx_mtx);

 FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_2->chanctx_mtx);
}
