
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct wireless_dev {struct net_device* netdev; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_9 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int,int ) ;
 int FUNC_9 (struct wireless_dev*,int ,int) ;
 int FUNC_10 (struct wireless_dev*) ;
 int FUNC_11 (int *) ;
 struct cfg80211_registered_device* FUNC_12 (struct wiphy*) ;

void FUNC_13(struct wireless_dev *VAR_10, u64 VAR_11,
        const u8 *VAR_12, size_t VAR_13, bool VAR_14, gfp_t VAR_15)
{
 struct wiphy *VAR_16 = VAR_10->wiphy;
 struct cfg80211_registered_device *VAR_17 = FUNC_12(VAR_16);
 struct net_device *VAR_18 = VAR_10->netdev;
 struct sk_buff *VAR_19;
 void *VAR_20;

 FUNC_9(VAR_10, VAR_11, VAR_14);

 VAR_19 = FUNC_8(100 + VAR_13, VAR_15);
 if (!VAR_19)
  return;

 VAR_20 = FUNC_2(VAR_19, 0, 0, 0, VAR_7);
 if (!VAR_20) {
  FUNC_7(VAR_19);
  return;
 }

 if (FUNC_5(VAR_19, VAR_6, VAR_17->wiphy_idx) ||
     (VAR_18 && FUNC_5(VAR_19, VAR_3,
       VAR_18->ifindex)) ||
     FUNC_6(VAR_19, VAR_5, FUNC_10(VAR_10),
         VAR_4) ||
     FUNC_3(VAR_19, VAR_2, VAR_13, VAR_12) ||
     FUNC_6(VAR_19, VAR_1, VAR_11,
         VAR_4) ||
     (VAR_14 && FUNC_4(VAR_19, VAR_0)))
  goto nla_put_failure;

 FUNC_0(VAR_19, VAR_20);

 FUNC_1(&VAR_9, FUNC_11(&VAR_17->wiphy), VAR_19, 0,
    VAR_8, VAR_15);
 return;

 nla_put_failure:
 FUNC_7(VAR_19);
}
