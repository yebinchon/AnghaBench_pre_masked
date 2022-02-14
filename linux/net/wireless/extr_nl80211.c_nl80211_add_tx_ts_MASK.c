
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct wireless_dev {int iftype; int current_bss; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int features; } ;
struct net_device {TYPE_1__ wiphy; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;


 scalar_t__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,struct net_device*,scalar_t__,scalar_t__ const*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct wireless_dev*) ;
 int FUNC_5 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct net_device *VAR_12 = VAR_10->user_ptr[1];
 struct wireless_dev *VAR_13 = VAR_12->ieee80211_ptr;
 const u8 *VAR_14;
 u8 VAR_15, VAR_16;
 u16 VAR_17 = 0;
 int VAR_18;

 if (!(VAR_11->wiphy.features & VAR_8))
  return -VAR_2;

 if (!VAR_10->attrs[VAR_6] || !VAR_10->attrs[VAR_5] ||
     !VAR_10->attrs[VAR_7])
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_10->attrs[VAR_6]);
 VAR_16 = FUNC_2(VAR_10->attrs[VAR_7]);


 if (VAR_15 >= VAR_3) {




  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_10->attrs[VAR_5]);

 if (VAR_10->attrs[VAR_4]) {
  VAR_17 =
   FUNC_1(VAR_10->attrs[VAR_4]);
  if (!VAR_17)
   return -VAR_0;
 }

 FUNC_4(VAR_13);
 switch (VAR_13->iftype) {
 case 128:
 case 129:
  if (VAR_13->current_bss)
   break;
  VAR_18 = -VAR_1;
  goto out;
 default:
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_18 = FUNC_3(VAR_11, VAR_12, VAR_15, VAR_14, VAR_16, VAR_17);

 out:
 FUNC_5(VAR_13);
 return VAR_18;
}
