
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long u8 ;
typedef unsigned long long u64 ;
typedef unsigned long long u16 ;
struct ps_data {unsigned long long dtim_count; } ;
struct TYPE_8__ {struct ps_data ps; } ;
struct TYPE_9__ {TYPE_3__ mesh; } ;
struct TYPE_6__ {int beacon_int; unsigned long long dtim_period; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_5__ vif; TYPE_2__* bss; } ;
struct ieee80211_local {int dummy; } ;
struct TYPE_7__ {struct ps_data ps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long FUNC_0 (unsigned long long,unsigned long long) ;
 unsigned long long FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;

void FUNC_3(struct ieee80211_local *VAR_2,
      struct ieee80211_sub_if_data *VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_2, VAR_3);
 u64 VAR_5 = 0;
 u16 VAR_6 = VAR_3->vif.bss_conf.beacon_int * 1024;
 u8 VAR_7 = VAR_3->vif.bss_conf.dtim_period;
 struct ps_data *VAR_8;
 u8 VAR_9;

 if (VAR_4 == -1ULL || !VAR_6 || !VAR_7)
  return;

 if (VAR_3->vif.type == VAR_0 ||
     VAR_3->vif.type == VAR_1) {
  if (!VAR_3->bss)
   return;

  VAR_8 = &VAR_3->bss->ps;
 } else if (FUNC_2(&VAR_3->vif)) {
  VAR_8 = &VAR_3->u.mesh.ps;
 } else {
  return;
 }






 FUNC_0(VAR_4, VAR_6);
 VAR_9 = FUNC_0(VAR_4, VAR_7);

 if (!VAR_9)
  VAR_5 = 0;
 else
  VAR_5 = VAR_7 - VAR_9;

 VAR_8->dtim_count = VAR_5;
}
