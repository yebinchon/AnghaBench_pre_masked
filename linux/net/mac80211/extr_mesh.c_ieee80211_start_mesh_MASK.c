
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int enable_beacon; int ht_operation_mode; } ;
struct TYPE_8__ {TYPE_3__ bss_conf; } ;
struct TYPE_6__ {int ht_opmode; } ;
struct ieee80211_if_mesh {TYPE_2__ mshcfg; int wrkq_flags; scalar_t__ sync_offset_clockdrift_max; int mesh_sp_id; int sync_ops; scalar_t__ mesh_cc_id; } ;
struct TYPE_5__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {int dev; TYPE_4__ vif; int work; struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_local {int hw; int iff_allmultis; int fif_other_bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_local*) ;
 scalar_t__ FUNC_3 (struct ieee80211_if_mesh*) ;
 int FUNC_4 (struct ieee80211_if_mesh*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct ieee80211_sub_if_data *VAR_8)
{
 struct ieee80211_if_mesh *VAR_9 = &VAR_8->u.mesh;
 struct ieee80211_local *VAR_10 = VAR_8->local;
 u32 VAR_11 = VAR_1 |
        VAR_2 |
        VAR_4 |
        VAR_0 |
        VAR_3 |
        VAR_5;

 VAR_10->fif_other_bss++;

 FUNC_0(&VAR_10->iff_allmultis);
 FUNC_2(VAR_10);

 VAR_9->mesh_cc_id = 0;

 VAR_9->sync_ops = FUNC_5(VAR_9->mesh_sp_id);
 VAR_9->sync_offset_clockdrift_max = 0;
 FUNC_11(VAR_7, &VAR_9->wrkq_flags);
 FUNC_4(VAR_9);
 FUNC_7(&VAR_10->hw, &VAR_8->work);
 VAR_8->vif.bss_conf.ht_operation_mode =
    VAR_9->mshcfg.ht_opmode;
 VAR_8->vif.bss_conf.enable_beacon = 1;

 VAR_11 |= FUNC_6(VAR_8);

 if (FUNC_3(VAR_9)) {
  FUNC_9(VAR_8);
  return -VAR_6;
 }

 FUNC_8(VAR_10, VAR_8);
 FUNC_1(VAR_8, VAR_11);

 FUNC_10(VAR_8->dev);
 return 0;
}
