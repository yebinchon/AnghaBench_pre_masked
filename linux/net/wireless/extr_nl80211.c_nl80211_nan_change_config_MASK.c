
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {scalar_t__ iftype; TYPE_1__* wiphy; } ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ iftype; TYPE_1__* wiphy; } ;
struct cfg80211_nan_conf {int master_pref; int bands; } ;
struct TYPE_2__ {scalar_t__ nan_supported_bands; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wireless_dev*,struct wireless_dev*,struct cfg80211_nan_conf*,int) ;
 int FUNC_4 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_9,
         struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct wireless_dev *VAR_12 = VAR_10->user_ptr[1];
 struct cfg80211_nan_conf VAR_13 = {};
 u32 VAR_14 = 0;

 if (VAR_12->iftype != VAR_8)
  return -VAR_4;

 if (!FUNC_4(VAR_12))
  return -VAR_3;

 if (VAR_10->attrs[VAR_6]) {
  VAR_13.master_pref =
   FUNC_2(VAR_10->attrs[VAR_6]);
  if (VAR_13.master_pref <= 1 || VAR_13.master_pref == 255)
   return -VAR_2;

  VAR_14 |= VAR_1;
 }

 if (VAR_10->attrs[VAR_5]) {
  u32 VAR_15 = FUNC_1(VAR_10->attrs[VAR_5]);

  if (VAR_15 & ~(u32)VAR_12->wiphy->nan_supported_bands)
   return -VAR_4;

  if (VAR_15 && !(VAR_15 & FUNC_0(VAR_7)))
   return -VAR_2;

  VAR_13.bands = VAR_15;
  VAR_14 |= VAR_0;
 }

 if (!VAR_14)
  return -VAR_2;

 return FUNC_3(VAR_11, VAR_12, &VAR_13, VAR_14);
}
