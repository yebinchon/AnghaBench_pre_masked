
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef int gfp_t ;
typedef enum nl80211_connect_failed_reason { ____Placeholder_nl80211_connect_failed_reason } nl80211_connect_failed_reason ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


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
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 struct cfg80211_registered_device* FUNC_8 (struct wiphy*) ;

void FUNC_9(struct net_device *VAR_8, const u8 *VAR_9,
     enum nl80211_connect_failed_reason VAR_10,
     gfp_t VAR_11)
{
 struct wiphy *VAR_12 = VAR_8->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_13 = FUNC_8(VAR_12);
 struct sk_buff *VAR_14;
 void *VAR_15;

 VAR_14 = FUNC_6(VAR_6, VAR_11);
 if (!VAR_14)
  return;

 VAR_15 = FUNC_2(VAR_14, 0, 0, 0, VAR_4);
 if (!VAR_15) {
  FUNC_5(VAR_14);
  return;
 }

 if (FUNC_4(VAR_14, VAR_2, VAR_8->ifindex) ||
     FUNC_3(VAR_14, VAR_3, VAR_0, VAR_9) ||
     FUNC_4(VAR_14, VAR_1, VAR_10))
  goto nla_put_failure;

 FUNC_0(VAR_14, VAR_15);

 FUNC_1(&VAR_7, FUNC_7(&VAR_13->wiphy), VAR_14, 0,
    VAR_5, VAR_11);
 return;

 nla_put_failure:
 FUNC_5(VAR_14);
}
