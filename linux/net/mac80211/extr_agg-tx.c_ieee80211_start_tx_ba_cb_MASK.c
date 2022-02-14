
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_ampdu_tx {int state; } ;
struct sta_info {struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_local*,struct sta_info*,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct sta_info *VAR_2, int VAR_3,
         struct tid_ampdu_tx *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = VAR_2->sdata;
 struct ieee80211_local *VAR_6 = VAR_5->local;

 if (FUNC_0(FUNC_2(VAR_0, &VAR_4->state)))
  return;

 if (FUNC_3(VAR_1, &VAR_4->state))
  FUNC_1(VAR_6, VAR_2, VAR_3);
}
