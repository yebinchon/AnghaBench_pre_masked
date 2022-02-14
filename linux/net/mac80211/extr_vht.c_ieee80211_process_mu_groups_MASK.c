
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int position; int membership; } ;
struct ieee80211_bss_conf {TYPE_2__ mu_group; } ;
struct TYPE_7__ {int mu_mimo_owner; struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct TYPE_9__ {int position; int membership; } ;
struct TYPE_10__ {TYPE_3__ vht_group_notif; } ;
struct TYPE_11__ {TYPE_4__ u; } ;
struct TYPE_12__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_3,
     struct ieee80211_mgmt *VAR_4)
{
 struct ieee80211_bss_conf *VAR_5 = &VAR_3->vif.bss_conf;

 if (!VAR_3->vif.mu_mimo_owner)
  return;

 if (!FUNC_1(VAR_4->u.action.u.vht_group_notif.position,
      VAR_5->mu_group.position, VAR_2) &&
     !FUNC_1(VAR_4->u.action.u.vht_group_notif.membership,
      VAR_5->mu_group.membership, VAR_1))
  return;

 FUNC_2(VAR_5->mu_group.membership,
        VAR_4->u.action.u.vht_group_notif.membership,
        VAR_1);
 FUNC_2(VAR_5->mu_group.position,
        VAR_4->u.action.u.vht_group_notif.position,
        VAR_2);

 FUNC_0(VAR_3, VAR_0);
}
