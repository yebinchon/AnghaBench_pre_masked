
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {int dummy; } ;
struct mesh_path {scalar_t__ sn; scalar_t__ rann_metric; int flags; int is_root; int rann_snd_addr; scalar_t__ last_preq_to_root; } ;
struct TYPE_8__ {scalar_t__ dot11MeshForwarding; } ;
struct TYPE_7__ {int dropped_frames_ttl; int dropped_frames_no_route; } ;
struct ieee80211_if_mesh {TYPE_4__ mshcfg; TYPE_3__ mshstats; } ;
struct TYPE_6__ {struct ieee80211_if_mesh mesh; } ;
struct TYPE_5__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_rann_ie {int rann_ttl; int rann_flags; int* rann_addr; int rann_hopcount; int rann_metric; int rann_interval; int rann_seq; } ;
struct ieee80211_mgmt {int sa; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mesh_path*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*,struct sta_info*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct mesh_path* FUNC_6 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_7 (struct mesh_path*) ;
 struct mesh_path* FUNC_8 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_9 (int ,int,int const*,scalar_t__,int ,int *,int ,int ,int,int,scalar_t__,scalar_t__,int ,struct ieee80211_sub_if_data*) ;
 int FUNC_10 (struct mesh_path*,int) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,char*,int const*,...) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (struct ieee80211_sub_if_data*) ;
 struct sta_info* FUNC_15 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct ieee80211_sub_if_data *VAR_11,
        struct ieee80211_mgmt *VAR_12,
        const struct ieee80211_rann_ie *VAR_13)
{
 struct ieee80211_if_mesh *VAR_14 = &VAR_11->u.mesh;
 struct ieee80211_local *VAR_15 = VAR_11->local;
 struct sta_info *VAR_16;
 struct mesh_path *VAR_17;
 u8 VAR_18, VAR_19, VAR_20;
 const u8 *VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 bool VAR_27;

 VAR_18 = VAR_13->rann_ttl;
 VAR_19 = VAR_13->rann_flags;
 VAR_27 = !!(VAR_19 & VAR_8);
 VAR_21 = VAR_13->rann_addr;
 VAR_22 = FUNC_4(VAR_13->rann_seq);
 VAR_26 = FUNC_4(VAR_13->rann_interval);
 VAR_20 = VAR_13->rann_hopcount;
 VAR_20++;
 VAR_24 = FUNC_4(VAR_13->rann_metric);


 if (FUNC_3(VAR_21, VAR_11->vif.addr))
  return;

 FUNC_11(VAR_11,
    "received RANN from %pM via neighbour %pM (is_gate=%d)\n",
    VAR_21, VAR_12->sa, VAR_27);

 FUNC_12();
 VAR_16 = FUNC_15(VAR_11, VAR_12->sa);
 if (!VAR_16) {
  FUNC_13();
  return;
 }

 VAR_25 = FUNC_2(VAR_15, VAR_16);
 VAR_23 = VAR_24 + VAR_25;
 if (VAR_23 < VAR_24)
  VAR_23 = VAR_1;

 VAR_17 = FUNC_8(VAR_11, VAR_21);
 if (!VAR_17) {
  VAR_17 = FUNC_6(VAR_11, VAR_21);
  if (FUNC_0(VAR_17)) {
   FUNC_13();
   VAR_11->u.mesh.mshstats.dropped_frames_no_route++;
   return;
  }
 }

 if (!(FUNC_1(VAR_17->sn, VAR_22)) &&
     !(VAR_17->sn == VAR_22 && VAR_23 < VAR_17->rann_metric)) {
  FUNC_13();
  return;
 }

 if ((!(VAR_17->flags & (VAR_2 | VAR_4)) ||
      (FUNC_16(VAR_10, VAR_17->last_preq_to_root +
      FUNC_14(VAR_11)) ||
      FUNC_17(VAR_10, VAR_17->last_preq_to_root))) &&
      !(VAR_17->flags & VAR_3) && (VAR_18 != 0)) {
  FUNC_11(VAR_11,
     "time to refresh root mpath %pM\n",
     VAR_21);
  FUNC_10(VAR_17, VAR_7 | VAR_6);
  VAR_17->last_preq_to_root = VAR_10;
 }

 VAR_17->sn = VAR_22;
 VAR_17->rann_metric = VAR_23;
 VAR_17->is_root = 1;


 FUNC_5(VAR_17->rann_snd_addr, VAR_12->sa, VAR_0);

 if (VAR_27)
  FUNC_7(VAR_17);

 if (VAR_18 <= 1) {
  VAR_14->mshstats.dropped_frames_ttl++;
  FUNC_13();
  return;
 }
 VAR_18--;

 if (VAR_14->mshcfg.dot11MeshForwarding) {
  FUNC_9(VAR_5, VAR_19, VAR_21,
           VAR_22, 0, ((void*)0), 0, VAR_9,
           VAR_20, VAR_18, VAR_26,
           VAR_23, 0, VAR_11);
 }

 FUNC_13();
}
