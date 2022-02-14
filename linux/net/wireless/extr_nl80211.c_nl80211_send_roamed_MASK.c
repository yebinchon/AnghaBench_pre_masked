
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_4__ {int const* pmkid; int const* pmk; scalar_t__ pmk_len; int const* kek; scalar_t__ kek_len; int erp_next_seq_num; scalar_t__ update_erp_next_seq_num; } ;
struct cfg80211_roam_info {TYPE_2__ fils; int const* resp_ie; scalar_t__ resp_ie_len; int const* req_ie; scalar_t__ req_ie_len; int * bssid; TYPE_1__* bss; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
struct TYPE_3__ {int * bssid; } ;


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
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_13 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct cfg80211_registered_device *VAR_14,
    struct net_device *VAR_15,
    struct cfg80211_roam_info *VAR_16, gfp_t VAR_17)
{
 struct sk_buff *VAR_18;
 void *VAR_19;
 const u8 *VAR_20 = VAR_16->bss ? VAR_16->bss->bssid : VAR_16->bssid;

 VAR_18 = FUNC_7(100 + VAR_16->req_ie_len + VAR_16->resp_ie_len +
   VAR_16->fils.kek_len + VAR_16->fils.pmk_len +
   (VAR_16->fils.pmkid ? VAR_12 : 0), VAR_17);
 if (!VAR_18)
  return;

 VAR_19 = FUNC_2(VAR_18, 0, 0, 0, VAR_10);
 if (!VAR_19) {
  FUNC_6(VAR_18);
  return;
 }

 if (FUNC_5(VAR_18, VAR_9, VAR_14->wiphy_idx) ||
     FUNC_5(VAR_18, VAR_3, VAR_15->ifindex) ||
     FUNC_3(VAR_18, VAR_4, VAR_0, VAR_20) ||
     (VAR_16->req_ie &&
      FUNC_3(VAR_18, VAR_7, VAR_16->req_ie_len,
       VAR_16->req_ie)) ||
     (VAR_16->resp_ie &&
      FUNC_3(VAR_18, VAR_8, VAR_16->resp_ie_len,
       VAR_16->resp_ie)) ||
     (VAR_16->fils.update_erp_next_seq_num &&
      FUNC_4(VAR_18, VAR_1,
    VAR_16->fils.erp_next_seq_num)) ||
     (VAR_16->fils.kek &&
      FUNC_3(VAR_18, VAR_2, VAR_16->fils.kek_len,
       VAR_16->fils.kek)) ||
     (VAR_16->fils.pmk &&
      FUNC_3(VAR_18, VAR_5, VAR_16->fils.pmk_len, VAR_16->fils.pmk)) ||
     (VAR_16->fils.pmkid &&
      FUNC_3(VAR_18, VAR_6, VAR_12, VAR_16->fils.pmkid)))
  goto nla_put_failure;

 FUNC_0(VAR_18, VAR_19);

 FUNC_1(&VAR_13, FUNC_8(&VAR_14->wiphy), VAR_18, 0,
    VAR_11, VAR_17);
 return;

 nla_put_failure:
 FUNC_6(VAR_18);
}
