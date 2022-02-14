
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wireless_dev {scalar_t__ iftype; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_9 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__,scalar_t__ const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct net_device*,scalar_t__ const*) ;
 int FUNC_9 (int *) ;
 struct cfg80211_registered_device* FUNC_10 (int ) ;

void FUNC_11(struct net_device *VAR_10, const u8 *VAR_11,
     const u8 *VAR_12, u8 VAR_13,
     int VAR_14, gfp_t VAR_15)
{
 struct wireless_dev *VAR_16 = VAR_10->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_17 = FUNC_10(VAR_16->wiphy);
 struct sk_buff *VAR_18;
 void *VAR_19;

 if (FUNC_0(VAR_16->iftype != VAR_7))
  return;

 FUNC_8(VAR_10, VAR_11);

 VAR_18 = FUNC_7(100 + VAR_13, VAR_15);
 if (!VAR_18)
  return;

 VAR_19 = FUNC_3(VAR_18, 0, 0, 0, VAR_6);
 if (!VAR_19) {
  FUNC_6(VAR_18);
  return;
 }

 if (FUNC_5(VAR_18, VAR_5, VAR_17->wiphy_idx) ||
     FUNC_5(VAR_18, VAR_2, VAR_10->ifindex) ||
     FUNC_4(VAR_18, VAR_3, VAR_0, VAR_11) ||
     (VAR_13 && VAR_12 &&
      FUNC_4(VAR_18, VAR_1, VAR_13, VAR_12)) ||
     (VAR_14 &&
      FUNC_5(VAR_18, VAR_4, VAR_14)))
  goto nla_put_failure;

 FUNC_1(VAR_18, VAR_19);

 FUNC_2(&VAR_9, FUNC_9(&VAR_17->wiphy), VAR_18, 0,
    VAR_8, VAR_15);
 return;

 nla_put_failure:
 FUNC_6(VAR_18);
}
