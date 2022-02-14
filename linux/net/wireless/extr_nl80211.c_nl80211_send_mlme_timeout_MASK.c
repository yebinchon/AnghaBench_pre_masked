
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
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
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_7 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct cfg80211_registered_device *VAR_8,
          struct net_device *VAR_9, int VAR_10,
          const u8 *VAR_11, gfp_t VAR_12)
{
 struct sk_buff *VAR_13;
 void *VAR_14;

 VAR_13 = FUNC_7(VAR_6, VAR_12);
 if (!VAR_13)
  return;

 VAR_14 = FUNC_2(VAR_13, 0, 0, 0, VAR_10);
 if (!VAR_14) {
  FUNC_6(VAR_13);
  return;
 }

 if (FUNC_5(VAR_13, VAR_4, VAR_8->wiphy_idx) ||
     FUNC_5(VAR_13, VAR_1, VAR_9->ifindex) ||
     FUNC_4(VAR_13, VAR_3) ||
     FUNC_3(VAR_13, VAR_2, VAR_0, VAR_11))
  goto nla_put_failure;

 FUNC_0(VAR_13, VAR_14);

 FUNC_1(&VAR_7, FUNC_8(&VAR_8->wiphy), VAR_13, 0,
    VAR_5, VAR_12);
 return;

 nla_put_failure:
 FUNC_6(VAR_13);
}
