
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;
struct net_device {TYPE_3__* ieee80211_ptr; TYPE_1__ wiphy; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct mesh_setup {int dtim_period; int auto_open_plinks; int control_port_over_nl80211; int userspace_handles_dfs; int beacon_rate; TYPE_5__ chandef; int basic_rates; scalar_t__ user_mpm; void* beacon_interval; int mcast_rate; void* mesh_id_len; void* mesh_id; } ;
struct mesh_config {int dtim_period; int auto_open_plinks; int control_port_over_nl80211; int userspace_handles_dfs; int beacon_rate; TYPE_5__ chandef; int basic_rates; scalar_t__ user_mpm; void* beacon_interval; int mcast_rate; void* mesh_id_len; void* mesh_id; } ;
struct ieee80211_supported_band {int dummy; } ;
struct genl_info {int snd_portid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__* ieee80211_ptr; TYPE_1__ wiphy; } ;
typedef int setup ;
typedef int cfg ;
struct TYPE_8__ {int conn_owner_nlportid; } ;
struct TYPE_7__ {size_t band; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct net_device*,struct net_device*,struct mesh_setup*,struct mesh_setup*) ;
 int FUNC_1 (struct net_device*,int ,void*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ieee80211_supported_band*,int *,int,int *) ;
 int FUNC_3 (struct mesh_setup*,int *,int) ;
 int FUNC_4 (struct net_device*,struct genl_info*,TYPE_5__*) ;
 int FUNC_5 (struct net_device*,int ,void*) ;
 int FUNC_6 (struct genl_info*,struct mesh_setup*,int *) ;
 int FUNC_7 (struct genl_info*,struct mesh_setup*) ;
 int FUNC_8 (struct genl_info*,int *) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (scalar_t__) ;
 void* FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct net_device*,size_t,int *) ;
 int FUNC_14 (struct net_device*,struct genl_info*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_16, struct genl_info *VAR_17)
{
 struct cfg80211_registered_device *VAR_18 = VAR_17->user_ptr[0];
 struct net_device *VAR_19 = VAR_17->user_ptr[1];
 struct mesh_config VAR_20;
 struct mesh_setup VAR_21;
 int VAR_22;


 FUNC_3(&VAR_20, &VAR_14, sizeof(VAR_20));
 FUNC_3(&VAR_21, &VAR_15, sizeof(VAR_21));

 if (VAR_17->attrs[VAR_7]) {

  VAR_22 = FUNC_6(VAR_17, &VAR_20, ((void*)0));
  if (VAR_22)
   return VAR_22;
 }

 if (!VAR_17->attrs[VAR_8] ||
     !FUNC_12(VAR_17->attrs[VAR_8]))
  return -VAR_0;

 VAR_21.mesh_id = FUNC_9(VAR_17->attrs[VAR_8]);
 VAR_21.mesh_id_len = FUNC_12(VAR_17->attrs[VAR_8]);

 if (VAR_17->attrs[VAR_6] &&
     !FUNC_5(VAR_18, VAR_21.mcast_rate,
       FUNC_11(VAR_17->attrs[VAR_6])))
   return -VAR_0;

 if (VAR_17->attrs[VAR_1]) {
  VAR_21.beacon_interval =
   FUNC_11(VAR_17->attrs[VAR_1]);

  VAR_22 = FUNC_1(VAR_18,
         VAR_13,
         VAR_21.beacon_interval);
  if (VAR_22)
   return VAR_22;
 }

 if (VAR_17->attrs[VAR_4]) {
  VAR_21.dtim_period =
   FUNC_11(VAR_17->attrs[VAR_4]);
  if (VAR_21.dtim_period < 1 || VAR_21.dtim_period > 100)
   return -VAR_0;
 }

 if (VAR_17->attrs[VAR_9]) {

  VAR_22 = FUNC_7(VAR_17, &VAR_21);
  if (VAR_22)
   return VAR_22;
 }

 if (VAR_21.user_mpm)
  VAR_20.auto_open_plinks = 0;

 if (VAR_17->attrs[VAR_12]) {
  VAR_22 = FUNC_4(VAR_18, VAR_17, &VAR_21.chandef);
  if (VAR_22)
   return VAR_22;
 } else {

  VAR_21.chandef.chan = ((void*)0);
 }

 if (VAR_17->attrs[VAR_2]) {
  u8 *VAR_23 = FUNC_9(VAR_17->attrs[VAR_2]);
  int VAR_24 =
   FUNC_12(VAR_17->attrs[VAR_2]);
  struct ieee80211_supported_band *VAR_25;

  if (!VAR_21.chandef.chan)
   return -VAR_0;

  VAR_25 = VAR_18->wiphy.bands[VAR_21.chandef.chan->band];

  VAR_22 = FUNC_2(VAR_25, VAR_23, VAR_24,
          &VAR_21.basic_rates);
  if (VAR_22)
   return VAR_22;
 }

 if (VAR_17->attrs[VAR_11]) {
  VAR_22 = FUNC_8(VAR_17, &VAR_21.beacon_rate);
  if (VAR_22)
   return VAR_22;

  if (!VAR_21.chandef.chan)
   return -VAR_0;

  VAR_22 = FUNC_13(VAR_18, VAR_21.chandef.chan->band,
           &VAR_21.beacon_rate);
  if (VAR_22)
   return VAR_22;
 }

 VAR_21.userspace_handles_dfs =
  FUNC_10(VAR_17->attrs[VAR_5]);

 if (VAR_17->attrs[VAR_3]) {
  int VAR_26 = FUNC_14(VAR_18, VAR_17);

  if (VAR_26 < 0)
   return VAR_26;

  VAR_21.control_port_over_nl80211 = 1;
 }

 FUNC_15(VAR_19->ieee80211_ptr);
 VAR_22 = FUNC_0(VAR_18, VAR_19, &VAR_21, &VAR_20);
 if (!VAR_22 && VAR_17->attrs[VAR_10])
  VAR_19->ieee80211_ptr->conn_owner_nlportid = VAR_17->snd_portid;
 FUNC_16(VAR_19->ieee80211_ptr);

 return VAR_22;
}
