
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wireless_dev {int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
typedef enum nl80211_tdls_operation { ____Placeholder_nl80211_tdls_operation } nl80211_tdls_operation ;


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
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct net_device*,int const*,int,int ) ;
 int FUNC_10 (int *) ;
 struct cfg80211_registered_device* FUNC_11 (int ) ;

void FUNC_12(struct net_device *VAR_10, const u8 *VAR_11,
    enum nl80211_tdls_operation VAR_12,
    u16 VAR_13, gfp_t VAR_14)
{
 struct wireless_dev *VAR_15 = VAR_10->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_16 = FUNC_11(VAR_15->wiphy);
 struct sk_buff *VAR_17;
 void *VAR_18;

 FUNC_9(VAR_15->wiphy, VAR_10, VAR_11, VAR_12,
      VAR_13);

 VAR_17 = FUNC_8(VAR_8, VAR_14);
 if (!VAR_17)
  return;

 VAR_18 = FUNC_2(VAR_17, 0, 0, 0, VAR_6);
 if (!VAR_18) {
  FUNC_7(VAR_17);
  return;
 }

 if (FUNC_5(VAR_17, VAR_5, VAR_16->wiphy_idx) ||
     FUNC_5(VAR_17, VAR_1, VAR_10->ifindex) ||
     FUNC_6(VAR_17, VAR_4, VAR_12) ||
     FUNC_3(VAR_17, VAR_2, VAR_0, VAR_11) ||
     (VAR_13 > 0 &&
      FUNC_4(VAR_17, VAR_3, VAR_13)))
  goto nla_put_failure;

 FUNC_0(VAR_17, VAR_18);

 FUNC_1(&VAR_9, FUNC_10(&VAR_16->wiphy), VAR_17, 0,
    VAR_7, VAR_14);
 return;

 nla_put_failure:
 FUNC_7(VAR_17);
}
