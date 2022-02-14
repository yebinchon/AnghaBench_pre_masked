
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vif_params {scalar_t__ vht_mumimo_follow_addr; scalar_t__ vht_mumimo_groups; } ;
struct TYPE_6__ {scalar_t__* membership; scalar_t__* position; } ;
struct TYPE_7__ {TYPE_1__ mu_group; } ;
struct TYPE_10__ {int mu_mimo_owner; TYPE_2__ bss_conf; } ;
struct TYPE_8__ {int mu_follow_addr; } ;
struct TYPE_9__ {TYPE_3__ mntr; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_4__ u; } ;
typedef int membership ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_3,
      struct vif_params *VAR_4)
{
 bool VAR_5 = 0;
 bool VAR_6 = 0;

 if (VAR_4->vht_mumimo_groups) {
  u64 VAR_7;

  FUNC_0(sizeof(VAR_7) != VAR_1);

  FUNC_4(VAR_3->vif.bss_conf.mu_group.membership,
         VAR_4->vht_mumimo_groups, VAR_1);
  FUNC_4(VAR_3->vif.bss_conf.mu_group.position,
         VAR_4->vht_mumimo_groups + VAR_1,
         VAR_2);
  FUNC_2(VAR_3, VAR_0);

  FUNC_4(&VAR_7, VAR_4->vht_mumimo_groups,
         VAR_1);
  VAR_5 = VAR_7 != 0;
 }

 if (VAR_4->vht_mumimo_follow_addr) {
  VAR_6 =
   FUNC_3(VAR_4->vht_mumimo_follow_addr);
  FUNC_1(VAR_3->u.mntr.mu_follow_addr,
    VAR_4->vht_mumimo_follow_addr);
 }

 VAR_3->vif.mu_mimo_owner = VAR_5 || VAR_6;
}
