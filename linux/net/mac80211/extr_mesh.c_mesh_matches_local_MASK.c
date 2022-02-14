
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


typedef scalar_t__ u32 ;
struct ieee802_11_elems {int ht_operation; int vht_operation; TYPE_2__* mesh_config; int mesh_id_len; int mesh_id; } ;
struct ieee80211_supported_band {int band; } ;
struct TYPE_12__ {int chan; } ;
struct TYPE_10__ {scalar_t__ basic_rates; TYPE_6__ chandef; } ;
struct TYPE_11__ {TYPE_4__ bss_conf; } ;
struct ieee80211_if_mesh {scalar_t__ mesh_pp_id; scalar_t__ mesh_pm_id; scalar_t__ mesh_cc_id; scalar_t__ mesh_sp_id; scalar_t__ mesh_auth_id; int mesh_id; int mesh_id_len; } ;
struct TYPE_7__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_3__* local; TYPE_1__ u; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_9__ {int hw; } ;
struct TYPE_8__ {scalar_t__ meshconf_psel; scalar_t__ meshconf_pmetric; scalar_t__ meshconf_congest; scalar_t__ meshconf_synch; scalar_t__ meshconf_auth; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_2 (int ,struct cfg80211_chan_def*) ;
 int FUNC_3 (int *,int ,int ,struct cfg80211_chan_def*) ;
 struct ieee80211_supported_band* FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct ieee802_11_elems*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

bool FUNC_7(struct ieee80211_sub_if_data *VAR_1,
   struct ieee802_11_elems *VAR_2)
{
 struct ieee80211_if_mesh *VAR_3 = &VAR_1->u.mesh;
 u32 VAR_4 = 0;
 struct cfg80211_chan_def VAR_5;
 struct ieee80211_supported_band *VAR_6;
 if (!(VAR_3->mesh_id_len == VAR_2->mesh_id_len &&
      FUNC_6(VAR_3->mesh_id, VAR_2->mesh_id, VAR_2->mesh_id_len) == 0 &&
      (VAR_3->mesh_pp_id == VAR_2->mesh_config->meshconf_psel) &&
      (VAR_3->mesh_pm_id == VAR_2->mesh_config->meshconf_pmetric) &&
      (VAR_3->mesh_cc_id == VAR_2->mesh_config->meshconf_congest) &&
      (VAR_3->mesh_sp_id == VAR_2->mesh_config->meshconf_synch) &&
      (VAR_3->mesh_auth_id == VAR_2->mesh_config->meshconf_auth)))
  return 0;

 VAR_6 = FUNC_4(VAR_1);
 if (!VAR_6)
  return 0;

 FUNC_5(VAR_1, VAR_2, VAR_6->band,
    &VAR_4);

 if (VAR_1->vif.bss_conf.basic_rates != VAR_4)
  return 0;

 FUNC_1(&VAR_5, VAR_1->vif.bss_conf.chandef.chan,
    VAR_0);
 FUNC_2(VAR_2->ht_operation, &VAR_5);
 FUNC_3(&VAR_1->local->hw,
       VAR_2->vht_operation, VAR_2->ht_operation,
       &VAR_5);

 if (!FUNC_0(&VAR_1->vif.bss_conf.chandef,
      &VAR_5))
  return 0;

 return 1;
}
