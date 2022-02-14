
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
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct cfg80211_registered_device *VAR_8,
        struct net_device *VAR_9, const u8 *VAR_10,
        gfp_t VAR_11)
{
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_6(VAR_6, VAR_11);
 if (!VAR_12)
  return;

 VAR_13 = FUNC_2(VAR_12, 0, 0, 0, VAR_4);
 if (!VAR_13) {
  FUNC_5(VAR_12);
  return;
 }

 if (FUNC_4(VAR_12, VAR_3, VAR_8->wiphy_idx) ||
     FUNC_4(VAR_12, VAR_1, VAR_9->ifindex) ||
     FUNC_3(VAR_12, VAR_2, VAR_0, VAR_10))
  goto nla_put_failure;

 FUNC_0(VAR_12, VAR_13);

 FUNC_1(&VAR_7, FUNC_7(&VAR_8->wiphy), VAR_12, 0,
    VAR_5, VAR_11);
 return;

 nla_put_failure:
 FUNC_5(VAR_12);
}
