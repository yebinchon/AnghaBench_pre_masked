
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,struct cfg80211_registered_device*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5,
     struct cfg80211_registered_device *VAR_6,
     struct wireless_dev *VAR_7,
     u32 VAR_8, u32 VAR_9, int VAR_10,
     u32 VAR_11)
{
 void *VAR_12;

 VAR_12 = FUNC_3(VAR_5, VAR_8, VAR_9, VAR_10, VAR_11);
 if (!VAR_12)
  return -1;

 if (FUNC_4(VAR_5, VAR_4, VAR_6->wiphy_idx) ||
     (VAR_7->netdev && FUNC_4(VAR_5, VAR_1,
      VAR_7->netdev->ifindex)) ||
     FUNC_5(VAR_5, VAR_3, FUNC_6(VAR_7),
         VAR_2))
  goto nla_put_failure;


 FUNC_2(VAR_5, VAR_6);

 FUNC_1(VAR_5, VAR_12);
 return 0;

 nla_put_failure:
 FUNC_0(VAR_5, VAR_12);
 return -VAR_0;
}
