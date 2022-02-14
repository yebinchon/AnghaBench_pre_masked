
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;
typedef enum nl80211_key_type { ____Placeholder_nl80211_key_type } nl80211_key_type ;


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
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct cfg80211_registered_device *VAR_11,
     struct net_device *VAR_12, const u8 *VAR_13,
     enum nl80211_key_type VAR_14, int VAR_15,
     const u8 *VAR_16, gfp_t VAR_17)
{
 struct sk_buff *VAR_18;
 void *VAR_19;

 VAR_18 = FUNC_7(VAR_9, VAR_17);
 if (!VAR_18)
  return;

 VAR_19 = FUNC_2(VAR_18, 0, 0, 0, VAR_7);
 if (!VAR_19) {
  FUNC_6(VAR_18);
  return;
 }

 if (FUNC_4(VAR_18, VAR_6, VAR_11->wiphy_idx) ||
     FUNC_4(VAR_18, VAR_1, VAR_12->ifindex) ||
     (VAR_13 && FUNC_3(VAR_18, VAR_5, VAR_0, VAR_13)) ||
     FUNC_4(VAR_18, VAR_4, VAR_14) ||
     (VAR_15 != -1 &&
      FUNC_5(VAR_18, VAR_2, VAR_15)) ||
     (VAR_16 && FUNC_3(VAR_18, VAR_3, 6, VAR_16)))
  goto nla_put_failure;

 FUNC_0(VAR_18, VAR_19);

 FUNC_1(&VAR_10, FUNC_8(&VAR_11->wiphy), VAR_18, 0,
    VAR_8, VAR_17);
 return;

 nla_put_failure:
 FUNC_6(VAR_18);
}
