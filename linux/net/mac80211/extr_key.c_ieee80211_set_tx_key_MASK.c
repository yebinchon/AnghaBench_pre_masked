
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int ptk_idx; } ;
struct ieee80211_local {int hw; } ;
struct TYPE_2__ {int keyidx; } ;
struct ieee80211_key {TYPE_1__ conf; struct ieee80211_local* local; struct sta_info* sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*) ;
 int FUNC_1 (struct sta_info*,int ) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct ieee80211_key *VAR_2)
{
 struct sta_info *VAR_3 = VAR_2->sta;
 struct ieee80211_local *VAR_4 = VAR_2->local;

 FUNC_0(VAR_4);

 VAR_3->ptk_idx = VAR_2->conf.keyidx;

 if (!FUNC_3(&VAR_4->hw, VAR_0))
  FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_3);

 return 0;
}
