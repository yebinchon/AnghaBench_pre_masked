
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct net_device {int wiphy; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,int const*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct net_device *VAR_9 = VAR_7->user_ptr[1];
 struct wireless_dev *VAR_10 = VAR_9->ieee80211_ptr;
 const u8 *VAR_11;
 int VAR_12;

 if (VAR_10->iftype != VAR_5 &&
     VAR_10->iftype != VAR_4)
  return -VAR_1;

 if (!FUNC_4(&VAR_8->wiphy,
         VAR_3))
  return -VAR_1;

 if (!VAR_7->attrs[VAR_2])
  return -VAR_0;

 FUNC_2(VAR_10);
 VAR_11 = FUNC_0(VAR_7->attrs[VAR_2]);
 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_11);
 FUNC_3(VAR_10);

 return VAR_12;
}
