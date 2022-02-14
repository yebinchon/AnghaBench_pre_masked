
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wireless_dev {struct net_device* netdev; } ;
struct sk_buff {int dummy; } ;
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
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int ,struct sk_buff*,int) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int,int ) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct cfg80211_registered_device *VAR_11,
        struct wireless_dev *VAR_12, u32 VAR_13,
        int VAR_14, int VAR_15,
        const u8 *VAR_16, size_t VAR_17, u32 VAR_18, gfp_t VAR_19)
{
 struct net_device *VAR_20 = VAR_12->netdev;
 struct sk_buff *VAR_21;
 void *VAR_22;

 VAR_21 = FUNC_7(100 + VAR_17, VAR_19);
 if (!VAR_21)
  return -VAR_1;

 VAR_22 = FUNC_2(VAR_21, 0, 0, 0, VAR_10);
 if (!VAR_22) {
  FUNC_6(VAR_21);
  return -VAR_1;
 }

 if (FUNC_4(VAR_21, VAR_8, VAR_11->wiphy_idx) ||
     (VAR_20 && FUNC_4(VAR_21, VAR_3,
     VAR_20->ifindex)) ||
     FUNC_5(VAR_21, VAR_7, FUNC_8(VAR_12),
         VAR_4) ||
     FUNC_4(VAR_21, VAR_9, VAR_14) ||
     (VAR_15 &&
      FUNC_4(VAR_21, VAR_6, VAR_15)) ||
     FUNC_3(VAR_21, VAR_2, VAR_17, VAR_16) ||
     (VAR_18 &&
      FUNC_4(VAR_21, VAR_5, VAR_18)))
  goto nla_put_failure;

 FUNC_0(VAR_21, VAR_22);

 return FUNC_1(FUNC_9(&VAR_11->wiphy), VAR_21, VAR_13);

 nla_put_failure:
 FUNC_6(VAR_21);
 return -VAR_0;
}
