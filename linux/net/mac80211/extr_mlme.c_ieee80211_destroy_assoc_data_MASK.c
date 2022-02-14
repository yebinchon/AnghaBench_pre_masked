
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct ieee80211_mgd_assoc_data* assoc_data; scalar_t__ flags; int bssid; int timer; } ;
struct TYPE_9__ {TYPE_3__ mgd; } ;
struct TYPE_6__ {int mu_mimo_owner; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; int dev; TYPE_2__* local; TYPE_1__ vif; } ;
struct ieee80211_mgd_assoc_data {TYPE_5__* bss; } ;
struct TYPE_10__ {int bssid; } ;
struct TYPE_7__ {int mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_mgd_assoc_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,int ) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_sub_if_data *VAR_1,
      bool VAR_2, bool VAR_3)
{
 struct ieee80211_mgd_assoc_data *VAR_4 = VAR_1->u.mgd.assoc_data;

 FUNC_8(VAR_1);

 if (!VAR_2) {





  FUNC_1(&VAR_1->u.mgd.timer);
  FUNC_9(VAR_1, VAR_4->bss->bssid);

  FUNC_2(VAR_1->u.mgd.bssid);
  FUNC_3(VAR_1, VAR_0);
  VAR_1->u.mgd.flags = 0;
  VAR_1->vif.mu_mimo_owner = 0;

  FUNC_6(&VAR_1->local->mtx);
  FUNC_4(VAR_1);
  FUNC_7(&VAR_1->local->mtx);

  if (VAR_3)
   FUNC_0(VAR_1->dev, VAR_4->bss);
 }

 FUNC_5(VAR_4);
 VAR_1->u.mgd.assoc_data = ((void*)0);
}
