
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
struct TYPE_2__ {scalar_t__ erp_next_seq_num; scalar_t__ pmkid; scalar_t__ pmk; scalar_t__ pmk_len; scalar_t__ kek; scalar_t__ kek_len; scalar_t__ update_erp_next_seq_num; } ;
struct cfg80211_connect_resp_params {scalar_t__ status; TYPE_1__ fils; scalar_t__ resp_ie; scalar_t__ resp_ie_len; scalar_t__ req_ie; scalar_t__ req_ie_len; int timeout_reason; scalar_t__ bssid; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_18 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct cfg80211_registered_device *VAR_19,
     struct net_device *VAR_20,
     struct cfg80211_connect_resp_params *VAR_21,
     gfp_t VAR_22)
{
 struct sk_buff *VAR_23;
 void *VAR_24;

 VAR_23 = FUNC_8(100 + VAR_21->req_ie_len + VAR_21->resp_ie_len +
   VAR_21->fils.kek_len + VAR_21->fils.pmk_len +
   (VAR_21->fils.pmkid ? VAR_15 : 0), VAR_22);
 if (!VAR_23)
  return;

 VAR_24 = FUNC_2(VAR_23, 0, 0, 0, VAR_13);
 if (!VAR_24) {
  FUNC_7(VAR_23);
  return;
 }

 if (FUNC_6(VAR_23, VAR_12, VAR_19->wiphy_idx) ||
     FUNC_6(VAR_23, VAR_3, VAR_20->ifindex) ||
     (VAR_21->bssid &&
      FUNC_3(VAR_23, VAR_4, VAR_0, VAR_21->bssid)) ||
     FUNC_5(VAR_23, VAR_9,
   VAR_21->status < 0 ? VAR_17 :
   VAR_21->status) ||
     (VAR_21->status < 0 &&
      (FUNC_4(VAR_23, VAR_10) ||
       FUNC_6(VAR_23, VAR_11,
     VAR_21->timeout_reason))) ||
     (VAR_21->req_ie &&
      FUNC_3(VAR_23, VAR_7, VAR_21->req_ie_len, VAR_21->req_ie)) ||
     (VAR_21->resp_ie &&
      FUNC_3(VAR_23, VAR_8, VAR_21->resp_ie_len,
       VAR_21->resp_ie)) ||
     (VAR_21->fils.update_erp_next_seq_num &&
      FUNC_5(VAR_23, VAR_1,
    VAR_21->fils.erp_next_seq_num)) ||
     (VAR_21->status == VAR_16 &&
      ((VAR_21->fils.kek &&
        FUNC_3(VAR_23, VAR_2, VAR_21->fils.kek_len,
         VAR_21->fils.kek)) ||
       (VAR_21->fils.pmk &&
        FUNC_3(VAR_23, VAR_5, VAR_21->fils.pmk_len, VAR_21->fils.pmk)) ||
       (VAR_21->fils.pmkid &&
        FUNC_3(VAR_23, VAR_6, VAR_15, VAR_21->fils.pmkid)))))
  goto nla_put_failure;

 FUNC_0(VAR_23, VAR_24);

 FUNC_1(&VAR_18, FUNC_9(&VAR_19->wiphy), VAR_23, 0,
    VAR_14, VAR_22);
 return;

 nla_put_failure:
 FUNC_7(VAR_23);
}
