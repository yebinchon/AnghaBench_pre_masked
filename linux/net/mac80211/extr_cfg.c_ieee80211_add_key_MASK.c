
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct sta_info {struct ieee80211_cipher_scheme const* cipher_scheme; } ;
struct net_device {int dummy; } ;
struct key_params {scalar_t__ mode; int cipher; int seq; int seq_len; int key; int key_len; } ;
struct TYPE_8__ {int security; } ;
struct TYPE_7__ {int mfp; } ;
struct TYPE_9__ {TYPE_3__ mesh; TYPE_2__ mgd; } ;
struct TYPE_6__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;
struct TYPE_10__ {int flags; } ;
struct ieee80211_key {TYPE_5__ conf; } ;
struct ieee80211_cipher_scheme {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ieee80211_key*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 int FUNC_2 (struct ieee80211_key*) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ieee80211_cipher_scheme* FUNC_4 (struct ieee80211_local*,int,int) ;
 struct ieee80211_key* FUNC_5 (int,int ,int ,int ,int ,int ,struct ieee80211_cipher_scheme const*) ;
 int FUNC_6 (struct ieee80211_key*) ;
 int FUNC_7 (struct ieee80211_key*,struct ieee80211_sub_if_data*,struct sta_info*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,int const*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct sta_info* FUNC_12 (struct ieee80211_sub_if_data*,int const*) ;
 scalar_t__ FUNC_13 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_14(struct wiphy *VAR_13, struct net_device *VAR_14,
        u8 VAR_15, bool VAR_16, const u8 *VAR_17,
        struct key_params *VAR_18)
{
 struct ieee80211_sub_if_data *VAR_19 = FUNC_0(VAR_14);
 struct ieee80211_local *VAR_20 = VAR_19->local;
 struct sta_info *VAR_21 = ((void*)0);
 const struct ieee80211_cipher_scheme *VAR_22 = ((void*)0);
 struct ieee80211_key *VAR_23;
 int VAR_24;

 if (!FUNC_8(VAR_19))
  return -VAR_1;

 if (VAR_16 && VAR_18->mode == VAR_9)
  return FUNC_9(VAR_19, VAR_17, VAR_15);


 switch (VAR_18->cipher) {
 case 128:
 case 130:
 case 129:
  if (FUNC_3(VAR_12))
   return -VAR_0;
 case 134:
 case 133:
 case 138:
 case 137:
 case 136:
 case 135:
 case 132:
 case 131:
  break;
 default:
  VAR_22 = FUNC_4(VAR_20, VAR_18->cipher, VAR_19->vif.type);
  break;
 }

 VAR_23 = FUNC_5(VAR_18->cipher, VAR_15, VAR_18->key_len,
      VAR_18->key, VAR_18->seq_len, VAR_18->seq,
      VAR_22);
 if (FUNC_1(VAR_23))
  return FUNC_2(VAR_23);

 if (VAR_16)
  VAR_23->conf.flags |= VAR_4;

 if (VAR_18->mode == VAR_8)
  VAR_23->conf.flags |= VAR_3;

 FUNC_10(&VAR_20->sta_mtx);

 if (VAR_17) {
  VAR_21 = FUNC_12(VAR_19, VAR_17);
  if (!VAR_21 || !FUNC_13(VAR_21, VAR_10)) {
   FUNC_6(VAR_23);
   VAR_24 = -VAR_2;
   goto out_unlock;
  }
 }

 switch (VAR_19->vif.type) {
 case 142:
  if (VAR_19->u.mgd.mfp != VAR_7)
   VAR_23->conf.flags |= VAR_5;
  break;
 case 151:
 case 150:

  if (VAR_21 && FUNC_13(VAR_21, VAR_11))
   VAR_23->conf.flags |= VAR_5;
  break;
 case 152:

  break;
 case 149:





 case 140:
 case 148:
 case 144:
 case 147:
 case 141:
 case 139:
 case 145:
 case 143:
 case 146:

  FUNC_3(1);
  break;
 }

 if (VAR_21)
  VAR_21->cipher_scheme = VAR_22;

 VAR_24 = FUNC_7(VAR_23, VAR_19, VAR_21);

 out_unlock:
 FUNC_11(&VAR_20->sta_mtx);

 return VAR_24;
}
