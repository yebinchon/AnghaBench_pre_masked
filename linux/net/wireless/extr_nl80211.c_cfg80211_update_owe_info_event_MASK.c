
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_update_owe_info {int ie; int ie_len; int peer; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_8 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wiphy*,struct net_device*,struct cfg80211_update_owe_info*) ;
 int FUNC_9 (int *) ;
 struct cfg80211_registered_device* FUNC_10 (struct wiphy*) ;

void FUNC_11(struct net_device *VAR_9,
        struct cfg80211_update_owe_info *VAR_10,
        gfp_t VAR_11)
{
 struct wiphy *VAR_12 = VAR_9->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_13 = FUNC_10(VAR_12);
 struct sk_buff *VAR_14;
 void *VAR_15;

 FUNC_8(VAR_12, VAR_9, VAR_10);

 VAR_14 = FUNC_7(VAR_7, VAR_11);
 if (!VAR_14)
  return;

 VAR_15 = FUNC_3(VAR_14, 0, 0, 0, VAR_5);
 if (!VAR_15)
  goto nla_put_failure;

 if (FUNC_5(VAR_14, VAR_4, VAR_13->wiphy_idx) ||
     FUNC_5(VAR_14, VAR_2, VAR_9->ifindex) ||
     FUNC_4(VAR_14, VAR_3, VAR_0, VAR_10->peer))
  goto nla_put_failure;

 if (!VAR_10->ie_len ||
     FUNC_4(VAR_14, VAR_1, VAR_10->ie_len, VAR_10->ie))
  goto nla_put_failure;

 FUNC_1(VAR_14, VAR_15);

 FUNC_2(&VAR_8, FUNC_9(&VAR_13->wiphy), VAR_14, 0,
    VAR_6, VAR_11);
 return;

nla_put_failure:
 FUNC_0(VAR_14, VAR_15);
 FUNC_6(VAR_14);
}
