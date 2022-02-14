
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wireless_dev {int conn_owner_nlportid; int wiphy; } ;
struct sk_buff {int len; int protocol; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct ethhdr {int * h_source; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ethhdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (int ,struct sk_buff*,int ) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ,int ) ;
 struct nlattr* FUNC_12 (struct sk_buff*,int ,int ) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_16 (struct wireless_dev*) ;
 int FUNC_17 (int *) ;
 struct cfg80211_registered_device* FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_13,
         struct sk_buff *VAR_14,
         bool VAR_15, gfp_t VAR_16)
{
 struct wireless_dev *VAR_17 = VAR_13->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_18 = FUNC_18(VAR_17->wiphy);
 struct ethhdr *VAR_19 = FUNC_2(VAR_14);
 const u8 *VAR_20 = VAR_19->h_source;
 u16 VAR_21 = FUNC_1(VAR_14->protocol);
 struct sk_buff *VAR_22;
 void *VAR_23;
 struct nlattr *VAR_24;

 u32 VAR_25 = FUNC_0(VAR_17->conn_owner_nlportid);

 if (!VAR_25)
  return -VAR_1;

 VAR_22 = FUNC_14(100 + VAR_14->len, VAR_16);
 if (!VAR_22)
  return -VAR_2;

 VAR_23 = FUNC_5(VAR_22, 0, 0, 0, VAR_12);
 if (!VAR_23) {
  FUNC_13(VAR_22);
  return -VAR_0;
 }

 if (FUNC_10(VAR_22, VAR_11, VAR_18->wiphy_idx) ||
     FUNC_10(VAR_22, VAR_7, VAR_13->ifindex) ||
     FUNC_11(VAR_22, VAR_10, FUNC_16(VAR_17),
         VAR_9) ||
     FUNC_7(VAR_22, VAR_8, VAR_3, VAR_20) ||
     FUNC_9(VAR_22, VAR_4, VAR_21) ||
     (VAR_15 && FUNC_8(VAR_22,
      VAR_5)))
  goto nla_put_failure;

 VAR_24 = FUNC_12(VAR_22, VAR_6, VAR_14->len);
 if (!VAR_24)
  goto nla_put_failure;

 FUNC_15(VAR_14, 0, FUNC_6(VAR_24), VAR_14->len);
 FUNC_3(VAR_22, VAR_23);

 return FUNC_4(FUNC_17(&VAR_18->wiphy), VAR_22, VAR_25);

 nla_put_failure:
 FUNC_13(VAR_22);
 return -VAR_0;
}
