
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* netdev; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_8 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (struct wiphy*) ;
 struct cfg80211_registered_device* FUNC_9 (struct wiphy*) ;

void FUNC_10(struct wireless_dev *VAR_9)
{
 struct wiphy *VAR_10 = VAR_9->wiphy;
 struct cfg80211_registered_device *VAR_11 = FUNC_9(VAR_10);
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_6(VAR_7, VAR_0);
 if (!VAR_12)
  return;

 VAR_13 = FUNC_2(VAR_12, 0, 0, 0, VAR_5);
 if (!VAR_13)
  goto out;

 if (FUNC_3(VAR_12, VAR_4, VAR_11->wiphy_idx) ||
     FUNC_3(VAR_12, VAR_1, VAR_9->netdev->ifindex) ||
     FUNC_4(VAR_12, VAR_3, FUNC_7(VAR_9),
         VAR_2))
  goto out;

 FUNC_0(VAR_12, VAR_13);

 FUNC_1(&VAR_8, FUNC_8(VAR_10), VAR_12, 0,
    VAR_6, VAR_0);
 return;
 out:
 FUNC_5(VAR_12);
}
