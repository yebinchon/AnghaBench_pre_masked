
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct station_parameters {int listen_interval; int support_p2p_ps; int opmode_notif_used; scalar_t__ vlan; void* airtime_weight; void* opmode_notif; int local_pm; int sta_modify_mask; void* peer_aid; void* plink_state; void* plink_action; void* ext_capab_len; void* ext_capab; void* capability; void* supported_rates_len; void* supported_rates; void* aid; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; int wiphy; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; int wiphy; TYPE_1__* ops; } ;
typedef int params ;
struct TYPE_4__ {int iftype; } ;
struct TYPE_3__ {int change_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
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
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;







 int FUNC_1 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct genl_info*,struct net_device*) ;
 int FUNC_4 (struct station_parameters*,int ,int) ;
 int FUNC_5 (struct genl_info*,struct station_parameters*) ;
 int FUNC_6 (struct genl_info*,struct station_parameters*) ;
 void* FUNC_7 (scalar_t__) ;
 void* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 void* FUNC_10 (scalar_t__) ;
 void* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (struct genl_info*,int,struct station_parameters*) ;
 int FUNC_13 (struct net_device*,struct net_device*,int *,struct station_parameters*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_18, struct genl_info *VAR_19)
{
 struct cfg80211_registered_device *VAR_20 = VAR_19->user_ptr[0];
 struct net_device *VAR_21 = VAR_19->user_ptr[1];
 struct station_parameters VAR_22;
 u8 *VAR_23;
 int VAR_24;

 FUNC_4(&VAR_22, 0, sizeof(VAR_22));

 if (!VAR_20->ops->change_station)
  return -VAR_1;






 if (VAR_19->attrs[VAR_7])
  VAR_22.aid = FUNC_8(VAR_19->attrs[VAR_7]);

 if (VAR_19->attrs[VAR_10])
  VAR_22.listen_interval =
       FUNC_8(VAR_19->attrs[VAR_10]);
 else
  VAR_22.listen_interval = -1;

 if (VAR_19->attrs[VAR_14])
  VAR_22.support_p2p_ps =
   FUNC_10(VAR_19->attrs[VAR_14]);
 else
  VAR_22.support_p2p_ps = -1;

 if (!VAR_19->attrs[VAR_4])
  return -VAR_0;

 VAR_23 = FUNC_7(VAR_19->attrs[VAR_4]);

 if (VAR_19->attrs[VAR_13]) {
  VAR_22.supported_rates =
   FUNC_7(VAR_19->attrs[VAR_13]);
  VAR_22.supported_rates_len =
   FUNC_11(VAR_19->attrs[VAR_13]);
 }

 if (VAR_19->attrs[VAR_8]) {
  VAR_22.capability =
   FUNC_8(VAR_19->attrs[VAR_8]);
  VAR_22.sta_modify_mask |= VAR_16;
 }

 if (VAR_19->attrs[VAR_9]) {
  VAR_22.ext_capab =
   FUNC_7(VAR_19->attrs[VAR_9]);
  VAR_22.ext_capab_len =
   FUNC_11(VAR_19->attrs[VAR_9]);
 }

 if (FUNC_12(VAR_19, VAR_21->ieee80211_ptr->iftype, &VAR_22))
  return -VAR_0;

 if (VAR_19->attrs[VAR_11])
  VAR_22.plink_action =
   FUNC_10(VAR_19->attrs[VAR_11]);

 if (VAR_19->attrs[VAR_12]) {
  VAR_22.plink_state =
   FUNC_10(VAR_19->attrs[VAR_12]);
  if (VAR_19->attrs[VAR_5])
   VAR_22.peer_aid = FUNC_8(
    VAR_19->attrs[VAR_5]);
  VAR_22.sta_modify_mask |= VAR_17;
 }

 if (VAR_19->attrs[VAR_3])
  VAR_22.local_pm = FUNC_9(
   VAR_19->attrs[VAR_3]);

 if (VAR_19->attrs[VAR_6]) {
  VAR_22.opmode_notif_used = 1;
  VAR_22.opmode_notif =
   FUNC_10(VAR_19->attrs[VAR_6]);
 }

 if (VAR_19->attrs[VAR_2])
  VAR_22.airtime_weight =
   FUNC_8(VAR_19->attrs[VAR_2]);

 if (VAR_22.airtime_weight &&
     !FUNC_14(&VAR_20->wiphy,
         VAR_15))
  return -VAR_1;

 VAR_24 = FUNC_5(VAR_19, &VAR_22);
 if (VAR_24)
  return VAR_24;


 VAR_24 = FUNC_6(VAR_19, &VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_22.vlan = FUNC_3(VAR_19, VAR_20);
 if (FUNC_0(VAR_22.vlan))
  return FUNC_1(VAR_22.vlan);

 switch (VAR_21->ieee80211_ptr->iftype) {
 case 133:
 case 132:
 case 129:
 case 130:
 case 128:
 case 134:
 case 131:
  break;
 default:
  VAR_24 = -VAR_1;
  goto out_put_vlan;
 }


 VAR_24 = FUNC_13(VAR_20, VAR_21, VAR_23, &VAR_22);

 out_put_vlan:
 if (VAR_22.vlan)
  FUNC_2(VAR_22.vlan);

 return VAR_24;
}
