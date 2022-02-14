
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
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_7 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct cfg80211_registered_device *VAR_8,
        struct net_device *VAR_9,
        const u8 *VAR_10, size_t VAR_11,
        enum nl80211_commands VAR_12, gfp_t VAR_13,
        int VAR_14, const u8 *VAR_15,
        size_t VAR_16)
{
 struct sk_buff *VAR_17;
 void *VAR_18;

 VAR_17 = FUNC_9(100 + VAR_11 + VAR_16, VAR_13);
 if (!VAR_17)
  return;

 VAR_18 = FUNC_2(VAR_17, 0, 0, 0, VAR_12);
 if (!VAR_18) {
  FUNC_8(VAR_17);
  return;
 }

 if (FUNC_6(VAR_17, VAR_4, VAR_8->wiphy_idx) ||
     FUNC_6(VAR_17, VAR_1, VAR_9->ifindex) ||
     FUNC_5(VAR_17, VAR_0, VAR_11, VAR_10) ||
     (VAR_15 &&
      FUNC_5(VAR_17, VAR_2, VAR_16, VAR_15)))
  goto nla_put_failure;

 if (VAR_14 >= 0) {
  struct nlattr *VAR_19 =
   FUNC_4(VAR_17, VAR_3);
  if (!VAR_19)
   goto nla_put_failure;

  if (FUNC_7(VAR_17, VAR_6,
          VAR_14))
   goto nla_put_failure;

  FUNC_3(VAR_17, VAR_19);
 }

 FUNC_0(VAR_17, VAR_18);

 FUNC_1(&VAR_7, FUNC_10(&VAR_8->wiphy), VAR_17, 0,
    VAR_5, VAR_13);
 return;

 nla_put_failure:
 FUNC_8(VAR_17);
}
