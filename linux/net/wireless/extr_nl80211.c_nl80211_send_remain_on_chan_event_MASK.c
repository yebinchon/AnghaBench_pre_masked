
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_channel {unsigned int center_freq; } ;
struct cfg80211_registered_device {unsigned int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;
struct TYPE_2__ {unsigned int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_12 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
 int VAR_13, struct cfg80211_registered_device *VAR_14,
 struct wireless_dev *VAR_15, u64 VAR_16,
 struct ieee80211_channel *VAR_17,
 unsigned int VAR_18, gfp_t VAR_19)
{
 struct sk_buff *VAR_20;
 void *VAR_21;

 VAR_20 = FUNC_6(VAR_11, VAR_19);
 if (!VAR_20)
  return;

 VAR_21 = FUNC_2(VAR_20, 0, 0, 0, VAR_13);
 if (!VAR_21) {
  FUNC_5(VAR_20);
  return;
 }

 if (FUNC_3(VAR_20, VAR_5, VAR_14->wiphy_idx) ||
     (VAR_15->netdev && FUNC_3(VAR_20, VAR_2,
      VAR_15->netdev->ifindex)) ||
     FUNC_4(VAR_20, VAR_4, FUNC_7(VAR_15),
         VAR_3) ||
     FUNC_3(VAR_20, VAR_7, VAR_17->center_freq) ||
     FUNC_3(VAR_20, VAR_6,
   VAR_8) ||
     FUNC_4(VAR_20, VAR_0, VAR_16,
         VAR_3))
  goto nla_put_failure;

 if (VAR_13 == VAR_9 &&
     FUNC_3(VAR_20, VAR_1, VAR_18))
  goto nla_put_failure;

 FUNC_0(VAR_20, VAR_21);

 FUNC_1(&VAR_12, FUNC_8(&VAR_14->wiphy), VAR_20, 0,
    VAR_10, VAR_19);
 return;

 nla_put_failure:
 FUNC_5(VAR_20);
}
