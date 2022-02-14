
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int features; } ;
struct net_device {TYPE_3__* ieee80211_ptr; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct ieee80211_channel {int dummy; } ;
struct genl_info {scalar_t__ snd_portid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__* ieee80211_ptr; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct cfg80211_assoc_request {int use_mfp; int crypto; int const* fils_nonces; void* fils_kek_len; int const* fils_kek; int flags; int vht_capa; int vht_capa_mask; int ht_capa; int ht_capa_mask; int const* prev_bssid; void* ie_len; int const* ie; } ;
typedef enum nl80211_mfp { ____Placeholder_nl80211_mfp } nl80211_mfp ;
struct TYPE_8__ {scalar_t__ conn_owner_nlportid; scalar_t__ iftype; int * disconnect_bssid; } ;
struct TYPE_6__ {int assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct net_device*,struct net_device*,struct ieee80211_channel*,int const*,int const*,int,struct cfg80211_assoc_request*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (struct net_device*,struct genl_info*,int *,int) ;
 struct ieee80211_channel* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int const* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_30, struct genl_info *VAR_31)
{
 struct cfg80211_registered_device *VAR_32 = VAR_31->user_ptr[0];
 struct net_device *VAR_33 = VAR_31->user_ptr[1];
 struct ieee80211_channel *VAR_34;
 struct cfg80211_assoc_request VAR_35 = {};
 const u8 *VAR_36, *VAR_37;
 int VAR_38, VAR_39 = 0;

 if (VAR_33->ieee80211_ptr->conn_owner_nlportid &&
     VAR_33->ieee80211_ptr->conn_owner_nlportid != VAR_31->snd_portid)
  return -VAR_5;

 if (!VAR_31->attrs[VAR_14] ||
     !VAR_31->attrs[VAR_17] ||
     !VAR_31->attrs[VAR_22])
  return -VAR_3;

 if (!VAR_32->ops->assoc)
  return -VAR_4;

 if (VAR_33->ieee80211_ptr->iftype != VAR_27 &&
     VAR_33->ieee80211_ptr->iftype != VAR_26)
  return -VAR_4;

 VAR_36 = FUNC_4(VAR_31->attrs[VAR_14]);

 VAR_34 = FUNC_3(&VAR_32->wiphy,
          VAR_31->attrs[VAR_22]);
 if (!VAR_34)
  return -VAR_3;

 VAR_37 = FUNC_4(VAR_31->attrs[VAR_17]);
 VAR_39 = FUNC_7(VAR_31->attrs[VAR_17]);

 if (VAR_31->attrs[VAR_13]) {
  VAR_35.ie = FUNC_4(VAR_31->attrs[VAR_13]);
  VAR_35.ie_len = FUNC_7(VAR_31->attrs[VAR_13]);
 }

 if (VAR_31->attrs[VAR_18]) {
  enum nl80211_mfp VAR_40 =
   FUNC_6(VAR_31->attrs[VAR_18]);
  if (VAR_40 == VAR_29)
   VAR_35.use_mfp = 1;
  else if (VAR_40 != VAR_28)
   return -VAR_3;
 }

 if (VAR_31->attrs[VAR_15])
  VAR_35.prev_bssid = FUNC_4(VAR_31->attrs[VAR_15]);

 if (FUNC_5(VAR_31->attrs[VAR_7]))
  VAR_35.flags |= VAR_0;

 if (VAR_31->attrs[VAR_12])
  FUNC_1(&VAR_35.ht_capa_mask,
         FUNC_4(VAR_31->attrs[VAR_12]),
         sizeof(VAR_35.ht_capa_mask));

 if (VAR_31->attrs[VAR_11]) {
  if (!VAR_31->attrs[VAR_12])
   return -VAR_3;
  FUNC_1(&VAR_35.ht_capa,
         FUNC_4(VAR_31->attrs[VAR_11]),
         sizeof(VAR_35.ht_capa));
 }

 if (FUNC_5(VAR_31->attrs[VAR_8]))
  VAR_35.flags |= VAR_1;

 if (VAR_31->attrs[VAR_21])
  FUNC_1(&VAR_35.vht_capa_mask,
         FUNC_4(VAR_31->attrs[VAR_21]),
         sizeof(VAR_35.vht_capa_mask));

 if (VAR_31->attrs[VAR_20]) {
  if (!VAR_31->attrs[VAR_21])
   return -VAR_3;
  FUNC_1(&VAR_35.vht_capa,
         FUNC_4(VAR_31->attrs[VAR_20]),
         sizeof(VAR_35.vht_capa));
 }

 if (FUNC_5(VAR_31->attrs[VAR_19])) {
  if (!((VAR_32->wiphy.features &
   VAR_24) &&
         (VAR_32->wiphy.features & VAR_25)) &&
      !FUNC_10(&VAR_32->wiphy,
          VAR_23))
   return -VAR_3;
  VAR_35.flags |= VAR_2;
 }

 if (VAR_31->attrs[VAR_9]) {
  VAR_35.fils_kek = FUNC_4(VAR_31->attrs[VAR_9]);
  VAR_35.fils_kek_len = FUNC_7(VAR_31->attrs[VAR_9]);
  if (!VAR_31->attrs[VAR_10])
   return -VAR_3;
  VAR_35.fils_nonces =
   FUNC_4(VAR_31->attrs[VAR_10]);
 }

 VAR_38 = FUNC_2(VAR_32, VAR_31, &VAR_35.crypto, 1);
 if (!VAR_38) {
  FUNC_8(VAR_33->ieee80211_ptr);

  VAR_38 = FUNC_0(VAR_32, VAR_33, VAR_34, VAR_36,
       VAR_37, VAR_39, &VAR_35);

  if (!VAR_38 && VAR_31->attrs[VAR_16]) {
   VAR_33->ieee80211_ptr->conn_owner_nlportid =
    VAR_31->snd_portid;
   FUNC_1(VAR_33->ieee80211_ptr->disconnect_bssid,
          VAR_36, VAR_6);
  }

  FUNC_9(VAR_33->ieee80211_ptr);
 }

 return VAR_38;
}
