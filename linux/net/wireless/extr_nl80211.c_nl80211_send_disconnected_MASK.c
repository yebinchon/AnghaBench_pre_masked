
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_8 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct cfg80211_registered_device *VAR_9,
          struct net_device *VAR_10, u16 VAR_11,
          const u8 *VAR_12, size_t VAR_13, bool VAR_14)
{
 struct sk_buff *VAR_15;
 void *VAR_16;

 VAR_15 = FUNC_8(100 + VAR_13, VAR_0);
 if (!VAR_15)
  return;

 VAR_16 = FUNC_2(VAR_15, 0, 0, 0, VAR_6);
 if (!VAR_16) {
  FUNC_7(VAR_15);
  return;
 }

 if (FUNC_6(VAR_15, VAR_5, VAR_9->wiphy_idx) ||
     FUNC_6(VAR_15, VAR_3, VAR_10->ifindex) ||
     (VAR_11 &&
      FUNC_5(VAR_15, VAR_4, VAR_11)) ||
     (VAR_14 &&
      FUNC_4(VAR_15, VAR_1)) ||
     (VAR_12 && FUNC_3(VAR_15, VAR_2, VAR_13, VAR_12)))
  goto nla_put_failure;

 FUNC_0(VAR_15, VAR_16);

 FUNC_1(&VAR_8, FUNC_9(&VAR_9->wiphy), VAR_15, 0,
    VAR_7, VAR_0);
 return;

 nla_put_failure:
 FUNC_7(VAR_15);
}
