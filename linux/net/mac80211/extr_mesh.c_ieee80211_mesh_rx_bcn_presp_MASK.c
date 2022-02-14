
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee802_11_elems {int * ds_params; scalar_t__ rsn; int mesh_config; int mesh_id; } ;
struct TYPE_14__ {int csa_active; int addr; } ;
struct TYPE_11__ {scalar_t__ rssi_threshold; } ;
struct ieee80211_if_mesh {scalar_t__ security; scalar_t__ csa_role; TYPE_6__* sync_ops; TYPE_4__ mshcfg; int user_mpm; } ;
struct TYPE_12__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_7__ vif; TYPE_5__ u; struct ieee80211_local* local; } ;
struct ieee80211_rx_status {int band; int freq; scalar_t__ signal; } ;
struct TYPE_8__ {scalar_t__ variable; } ;
struct TYPE_9__ {TYPE_1__ probe_resp; } ;
struct ieee80211_mgmt {int sa; int bssid; TYPE_2__ u; int da; } ;
struct TYPE_10__ {int wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct ieee80211_channel {int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_13__ {int (* rx_bcn_presp ) (struct ieee80211_sub_if_data*,int ,struct ieee80211_mgmt*,struct ieee802_11_elems*,struct ieee80211_rx_status*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct ieee80211_channel* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee802_11_elems*,int) ;
 int FUNC_4 (scalar_t__,size_t,int,struct ieee802_11_elems*,int ,int *) ;
 scalar_t__ FUNC_5 (struct ieee80211_sub_if_data*,struct ieee802_11_elems*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int ,struct ieee802_11_elems*,struct ieee80211_rx_status*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,int ,struct ieee80211_mgmt*,struct ieee802_11_elems*,struct ieee80211_rx_status*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_sub_if_data *VAR_4,
     u16 VAR_5,
     struct ieee80211_mgmt *VAR_6,
     size_t VAR_7,
     struct ieee80211_rx_status *VAR_8)
{
 struct ieee80211_local *VAR_9 = VAR_4->local;
 struct ieee80211_if_mesh *VAR_10 = &VAR_4->u.mesh;
 struct ieee802_11_elems VAR_11;
 struct ieee80211_channel *VAR_12;
 size_t VAR_13;
 int VAR_14;
 enum nl80211_band VAR_15 = VAR_8->band;


 if (VAR_5 == VAR_3 &&
     !FUNC_0(VAR_6->da, VAR_4->vif.addr))
  return;

 VAR_13 = (u8 *) VAR_6->u.probe_resp.variable - (u8 *) VAR_6;
 if (VAR_13 > VAR_7)
  return;

 FUNC_4(VAR_6->u.probe_resp.variable, VAR_7 - VAR_13,
          0, &VAR_11, VAR_6->bssid, ((void*)0));


 if ((!VAR_11.mesh_id || !VAR_11.mesh_config) ||
     (VAR_11.rsn && VAR_4->u.mesh.security == VAR_2) ||
     (!VAR_11.rsn && VAR_4->u.mesh.security != VAR_2))
  return;

 if (VAR_11.ds_params)
  VAR_14 = FUNC_1(VAR_11.ds_params[0], VAR_15);
 else
  VAR_14 = VAR_8->freq;

 VAR_12 = FUNC_2(VAR_9->hw.wiphy, VAR_14);

 if (!VAR_12 || VAR_12->flags & VAR_0)
  return;

 if (FUNC_5(VAR_4, &VAR_11)) {
  FUNC_7(VAR_4, "rssi_threshold=%d,rx_status->signal=%d\n",
   VAR_4->u.mesh.mshcfg.rssi_threshold, VAR_8->signal);
  if (!VAR_4->u.mesh.user_mpm ||
      VAR_4->u.mesh.mshcfg.rssi_threshold == 0 ||
      VAR_4->u.mesh.mshcfg.rssi_threshold < VAR_8->signal)
   FUNC_6(VAR_4, VAR_6->sa, &VAR_11,
           VAR_8);
 }

 if (VAR_10->sync_ops)
  VAR_10->sync_ops->rx_bcn_presp(VAR_4,
   VAR_5, VAR_6, &VAR_11, VAR_8);

 if (VAR_10->csa_role != VAR_1 &&
     !VAR_4->vif.csa_active)
  FUNC_3(VAR_4, &VAR_11, 1);
}
