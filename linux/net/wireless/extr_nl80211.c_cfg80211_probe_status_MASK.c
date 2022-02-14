
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct wireless_dev {int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int s32 ;
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
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_11 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct net_device*,int const*,int ,int) ;
 int FUNC_11 (int *) ;
 struct cfg80211_registered_device* FUNC_12 (int ) ;

void FUNC_13(struct net_device *VAR_12, const u8 *VAR_13,
      u64 VAR_14, bool VAR_15, s32 VAR_16,
      bool VAR_17, gfp_t VAR_18)
{
 struct wireless_dev *VAR_19 = VAR_12->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_20 = FUNC_12(VAR_19->wiphy);
 struct sk_buff *VAR_21;
 void *VAR_22;

 FUNC_10(VAR_12, VAR_13, VAR_14, VAR_15);

 VAR_21 = FUNC_9(VAR_10, VAR_18);

 if (!VAR_21)
  return;

 VAR_22 = FUNC_2(VAR_21, 0, 0, 0, VAR_8);
 if (!VAR_22) {
  FUNC_8(VAR_21);
  return;
 }

 if (FUNC_6(VAR_21, VAR_7, VAR_20->wiphy_idx) ||
     FUNC_6(VAR_21, VAR_4, VAR_12->ifindex) ||
     FUNC_3(VAR_21, VAR_5, VAR_0, VAR_13) ||
     FUNC_7(VAR_21, VAR_3, VAR_14,
         VAR_6) ||
     (VAR_15 && FUNC_4(VAR_21, VAR_1)) ||
     (VAR_17 && FUNC_5(VAR_21, VAR_2,
      VAR_16)))
  goto nla_put_failure;

 FUNC_0(VAR_21, VAR_22);

 FUNC_1(&VAR_11, FUNC_11(&VAR_20->wiphy), VAR_21, 0,
    VAR_9, VAR_18);
 return;

 nla_put_failure:
 FUNC_8(VAR_21);
}
