
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int mesh_id_len; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct mesh_config {int dot11MeshConnectedToMeshGate; int plink_timeout; int dot11MeshAwakeWindowDuration; int power_mode; int dot11MeshHWMPconfirmationInterval; int dot11MeshHWMProotInterval; int dot11MeshHWMPactivePathToRootTimeout; int ht_opmode; int rssi_threshold; int dot11MeshForwarding; int dot11MeshGateAnnouncementProtocol; int dot11MeshHWMPRannInterval; int dot11MeshHWMPRootMode; int dot11MeshHWMPnetDiameterTraversalTime; int dot11MeshHWMPperrMinInterval; int dot11MeshHWMPpreqMinInterval; int dot11MeshHWMPactivePathTimeout; int min_discovery_timeout; int path_refresh_time; int dot11MeshHWMPmaxPREQretries; int dot11MeshNbrOffsetMaxNeighbor; int auto_open_plinks; int element_ttl; int dot11MeshTTL; int dot11MeshMaxRetries; int dot11MeshMaxPeerLinks; int dot11MeshHoldingTimeout; int dot11MeshConfirmTimeout; int dot11MeshRetryTimeout; } ;
struct genl_info {int snd_seq; int snd_portid; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int ifindex; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
typedef int cur_params ;
struct TYPE_2__ {int get_mesh_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct mesh_config*,int *,int) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct net_device*,struct net_device*,struct mesh_config*) ;
 int FUNC_13 (struct wireless_dev*) ;
 int FUNC_14 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_39,
       struct genl_info *VAR_40)
{
 struct cfg80211_registered_device *VAR_41 = VAR_40->user_ptr[0];
 struct net_device *VAR_42 = VAR_40->user_ptr[1];
 struct wireless_dev *VAR_43 = VAR_42->ieee80211_ptr;
 struct mesh_config VAR_44;
 int VAR_45 = 0;
 void *VAR_46;
 struct nlattr *VAR_47;
 struct sk_buff *VAR_48;

 if (VAR_43->iftype != VAR_7)
  return -VAR_2;

 if (!VAR_41->ops->get_mesh_config)
  return -VAR_2;

 FUNC_13(VAR_43);

 if (!VAR_43->mesh_id_len)
  FUNC_2(&VAR_44, &VAR_38, sizeof(VAR_44));
 else
  VAR_45 = FUNC_12(VAR_41, VAR_42, &VAR_44);
 FUNC_14(VAR_43);

 if (VAR_45)
  return VAR_45;


 VAR_48 = FUNC_11(VAR_37, VAR_3);
 if (!VAR_48)
  return -VAR_1;
 VAR_46 = FUNC_3(VAR_48, VAR_40->snd_portid, VAR_40->snd_seq, 0,
        VAR_6);
 if (!VAR_46)
  goto out;
 VAR_47 = FUNC_5(VAR_48, VAR_5);
 if (!VAR_47)
  goto nla_put_failure;
 if (FUNC_8(VAR_48, VAR_4, VAR_42->ifindex) ||
     FUNC_7(VAR_48, VAR_33,
   VAR_44.dot11MeshRetryTimeout) ||
     FUNC_7(VAR_48, VAR_10,
   VAR_44.dot11MeshConfirmTimeout) ||
     FUNC_7(VAR_48, VAR_15,
   VAR_44.dot11MeshHoldingTimeout) ||
     FUNC_7(VAR_48, VAR_27,
   VAR_44.dot11MeshMaxPeerLinks) ||
     FUNC_9(VAR_48, VAR_28,
         VAR_44.dot11MeshMaxRetries) ||
     FUNC_9(VAR_48, VAR_36,
         VAR_44.dot11MeshTTL) ||
     FUNC_9(VAR_48, VAR_12,
         VAR_44.element_ttl) ||
     FUNC_9(VAR_48, VAR_8,
         VAR_44.auto_open_plinks) ||
     FUNC_8(VAR_48, VAR_35,
   VAR_44.dot11MeshNbrOffsetMaxNeighbor) ||
     FUNC_9(VAR_48, VAR_19,
         VAR_44.dot11MeshHWMPmaxPREQretries) ||
     FUNC_8(VAR_48, VAR_30,
   VAR_44.path_refresh_time) ||
     FUNC_7(VAR_48, VAR_29,
   VAR_44.min_discovery_timeout) ||
     FUNC_8(VAR_48, VAR_17,
   VAR_44.dot11MeshHWMPactivePathTimeout) ||
     FUNC_7(VAR_48, VAR_23,
   VAR_44.dot11MeshHWMPpreqMinInterval) ||
     FUNC_7(VAR_48, VAR_22,
   VAR_44.dot11MeshHWMPperrMinInterval) ||
     FUNC_7(VAR_48, VAR_20,
   VAR_44.dot11MeshHWMPnetDiameterTraversalTime) ||
     FUNC_9(VAR_48, VAR_25,
         VAR_44.dot11MeshHWMPRootMode) ||
     FUNC_7(VAR_48, VAR_24,
   VAR_44.dot11MeshHWMPRannInterval) ||
     FUNC_9(VAR_48, VAR_14,
         VAR_44.dot11MeshGateAnnouncementProtocol) ||
     FUNC_9(VAR_48, VAR_13,
         VAR_44.dot11MeshForwarding) ||
     FUNC_6(VAR_48, VAR_34,
   VAR_44.rssi_threshold) ||
     FUNC_8(VAR_48, VAR_16,
   VAR_44.ht_opmode) ||
     FUNC_8(VAR_48, VAR_21,
   VAR_44.dot11MeshHWMPactivePathToRootTimeout) ||
     FUNC_7(VAR_48, VAR_26,
   VAR_44.dot11MeshHWMProotInterval) ||
     FUNC_7(VAR_48, VAR_18,
   VAR_44.dot11MeshHWMPconfirmationInterval) ||
     FUNC_8(VAR_48, VAR_32,
   VAR_44.power_mode) ||
     FUNC_7(VAR_48, VAR_9,
   VAR_44.dot11MeshAwakeWindowDuration) ||
     FUNC_8(VAR_48, VAR_31,
   VAR_44.plink_timeout) ||
     FUNC_9(VAR_48, VAR_11,
         VAR_44.dot11MeshConnectedToMeshGate))
  goto nla_put_failure;
 FUNC_4(VAR_48, VAR_47);
 FUNC_0(VAR_48, VAR_46);
 return FUNC_1(VAR_48, VAR_40);

 nla_put_failure:
 out:
 FUNC_10(VAR_48);
 return -VAR_0;
}
