
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int wiphy; } ;
struct sta_opmode_info {int changed; int rx_nss; int bw; int smps_mode; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_13 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 struct cfg80211_registered_device* FUNC_10 (int ) ;

void FUNC_11(struct net_device *VAR_14, const u8 *VAR_15,
           struct sta_opmode_info *VAR_16,
           gfp_t VAR_17)
{
 struct sk_buff *VAR_18;
 struct wireless_dev *VAR_19 = VAR_14->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_20 = FUNC_10(VAR_19->wiphy);
 void *VAR_21;

 if (FUNC_0(!VAR_15))
  return;

 VAR_18 = FUNC_8(VAR_9, VAR_17);
 if (!VAR_18)
  return;

 VAR_21 = FUNC_3(VAR_18, 0, 0, 0, VAR_7);
 if (!VAR_21) {
  FUNC_7(VAR_18);
  return;
 }

 if (FUNC_5(VAR_18, VAR_6, VAR_20->wiphy_idx))
  goto nla_put_failure;

 if (FUNC_5(VAR_18, VAR_2, VAR_14->ifindex))
  goto nla_put_failure;

 if (FUNC_4(VAR_18, VAR_3, VAR_0, VAR_15))
  goto nla_put_failure;

 if ((VAR_16->changed & VAR_12) &&
     FUNC_6(VAR_18, VAR_5, VAR_16->smps_mode))
  goto nla_put_failure;

 if ((VAR_16->changed & VAR_10) &&
     FUNC_6(VAR_18, VAR_1, VAR_16->bw))
  goto nla_put_failure;

 if ((VAR_16->changed & VAR_11) &&
     FUNC_6(VAR_18, VAR_4, VAR_16->rx_nss))
  goto nla_put_failure;

 FUNC_1(VAR_18, VAR_21);

 FUNC_2(&VAR_13, FUNC_9(&VAR_20->wiphy), VAR_18, 0,
    VAR_8, VAR_17);

 return;

nla_put_failure:
 FUNC_7(VAR_18);
}
