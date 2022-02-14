
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wireless_dev {int ap_unexpected_nlportid; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct cfg80211_registered_device* FUNC_9 (int ) ;

__attribute__((used)) static bool FUNC_10(struct net_device *VAR_4, u8 VAR_5,
           const u8 *VAR_6, gfp_t VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_9(VAR_8->wiphy);
 struct sk_buff *VAR_10;
 void *VAR_11;
 u32 VAR_12 = FUNC_0(VAR_8->ap_unexpected_nlportid);

 if (!VAR_12)
  return 0;

 VAR_10 = FUNC_7(100, VAR_7);
 if (!VAR_10)
  return 1;

 VAR_11 = FUNC_3(VAR_10, 0, 0, 0, VAR_5);
 if (!VAR_11) {
  FUNC_6(VAR_10);
  return 1;
 }

 if (FUNC_5(VAR_10, VAR_3, VAR_9->wiphy_idx) ||
     FUNC_5(VAR_10, VAR_1, VAR_4->ifindex) ||
     FUNC_4(VAR_10, VAR_2, VAR_0, VAR_6))
  goto nla_put_failure;

 FUNC_1(VAR_10, VAR_11);
 FUNC_2(FUNC_8(&VAR_9->wiphy), VAR_10, VAR_12);
 return 1;

 nla_put_failure:
 FUNC_6(VAR_10);
 return 1;
}
