
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
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
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct cfg80211_registered_device *VAR_11,
          struct net_device *VAR_12, int VAR_13,
          const u8 *VAR_14, bool VAR_15, gfp_t VAR_16)
{
 struct sk_buff *VAR_17;
 struct nlattr *VAR_18;
 void *VAR_19;

 VAR_17 = FUNC_9(VAR_9, VAR_16);
 if (!VAR_17)
  return;

 VAR_19 = FUNC_2(VAR_17, 0, 0, 0, VAR_4);
 if (!VAR_19) {
  FUNC_8(VAR_17);
  return;
 }

 if (FUNC_7(VAR_17, VAR_3, VAR_11->wiphy_idx) ||
     FUNC_7(VAR_17, VAR_1, VAR_12->ifindex))
  goto nla_put_failure;

 VAR_18 = FUNC_4(VAR_17, VAR_2);
 if (!VAR_18)
  goto nla_put_failure;

 if (FUNC_7(VAR_17, VAR_7, VAR_13) ||
     FUNC_5(VAR_17, VAR_6, VAR_0, VAR_14) ||
     (VAR_15 &&
      FUNC_6(VAR_17, VAR_8)))
  goto nla_put_failure;

 FUNC_3(VAR_17, VAR_18);

 FUNC_0(VAR_17, VAR_19);

 FUNC_1(&VAR_10, FUNC_10(&VAR_11->wiphy), VAR_17, 0,
    VAR_5, VAR_16);
 return;

 nla_put_failure:
 FUNC_8(VAR_17);
}
