
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int scan_work; int hw; int mtx; int scan_sdata; scalar_t__ scanning; int scan_req; } ;


 int FUNC_0 (struct ieee80211_local*,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct ieee80211_local *VAR_0)
{
 FUNC_2(&VAR_0->mtx);

 if (!VAR_0->scan_req || VAR_0->scanning)
  return;

 if (!FUNC_0(VAR_0,
    FUNC_4(
     VAR_0->scan_sdata,
     FUNC_3(&VAR_0->mtx))))
  return;

 FUNC_1(&VAR_0->hw, &VAR_0->scan_work,
         FUNC_5(0));
}
