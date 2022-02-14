
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {TYPE_1__* netdev; } ;
struct sk_buff {scalar_t__ cb; } ;
struct nlattr {int dummy; } ;
struct nl80211_vendor_cmd_info {int subcmd; int vendor_id; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
typedef int gfp_t ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
typedef enum nl80211_attrs { ____Placeholder_nl80211_attrs } nl80211_attrs ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (struct sk_buff*,int ,int ,int ,int) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (int,int ) ;
 int FUNC_6 (struct wireless_dev*) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct cfg80211_registered_device *VAR_6,
       struct wireless_dev *VAR_7, int VAR_8,
       u32 VAR_9, u32 VAR_10, enum nl80211_commands VAR_11,
       enum nl80211_attrs VAR_12,
       const struct nl80211_vendor_cmd_info *VAR_13,
       gfp_t VAR_14)
{
 struct sk_buff *VAR_15;
 void *VAR_16;
 struct nlattr *VAR_17;

 VAR_15 = FUNC_5(VAR_8 + 100, VAR_14);
 if (!VAR_15)
  return ((void*)0);

 VAR_16 = FUNC_1(VAR_15, VAR_9, VAR_10, 0, VAR_11);
 if (!VAR_16) {
  FUNC_0(VAR_15);
  return ((void*)0);
 }

 if (FUNC_3(VAR_15, VAR_5, VAR_6->wiphy_idx))
  goto nla_put_failure;

 if (VAR_13) {
  if (FUNC_3(VAR_15, VAR_2,
    VAR_13->vendor_id))
   goto nla_put_failure;
  if (FUNC_3(VAR_15, VAR_3,
    VAR_13->subcmd))
   goto nla_put_failure;
 }

 if (VAR_7) {
  if (FUNC_4(VAR_15, VAR_4,
          FUNC_6(VAR_7), VAR_1))
   goto nla_put_failure;
  if (VAR_7->netdev &&
      FUNC_3(VAR_15, VAR_0,
    VAR_7->netdev->ifindex))
   goto nla_put_failure;
 }

 VAR_17 = FUNC_2(VAR_15, VAR_12);
 if (!VAR_17)
  goto nla_put_failure;

 ((void **)VAR_15->cb)[0] = VAR_6;
 ((void **)VAR_15->cb)[1] = VAR_16;
 ((void **)VAR_15->cb)[2] = VAR_17;

 return VAR_15;

 nla_put_failure:
 FUNC_0(VAR_15);
 return ((void*)0);
}
