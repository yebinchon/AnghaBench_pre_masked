
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta_info {int * ptk; int * gtk; } ;
struct ieee80211_local {int key_mtx; } ;
struct TYPE_4__ {int flags; } ;
struct ieee80211_key {TYPE_3__* sdata; TYPE_1__ conf; int sta; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ vif; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_key*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int,struct ieee80211_key*,int *) ;
 struct ieee80211_key* FUNC_3 (struct ieee80211_local*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ieee80211_local *VAR_3,
        struct sta_info *VAR_4)
{
 struct ieee80211_key *VAR_5;
 int VAR_6;

 FUNC_4(&VAR_3->key_mtx);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->gtk); VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_4->gtk[VAR_6]);
  if (!VAR_5)
   continue;
  FUNC_2(VAR_5->sdata, VAR_5->sta,
    VAR_5->conf.flags & VAR_0,
    VAR_5, ((void*)0));
  FUNC_1(VAR_5, VAR_5->sdata->vif.type ==
     VAR_1);
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_4->ptk[VAR_6]);
  if (!VAR_5)
   continue;
  FUNC_2(VAR_5->sdata, VAR_5->sta,
    VAR_5->conf.flags & VAR_0,
    VAR_5, ((void*)0));
  FUNC_1(VAR_5, VAR_5->sdata->vif.type ==
     VAR_1);
 }

 FUNC_5(&VAR_3->key_mtx);
}
