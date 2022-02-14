
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wireless_dev {int owner_nlportid; TYPE_1__* netdev; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
typedef enum nl80211_nan_func_term_reason { ____Placeholder_nl80211_nan_func_term_reason } nl80211_nan_func_term_reason ;
struct TYPE_2__ {int ifindex; } ;


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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (int ,struct sk_buff*,int ) ;
 int VAR_11 ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct wireless_dev*) ;
 int FUNC_13 (int *) ;
 struct cfg80211_registered_device* FUNC_14 (struct wiphy*) ;

void FUNC_15(struct wireless_dev *VAR_12,
      u8 VAR_13,
      enum nl80211_nan_func_term_reason VAR_14,
      u64 VAR_15, gfp_t VAR_16)
{
 struct wiphy *VAR_17 = VAR_12->wiphy;
 struct cfg80211_registered_device *VAR_18 = FUNC_14(VAR_17);
 struct sk_buff *VAR_19;
 struct nlattr *VAR_20;
 void *VAR_21;

 if (FUNC_0(!VAR_13))
  return;

 VAR_19 = FUNC_11(VAR_10, VAR_16);
 if (!VAR_19)
  return;

 VAR_21 = FUNC_4(VAR_19, 0, 0, 0, VAR_6);
 if (!VAR_21) {
  FUNC_10(VAR_19);
  return;
 }

 if (FUNC_7(VAR_19, VAR_5, VAR_18->wiphy_idx) ||
     (VAR_12->netdev && FUNC_7(VAR_19, VAR_1,
      VAR_12->netdev->ifindex)) ||
     FUNC_8(VAR_19, VAR_4, FUNC_12(VAR_12),
         VAR_3))
  goto nla_put_failure;

 if (FUNC_8(VAR_19, VAR_0, VAR_15,
         VAR_3))
  goto nla_put_failure;

 VAR_20 = FUNC_6(VAR_19, VAR_2);
 if (!VAR_20)
  goto nla_put_failure;

 if (FUNC_9(VAR_19, VAR_8, VAR_13) ||
     FUNC_9(VAR_19, VAR_9, VAR_14))
  goto nla_put_failure;

 FUNC_5(VAR_19, VAR_20);
 FUNC_1(VAR_19, VAR_21);

 if (!VAR_12->owner_nlportid)
  FUNC_2(&VAR_11, FUNC_13(&VAR_18->wiphy),
     VAR_19, 0, VAR_7, VAR_16);
 else
  FUNC_3(FUNC_13(&VAR_18->wiphy), VAR_19,
    VAR_12->owner_nlportid);

 return;

nla_put_failure:
 FUNC_10(VAR_19);
}
