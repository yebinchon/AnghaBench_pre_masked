
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_if_managed {struct ieee80211_mgd_auth_data* auth_data; int bssid; TYPE_2__* associated; scalar_t__ assoc_data; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_mgd_auth_data {int sae_trans; size_t data_len; int key_len; TYPE_4__* bss; scalar_t__ peer_confirmed; int algorithm; int * key; int key_idx; int * data; void* sae_status; } ;
struct TYPE_8__ {int wiphy; } ;
struct ieee80211_local {int mtx; TYPE_3__ hw; } ;
struct cfg80211_auth_request {int auth_type; int auth_data_len; int ie_len; int key_len; TYPE_4__* bss; scalar_t__ key; int key_idx; scalar_t__ ie; scalar_t__ auth_data; } ;
typedef int frame_buf ;
typedef int __le16 ;
struct TYPE_9__ {int bssid; } ;
struct TYPE_7__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,TYPE_4__*,int,int) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int *,int,int,int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_9 (struct ieee80211_sub_if_data*) ;
 int FUNC_10 (struct ieee80211_mgd_auth_data*) ;
 struct ieee80211_mgd_auth_data* FUNC_11 (int,int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int *,scalar_t__,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ieee80211_sub_if_data*,char*,int ,...) ;
 int FUNC_17 (struct ieee80211_sub_if_data*,int ) ;

int FUNC_18(struct ieee80211_sub_if_data *VAR_17,
         struct cfg80211_auth_request *VAR_18)
{
 struct ieee80211_local *VAR_19 = VAR_17->local;
 struct ieee80211_if_managed *VAR_20 = &VAR_17->u.mgd;
 struct ieee80211_mgd_auth_data *VAR_21;
 u16 VAR_22;
 int VAR_23;
 bool VAR_24;



 switch (VAR_18->auth_type) {
 case 130:
  VAR_22 = VAR_12;
  break;
 case 128:
  if (VAR_16)
   return -VAR_3;
  VAR_22 = VAR_14;
  break;
 case 132:
  VAR_22 = VAR_10;
  break;
 case 131:
  VAR_22 = VAR_11;
  break;
 case 129:
  VAR_22 = VAR_13;
  break;
 case 134:
  VAR_22 = VAR_8;
  break;
 case 133:
  VAR_22 = VAR_9;
  break;
 case 135:
  VAR_22 = VAR_7;
  break;
 default:
  return -VAR_3;
 }

 if (VAR_20->assoc_data)
  return -VAR_1;

 VAR_21 = FUNC_11(sizeof(*VAR_21) + VAR_18->auth_data_len +
       VAR_18->ie_len, VAR_4);
 if (!VAR_21)
  return -VAR_2;

 VAR_21->bss = VAR_18->bss;

 if (VAR_18->auth_data_len >= 4) {
  if (VAR_18->auth_type == 129) {
   __le16 *VAR_25 = (__le16 *) VAR_18->auth_data;

   VAR_21->sae_trans = FUNC_12(VAR_25[0]);
   VAR_21->sae_status = FUNC_12(VAR_25[1]);
  }
  FUNC_13(VAR_21->data, VAR_18->auth_data + 4,
         VAR_18->auth_data_len - 4);
  VAR_21->data_len += VAR_18->auth_data_len - 4;
 }






 VAR_24 = VAR_20->auth_data && VAR_18->bss == VAR_20->auth_data->bss;

 if (VAR_18->ie && VAR_18->ie_len) {
  FUNC_13(&VAR_21->data[VAR_21->data_len],
         VAR_18->ie, VAR_18->ie_len);
  VAR_21->data_len += VAR_18->ie_len;
 }

 if (VAR_18->key && VAR_18->key_len) {
  VAR_21->key_len = VAR_18->key_len;
  VAR_21->key_idx = VAR_18->key_idx;
  FUNC_13(VAR_21->key, VAR_18->key, VAR_18->key_len);
 }

 VAR_21->algorithm = VAR_22;



 if (VAR_20->auth_data) {
  if (VAR_24 && VAR_18->auth_type == 129) {
   VAR_21->peer_confirmed =
    VAR_20->auth_data->peer_confirmed;
  }
  FUNC_4(VAR_17, VAR_24);
 }


 VAR_20->auth_data = VAR_21;






 if (VAR_24 && VAR_18->auth_type == 129 &&
     VAR_21->peer_confirmed && VAR_21->sae_trans == 2)
  FUNC_5(VAR_17, VAR_18->bss->bssid);

 if (VAR_20->associated) {
  u8 VAR_26[VAR_5];

  FUNC_16(VAR_17,
      "disconnect from AP %pM for new auth to %pM\n",
      VAR_20->associated->bssid, VAR_18->bss->bssid);
  FUNC_8(VAR_17, VAR_6,
           VAR_15,
           0, VAR_26);

  FUNC_7(VAR_17, VAR_26,
         sizeof(VAR_26), 1,
         VAR_15);
 }

 FUNC_16(VAR_17, "authenticate with %pM\n", VAR_18->bss->bssid);

 VAR_23 = FUNC_6(VAR_17, VAR_18->bss, VAR_24, 0);
 if (VAR_23)
  goto err_clear;

 VAR_23 = FUNC_2(VAR_17);
 if (VAR_23) {
  FUNC_17(VAR_17, VAR_18->bss->bssid);
  goto err_clear;
 }


 FUNC_0(VAR_19->hw.wiphy, VAR_21->bss);
 return 0;

 err_clear:
 FUNC_1(VAR_20->bssid);
 FUNC_3(VAR_17, VAR_0);
 VAR_20->auth_data = ((void*)0);
 FUNC_14(&VAR_17->local->mtx);
 FUNC_9(VAR_17);
 FUNC_15(&VAR_17->local->mtx);
 FUNC_10(VAR_21);
 return VAR_23;
}
