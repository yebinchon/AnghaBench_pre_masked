
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;


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
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_10 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct cfg80211_registered_device *VAR_11,
         struct net_device *VAR_12, const u8 *VAR_13,
         const u8 *VAR_14, gfp_t VAR_15)
{
 struct sk_buff *VAR_16;
 struct nlattr *VAR_17;
 void *VAR_18;

 VAR_16 = FUNC_8(VAR_9, VAR_15);
 if (!VAR_16)
  return;

 VAR_18 = FUNC_2(VAR_16, 0, 0, 0, VAR_5);
 if (!VAR_18) {
  FUNC_7(VAR_16);
  return;
 }

 if (FUNC_6(VAR_16, VAR_4, VAR_11->wiphy_idx) ||
     FUNC_6(VAR_16, VAR_1, VAR_12->ifindex) ||
     FUNC_5(VAR_16, VAR_2, VAR_0, VAR_13))
  goto nla_put_failure;

 VAR_17 = FUNC_4(VAR_16, VAR_3);
 if (!VAR_17)
  goto nla_put_failure;

 if (FUNC_5(VAR_16, VAR_7,
      VAR_8, VAR_14))
  goto nla_put_failure;

 FUNC_3(VAR_16, VAR_17);

 FUNC_0(VAR_16, VAR_18);

 FUNC_1(&VAR_10, FUNC_9(&VAR_11->wiphy), VAR_16, 0,
    VAR_6, VAR_15);
 return;

 nla_put_failure:
 FUNC_7(VAR_16);
}
