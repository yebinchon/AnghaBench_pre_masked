
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int netdev; TYPE_2__* conn; int wiphy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_connect_params {int bssid; int ssid_len; int ssid; int channel; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int flags; int crypto; int mfp; int ie_len; int ie; int key_idx; int key_len; int key; int auth_type; } ;
struct cfg80211_assoc_request {int use_mfp; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int flags; int crypto; int ie_len; int ie; int prev_bssid; } ;
typedef enum nl80211_timeout_reason { ____Placeholder_nl80211_timeout_reason } nl80211_timeout_reason ;
struct TYPE_4__ {int state; int prev_bssid; int prev_bssid_valid; struct cfg80211_connect_params params; } ;
struct TYPE_3__ {int assoc; int auth; } ;


 int FUNC_0 (struct wireless_dev*) ;


 int VAR_0 ;



 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (struct cfg80211_registered_device*,int ,int ,int ,int ,int ,struct cfg80211_assoc_request*) ;
 int FUNC_4 (struct cfg80211_registered_device*,int ,int ,int ,int ,int ,int ,int *,int ,int ,int ,int ,int *,int ) ;
 int FUNC_5 (struct cfg80211_registered_device*,int ,int ,int *,int ,int ,int) ;
 int FUNC_6 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct wireless_dev *VAR_9,
     enum nl80211_timeout_reason *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = FUNC_7(VAR_9->wiphy);
 struct cfg80211_connect_params *VAR_12;
 struct cfg80211_assoc_request VAR_13 = {};
 int VAR_14;

 FUNC_0(VAR_9);

 if (!VAR_9->conn)
  return 0;

 VAR_12 = &VAR_9->conn->params;

 switch (VAR_9->conn->state) {
 case 129:

  return -VAR_2;
 case 128:
  return FUNC_2(VAR_9);
 case 132:
  if (FUNC_1(!VAR_11->ops->auth))
   return -VAR_4;
  VAR_9->conn->state = VAR_1;
  return FUNC_4(VAR_11, VAR_9->netdev,
       VAR_12->channel, VAR_12->auth_type,
       VAR_12->bssid,
       VAR_12->ssid, VAR_12->ssid_len,
       ((void*)0), 0,
       VAR_12->key, VAR_12->key_len,
       VAR_12->key_idx, ((void*)0), 0);
 case 131:
  *VAR_10 = VAR_7;
  return -VAR_3;
 case 135:
  if (FUNC_1(!VAR_11->ops->assoc))
   return -VAR_4;
  VAR_9->conn->state = VAR_0;
  if (VAR_9->conn->prev_bssid_valid)
   VAR_13.prev_bssid = VAR_9->conn->prev_bssid;
  VAR_13.ie = VAR_12->ie;
  VAR_13.ie_len = VAR_12->ie_len;
  VAR_13.use_mfp = VAR_12->mfp != VAR_5;
  VAR_13.crypto = VAR_12->crypto;
  VAR_13.flags = VAR_12->flags;
  VAR_13.ht_capa = VAR_12->ht_capa;
  VAR_13.ht_capa_mask = VAR_12->ht_capa_mask;
  VAR_13.vht_capa = VAR_12->vht_capa;
  VAR_13.vht_capa_mask = VAR_12->vht_capa_mask;

  VAR_14 = FUNC_3(VAR_11, VAR_9->netdev, VAR_12->channel,
       VAR_12->bssid, VAR_12->ssid,
       VAR_12->ssid_len, &VAR_13);
  if (VAR_14)
   FUNC_5(VAR_11, VAR_9->netdev, VAR_12->bssid,
          ((void*)0), 0,
          VAR_8,
          0);
  return VAR_14;
 case 133:
  *VAR_10 = VAR_6;

 case 134:
  FUNC_5(VAR_11, VAR_9->netdev, VAR_12->bssid,
         ((void*)0), 0,
         VAR_8, 0);
  return -VAR_3;
 case 130:
  FUNC_5(VAR_11, VAR_9->netdev, VAR_12->bssid,
         ((void*)0), 0,
         VAR_8, 0);

 case 136:

  FUNC_6(VAR_9);
  return 0;
 default:
  return 0;
 }
}
