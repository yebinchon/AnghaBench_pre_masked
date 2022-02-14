
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int features; struct ieee80211_supported_band** bands; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_3__* ieee80211_ptr; struct wiphy wiphy; TYPE_1__* ops; } ;
struct ieee80211_supported_band {int dummy; } ;
struct genl_info {int snd_portid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__* ieee80211_ptr; struct wiphy wiphy; TYPE_1__* ops; } ;
struct TYPE_10__ {int width; TYPE_2__* chan; } ;
struct cfg80211_ibss_params {int beacon_interval; int channel_fixed; int privacy; int control_port_over_nl80211; void* userspace_handles_dfs; void* control_port; TYPE_5__ chandef; int mcast_rate; int ht_capa; int ht_capa_mask; int basic_rates; void* ie_len; void* ie; void* ssid_len; void* ssid; void* bssid; } ;
struct cfg80211_cached_keys {int dummy; } ;
typedef int ibss ;
struct TYPE_9__ {scalar_t__ iftype; int conn_owner_nlportid; } ;
struct TYPE_8__ {size_t band; } ;
struct TYPE_7__ {int join_ibss; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cfg80211_cached_keys*) ;
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
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (struct cfg80211_cached_keys*) ;
 int FUNC_2 (struct net_device*,struct net_device*,struct cfg80211_ibss_params*,struct cfg80211_cached_keys*) ;
 int FUNC_3 (struct wiphy*,TYPE_5__*,scalar_t__) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;
 int FUNC_5 (struct ieee80211_supported_band*,int *,int,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct cfg80211_cached_keys*) ;
 int FUNC_8 (int *,void*,int) ;
 int FUNC_9 (struct cfg80211_ibss_params*,int ,int) ;
 int FUNC_10 (struct net_device*,struct genl_info*,TYPE_5__*) ;
 struct cfg80211_cached_keys* FUNC_11 (struct net_device*,struct genl_info*,int*) ;
 int FUNC_12 (struct net_device*,int ,int) ;
 void* FUNC_13 (scalar_t__) ;
 void* FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 void* FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct net_device*,struct genl_info*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (struct wiphy*,int ) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_20, struct genl_info *VAR_21)
{
 struct cfg80211_registered_device *VAR_22 = VAR_21->user_ptr[0];
 struct net_device *VAR_23 = VAR_21->user_ptr[1];
 struct cfg80211_ibss_params VAR_24;
 struct wiphy *VAR_25;
 struct cfg80211_cached_keys *VAR_26 = ((void*)0);
 int VAR_27;

 FUNC_9(&VAR_24, 0, sizeof(VAR_24));

 if (!VAR_21->attrs[VAR_16] ||
     !FUNC_16(VAR_21->attrs[VAR_16]))
  return -VAR_0;

 VAR_24.beacon_interval = 100;

 if (VAR_21->attrs[VAR_2])
  VAR_24.beacon_interval =
   FUNC_15(VAR_21->attrs[VAR_2]);

 VAR_27 = FUNC_4(VAR_22, VAR_19,
        VAR_24.beacon_interval);
 if (VAR_27)
  return VAR_27;

 if (!VAR_22->ops->join_ibss)
  return -VAR_1;

 if (VAR_23->ieee80211_ptr->iftype != VAR_19)
  return -VAR_1;

 VAR_25 = &VAR_22->wiphy;

 if (VAR_21->attrs[VAR_12]) {
  VAR_24.bssid = FUNC_13(VAR_21->attrs[VAR_12]);

  if (!FUNC_6(VAR_24.bssid))
   return -VAR_0;
 }
 VAR_24.ssid = FUNC_13(VAR_21->attrs[VAR_16]);
 VAR_24.ssid_len = FUNC_16(VAR_21->attrs[VAR_16]);

 if (VAR_21->attrs[VAR_10]) {
  VAR_24.ie = FUNC_13(VAR_21->attrs[VAR_10]);
  VAR_24.ie_len = FUNC_16(VAR_21->attrs[VAR_10]);
 }

 VAR_27 = FUNC_10(VAR_22, VAR_21, &VAR_24.chandef);
 if (VAR_27)
  return VAR_27;

 if (!FUNC_3(&VAR_22->wiphy, &VAR_24.chandef,
         VAR_19))
  return -VAR_0;

 switch (VAR_24.chandef.width) {
 case 130:
 case 135:
 case 132:
  break;
 case 133:
 case 131:
  if (!(VAR_22->wiphy.features & VAR_18))
   return -VAR_0;
  break;
 case 129:
 case 128:
 case 134:
  if (!(VAR_22->wiphy.features & VAR_18))
   return -VAR_0;
  if (!FUNC_20(&VAR_22->wiphy,
          VAR_17))
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 VAR_24.channel_fixed = !!VAR_21->attrs[VAR_6];
 VAR_24.privacy = !!VAR_21->attrs[VAR_14];

 if (VAR_21->attrs[VAR_3]) {
  u8 *VAR_28 =
   FUNC_13(VAR_21->attrs[VAR_3]);
  int VAR_29 =
   FUNC_16(VAR_21->attrs[VAR_3]);
  struct ieee80211_supported_band *VAR_30 =
   VAR_25->bands[VAR_24.chandef.chan->band];

  VAR_27 = FUNC_5(VAR_30, VAR_28, VAR_29,
          &VAR_24.basic_rates);
  if (VAR_27)
   return VAR_27;
 }

 if (VAR_21->attrs[VAR_9])
  FUNC_8(&VAR_24.ht_capa_mask,
         FUNC_13(VAR_21->attrs[VAR_9]),
         sizeof(VAR_24.ht_capa_mask));

 if (VAR_21->attrs[VAR_8]) {
  if (!VAR_21->attrs[VAR_9])
   return -VAR_0;
  FUNC_8(&VAR_24.ht_capa,
         FUNC_13(VAR_21->attrs[VAR_8]),
         sizeof(VAR_24.ht_capa));
 }

 if (VAR_21->attrs[VAR_13] &&
     !FUNC_12(VAR_22, VAR_24.mcast_rate,
   FUNC_15(VAR_21->attrs[VAR_13])))
  return -VAR_0;

 if (VAR_24.privacy && VAR_21->attrs[VAR_11]) {
  bool VAR_31 = 0;

  VAR_26 = FUNC_11(VAR_22, VAR_21, &VAR_31);
  if (FUNC_0(VAR_26))
   return FUNC_1(VAR_26);

  if ((VAR_24.chandef.width != 132) &&
      VAR_31) {
   FUNC_7(VAR_26);
   return -VAR_0;
  }
 }

 VAR_24.control_port =
  FUNC_14(VAR_21->attrs[VAR_4]);

 if (VAR_21->attrs[VAR_5]) {
  int VAR_32 = FUNC_17(VAR_22, VAR_21);

  if (VAR_32 < 0) {
   FUNC_7(VAR_26);
   return VAR_32;
  }

  VAR_24.control_port_over_nl80211 = 1;
 }

 VAR_24.userspace_handles_dfs =
  FUNC_14(VAR_21->attrs[VAR_7]);

 FUNC_18(VAR_23->ieee80211_ptr);
 VAR_27 = FUNC_2(VAR_22, VAR_23, &VAR_24, VAR_26);
 if (VAR_27)
  FUNC_7(VAR_26);
 else if (VAR_21->attrs[VAR_15])
  VAR_23->ieee80211_ptr->conn_owner_nlportid = VAR_21->snd_portid;
 FUNC_19(VAR_23->ieee80211_ptr);

 return VAR_27;
}
