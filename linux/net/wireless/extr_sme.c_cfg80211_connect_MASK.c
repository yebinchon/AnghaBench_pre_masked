
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


typedef int u8 ;
typedef scalar_t__ u32 ;
struct wireless_dev {scalar_t__ ssid_len; TYPE_6__* current_bss; struct cfg80211_cached_keys* connect_keys; int conn_bss_type; int ssid; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_8__ {int vht_capa_mod_mask; int ht_capa_mod_mask; } ;
struct cfg80211_registered_device {TYPE_5__* ops; TYPE_2__ wiphy; } ;
struct TYPE_10__ {scalar_t__ cipher_group; int n_ciphers_pairwise; int wep_tx_key; TYPE_3__* wep_keys; scalar_t__* ciphers_pairwise; } ;
struct cfg80211_connect_params {scalar_t__ ssid_len; int key_idx; scalar_t__ pbss; int ssid; TYPE_4__ crypto; int key_len; int key; int vht_capa_mask; int ht_capa_mask; } ;
struct cfg80211_cached_keys {scalar_t__ def; TYPE_3__* params; } ;
struct TYPE_7__ {int bssid; } ;
struct TYPE_12__ {TYPE_1__ pub; } ;
struct TYPE_11__ {int connect; } ;
struct TYPE_9__ {scalar_t__ cipher; int key_len; int key; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct cfg80211_cached_keys*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct wireless_dev*,struct cfg80211_connect_params*,int const*) ;
 int FUNC_5 (int const*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_connect_params*) ;

int FUNC_9(struct cfg80211_registered_device *VAR_8,
       struct net_device *VAR_9,
       struct cfg80211_connect_params *VAR_10,
       struct cfg80211_cached_keys *VAR_11,
       const u8 *VAR_12)
{
 struct wireless_dev *VAR_13 = VAR_9->ieee80211_ptr;
 int VAR_14;

 FUNC_0(VAR_13);






 if (VAR_13->ssid_len &&
     (VAR_13->ssid_len != VAR_10->ssid_len ||
      FUNC_6(VAR_13->ssid, VAR_10->ssid, VAR_13->ssid_len)))
  return -VAR_0;





 if (VAR_13->current_bss) {
  if (!VAR_12)
   return -VAR_0;
  if (!FUNC_5(VAR_12, VAR_13->current_bss->pub.bssid))
   return -VAR_3;
 }






 if (VAR_13->connect_keys)
  return -VAR_1;

 FUNC_2(&VAR_10->ht_capa_mask,
      VAR_8->wiphy.ht_capa_mod_mask);
 FUNC_3(&VAR_10->vht_capa_mask,
       VAR_8->wiphy.vht_capa_mod_mask);

 if (VAR_11 && VAR_11->def >= 0) {
  int VAR_15;
  u32 VAR_16;

  VAR_15 = VAR_11->def;
  VAR_16 = VAR_11->params[VAR_15].cipher;

  if (VAR_16 == VAR_7 ||
      VAR_16 == VAR_6) {
   VAR_10->key_idx = VAR_15;
   VAR_10->key = VAR_11->params[VAR_15].key;
   VAR_10->key_len = VAR_11->params[VAR_15].key_len;





   if (VAR_10->crypto.cipher_group == 0)
    VAR_10->crypto.cipher_group = VAR_16;

   if (VAR_10->crypto.n_ciphers_pairwise == 0) {
    VAR_10->crypto.n_ciphers_pairwise = 1;
    VAR_10->crypto.ciphers_pairwise[0] = VAR_16;
   }
  }

  VAR_10->crypto.wep_keys = VAR_11->params;
  VAR_10->crypto.wep_tx_key = VAR_11->def;
 } else {
  if (FUNC_1(VAR_11))
   return -VAR_2;
 }

 VAR_13->connect_keys = VAR_11;
 FUNC_7(VAR_13->ssid, VAR_10->ssid, VAR_10->ssid_len);
 VAR_13->ssid_len = VAR_10->ssid_len;

 VAR_13->conn_bss_type = VAR_10->pbss ? VAR_5 :
           VAR_4;

 if (!VAR_8->ops->connect)
  VAR_14 = FUNC_4(VAR_13, VAR_10, VAR_12);
 else
  VAR_14 = FUNC_8(VAR_8, VAR_9, VAR_10);

 if (VAR_14) {
  VAR_13->connect_keys = ((void*)0);




  if (!VAR_13->current_bss)
   VAR_13->ssid_len = 0;
  return VAR_14;
 }

 return 0;
}
