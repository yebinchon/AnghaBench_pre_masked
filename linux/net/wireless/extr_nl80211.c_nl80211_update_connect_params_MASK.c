
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wireless_dev {int current_bss; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; int wiphy; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wireless_dev* ieee80211_ptr; int wiphy; TYPE_1__* ops; } ;
struct cfg80211_connect_params {scalar_t__ auth_type; void* fils_erp_rrk_len; void* fils_erp_rrk; int fils_erp_next_seq_num; void* fils_erp_realm_len; void* fils_erp_realm; void* fils_erp_username_len; void* fils_erp_username; void* ie_len; void* ie; } ;
struct TYPE_2__ {int update_connect_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct net_device*,scalar_t__,int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,struct net_device*,struct cfg80211_connect_params*,scalar_t__) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_15,
      struct genl_info *VAR_16)
{
 struct cfg80211_connect_params VAR_17 = {};
 struct cfg80211_registered_device *VAR_18 = VAR_16->user_ptr[0];
 struct net_device *VAR_19 = VAR_16->user_ptr[1];
 struct wireless_dev *VAR_20 = VAR_19->ieee80211_ptr;
 bool VAR_21;
 u32 VAR_22;
 u32 VAR_23 = 0;
 int VAR_24;

 if (!VAR_18->ops->update_connect_params)
  return -VAR_2;

 if (VAR_16->attrs[VAR_8]) {
  VAR_17.ie = FUNC_1(VAR_16->attrs[VAR_8]);
  VAR_17.ie_len = FUNC_4(VAR_16->attrs[VAR_8]);
  VAR_23 |= VAR_12;
 }

 VAR_21 = FUNC_8(&VAR_18->wiphy,
        VAR_11);






 if (VAR_21 &&
     VAR_16->attrs[VAR_7] &&
     VAR_16->attrs[VAR_5] &&
     VAR_16->attrs[VAR_4] &&
     VAR_16->attrs[VAR_6]) {
  VAR_17.fils_erp_username =
   FUNC_1(VAR_16->attrs[VAR_7]);
  VAR_17.fils_erp_username_len =
   FUNC_4(VAR_16->attrs[VAR_7]);
  VAR_17.fils_erp_realm =
   FUNC_1(VAR_16->attrs[VAR_5]);
  VAR_17.fils_erp_realm_len =
   FUNC_4(VAR_16->attrs[VAR_5]);
  VAR_17.fils_erp_next_seq_num =
   FUNC_2(
      VAR_16->attrs[VAR_4]);
  VAR_17.fils_erp_rrk =
   FUNC_1(VAR_16->attrs[VAR_6]);
  VAR_17.fils_erp_rrk_len =
   FUNC_4(VAR_16->attrs[VAR_6]);
  VAR_23 |= VAR_14;
 } else if (VAR_16->attrs[VAR_7] ||
     VAR_16->attrs[VAR_5] ||
     VAR_16->attrs[VAR_4] ||
     VAR_16->attrs[VAR_6]) {
  return -VAR_0;
 }

 if (VAR_16->attrs[VAR_3]) {
  VAR_22 = FUNC_3(VAR_16->attrs[VAR_3]);
  if (!FUNC_0(VAR_18, VAR_22,
          VAR_10))
   return -VAR_0;

  if (VAR_22 == VAR_9 &&
      VAR_21 && !(VAR_23 & VAR_14))
   return -VAR_0;

  VAR_17.auth_type = VAR_22;
  VAR_23 |= VAR_13;
 }

 FUNC_6(VAR_19->ieee80211_ptr);
 if (!VAR_20->current_bss)
  VAR_24 = -VAR_1;
 else
  VAR_24 = FUNC_5(VAR_18, VAR_19, &VAR_17, VAR_23);
 FUNC_7(VAR_19->ieee80211_ptr);

 return VAR_24;
}
