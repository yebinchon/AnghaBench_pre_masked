
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_10__ {TYPE_1__* chan; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ ssid_len; int conn_owner_nlportid; int ssid; TYPE_4__ chandef; void* beacon_interval; TYPE_4__ preset_chandef; } ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int features; int * bands; } ;
struct net_device {TYPE_3__ wiphy; struct wireless_dev* ieee80211_ptr; TYPE_2__* ops; } ;
struct genl_info {int snd_portid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; struct wireless_dev* ieee80211_ptr; TYPE_2__* ops; } ;
struct cfg80211_ap_settings {scalar_t__ ssid_len; int privacy; scalar_t__ p2p_ctwindow; int smps_mode; int acl; int ssid; TYPE_4__ chandef; void* beacon_interval; int flags; int he_obss_pd; void* twt_responder; void* pbss; int beacon_rate; void* p2p_opp_ps; int inactivity_timeout; int crypto; void* auth_type; void* hidden_ssid; void* dtim_period; int beacon; } ;
typedef int params ;
struct TYPE_8__ {int start_ap; } ;
struct TYPE_7__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
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
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 void* VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int FUNC_3 (struct net_device*,scalar_t__,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct cfg80211_ap_settings*,int ,int) ;
 int FUNC_7 (struct cfg80211_ap_settings*) ;
 int FUNC_8 (struct net_device*,struct genl_info*,int *,int ) ;
 int FUNC_9 (struct net_device*,struct cfg80211_ap_settings*) ;
 int FUNC_10 (struct net_device*,scalar_t__*,int *) ;
 int FUNC_11 (struct net_device*,struct genl_info*,TYPE_4__*) ;
 int FUNC_12 (scalar_t__,int *) ;
 int FUNC_13 (struct genl_info*,int *) ;
 int FUNC_14 (struct net_device*,void*,int ) ;
 int FUNC_15 (scalar_t__) ;
 void* FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 void* FUNC_18 (scalar_t__) ;
 void* FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (TYPE_3__*,struct genl_info*) ;
 int FUNC_22 (struct net_device*,struct net_device*,struct cfg80211_ap_settings*) ;
 int FUNC_23 (struct net_device*,int ,int *) ;
 int FUNC_24 (struct wireless_dev*) ;
 int FUNC_25 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_26(struct sk_buff *VAR_35, struct genl_info *VAR_36)
{
 struct cfg80211_registered_device *VAR_37 = VAR_36->user_ptr[0];
 struct net_device *VAR_38 = VAR_36->user_ptr[1];
 struct wireless_dev *VAR_39 = VAR_38->ieee80211_ptr;
 struct cfg80211_ap_settings VAR_40;
 int VAR_41;

 if (VAR_38->ieee80211_ptr->iftype != VAR_32 &&
     VAR_38->ieee80211_ptr->iftype != VAR_33)
  return -VAR_3;

 if (!VAR_37->ops->start_ap)
  return -VAR_3;

 if (VAR_39->beacon_interval)
  return -VAR_1;

 FUNC_6(&VAR_40, 0, sizeof(VAR_40));


 if (!VAR_36->attrs[VAR_8] ||
     !VAR_36->attrs[VAR_9] ||
     !VAR_36->attrs[VAR_7])
  return -VAR_2;

 VAR_41 = FUNC_10(VAR_37, VAR_36->attrs, &VAR_40.beacon);
 if (VAR_41)
  return VAR_41;

 VAR_40.beacon_interval =
  FUNC_18(VAR_36->attrs[VAR_8]);
 VAR_40.dtim_period =
  FUNC_18(VAR_36->attrs[VAR_9]);

 VAR_41 = FUNC_3(VAR_37, VAR_38->ieee80211_ptr->iftype,
        VAR_40.beacon_interval);
 if (VAR_41)
  return VAR_41;
 if (VAR_36->attrs[VAR_20]) {
  VAR_40.ssid = FUNC_15(VAR_36->attrs[VAR_20]);
  VAR_40.ssid_len =
   FUNC_20(VAR_36->attrs[VAR_20]);
  if (VAR_40.ssid_len == 0 ||
      VAR_40.ssid_len > VAR_4)
   return -VAR_2;
 }

 if (VAR_36->attrs[VAR_12])
  VAR_40.hidden_ssid = FUNC_18(
   VAR_36->attrs[VAR_12]);

 VAR_40.privacy = !!VAR_36->attrs[VAR_17];

 if (VAR_36->attrs[VAR_6]) {
  VAR_40.auth_type = FUNC_18(
   VAR_36->attrs[VAR_6]);
  if (!FUNC_14(VAR_37, VAR_40.auth_type,
          VAR_26))
   return -VAR_2;
 } else
  VAR_40.auth_type = VAR_24;

 VAR_41 = FUNC_8(VAR_37, VAR_36, &VAR_40.crypto,
          VAR_34);
 if (VAR_41)
  return VAR_41;

 if (VAR_36->attrs[VAR_13]) {
  if (!(VAR_37->wiphy.features & VAR_28))
   return -VAR_3;
  VAR_40.inactivity_timeout = FUNC_17(
   VAR_36->attrs[VAR_13]);
 }

 if (VAR_36->attrs[VAR_14]) {
  if (VAR_38->ieee80211_ptr->iftype != VAR_33)
   return -VAR_2;
  VAR_40.p2p_ctwindow =
   FUNC_19(VAR_36->attrs[VAR_14]);
  if (VAR_40.p2p_ctwindow != 0 &&
      !(VAR_37->wiphy.features & VAR_29))
   return -VAR_2;
 }

 if (VAR_36->attrs[VAR_15]) {
  u8 VAR_42;

  if (VAR_38->ieee80211_ptr->iftype != VAR_33)
   return -VAR_2;
  VAR_42 = FUNC_19(VAR_36->attrs[VAR_15]);
  VAR_40.p2p_opp_ps = VAR_42;
  if (VAR_40.p2p_opp_ps != 0 &&
      !(VAR_37->wiphy.features & VAR_30))
   return -VAR_2;
 }

 if (VAR_36->attrs[VAR_23]) {
  VAR_41 = FUNC_11(VAR_37, VAR_36, &VAR_40.chandef);
  if (VAR_41)
   return VAR_41;
 } else if (VAR_39->preset_chandef.chan) {
  VAR_40.chandef = VAR_39->preset_chandef;
 } else if (!FUNC_9(VAR_37, &VAR_40))
  return -VAR_2;

 if (!FUNC_2(&VAR_37->wiphy, &VAR_40.chandef,
        VAR_39->iftype))
  return -VAR_2;

 if (VAR_36->attrs[VAR_22]) {
  VAR_41 = FUNC_13(VAR_36, &VAR_40.beacon_rate);
  if (VAR_41)
   return VAR_41;

  VAR_41 = FUNC_23(VAR_37, VAR_40.chandef.chan->band,
           &VAR_40.beacon_rate);
  if (VAR_41)
   return VAR_41;
 }

 if (VAR_36->attrs[VAR_18]) {
  VAR_40.smps_mode =
   FUNC_19(VAR_36->attrs[VAR_18]);
  switch (VAR_40.smps_mode) {
  case 129:
   break;
  case 128:
   if (!(VAR_37->wiphy.features &
         VAR_31))
    return -VAR_2;
   break;
  case 130:
   if (!(VAR_37->wiphy.features &
         VAR_27))
    return -VAR_2;
   break;
  default:
   return -VAR_2;
  }
 } else {
  VAR_40.smps_mode = 129;
 }

 VAR_40.pbss = FUNC_16(VAR_36->attrs[VAR_16]);
 if (VAR_40.pbss && !VAR_37->wiphy.bands[VAR_25])
  return -VAR_3;

 if (VAR_36->attrs[VAR_5]) {
  VAR_40.acl = FUNC_21(&VAR_37->wiphy, VAR_36);
  if (FUNC_0(VAR_40.acl))
   return FUNC_1(VAR_40.acl);
 }

 VAR_40.twt_responder =
      FUNC_16(VAR_36->attrs[VAR_21]);

 if (VAR_36->attrs[VAR_11]) {
  VAR_41 = FUNC_12(
     VAR_36->attrs[VAR_11],
     &VAR_40.he_obss_pd);
  if (VAR_41)
   return VAR_41;
 }

 FUNC_7(&VAR_40);

 if (VAR_36->attrs[VAR_10])
  VAR_40.flags |= VAR_0;

 FUNC_24(VAR_39);
 VAR_41 = FUNC_22(VAR_37, VAR_38, &VAR_40);
 if (!VAR_41) {
  VAR_39->preset_chandef = VAR_40.chandef;
  VAR_39->beacon_interval = VAR_40.beacon_interval;
  VAR_39->chandef = VAR_40.chandef;
  VAR_39->ssid_len = VAR_40.ssid_len;
  FUNC_5(VAR_39->ssid, VAR_40.ssid, VAR_39->ssid_len);

  if (VAR_36->attrs[VAR_19])
   VAR_39->conn_owner_nlportid = VAR_36->snd_portid;
 }
 FUNC_25(VAR_39);

 FUNC_4(VAR_40.acl);

 return VAR_41;
}
