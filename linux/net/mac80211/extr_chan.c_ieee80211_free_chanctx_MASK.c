
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int chanctx_mtx; } ;
struct ieee80211_chanctx {int list; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_3 (struct ieee80211_chanctx*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct ieee80211_local *VAR_1,
       struct ieee80211_chanctx *VAR_2)
{
 FUNC_5(&VAR_1->chanctx_mtx);

 FUNC_0(FUNC_1(VAR_1, VAR_2) != 0);

 FUNC_4(&VAR_2->list);
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_2, VAR_0);
}
