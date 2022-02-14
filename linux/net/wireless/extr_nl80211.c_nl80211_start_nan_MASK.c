
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {scalar_t__ iftype; int is_running; int opencount; TYPE_1__* wiphy; int rfkill; } ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ iftype; int is_running; int opencount; TYPE_1__* wiphy; int rfkill; } ;
struct cfg80211_nan_conf {int bands; int master_pref; } ;
struct TYPE_2__ {scalar_t__ nan_supported_bands; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wireless_dev*,struct wireless_dev*,struct cfg80211_nan_conf*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = VAR_9->user_ptr[0];
 struct wireless_dev *VAR_11 = VAR_9->user_ptr[1];
 struct cfg80211_nan_conf VAR_12 = {};
 int VAR_13;

 if (VAR_11->iftype != VAR_7)
  return -VAR_2;

 if (FUNC_5(VAR_11))
  return -VAR_0;

 if (FUNC_4(VAR_10->rfkill))
  return -VAR_3;

 if (!VAR_9->attrs[VAR_5])
  return -VAR_1;

 VAR_12.master_pref =
  FUNC_2(VAR_9->attrs[VAR_5]);

 if (VAR_9->attrs[VAR_4]) {
  u32 VAR_14 = FUNC_1(VAR_9->attrs[VAR_4]);

  if (VAR_14 & ~(u32)VAR_11->wiphy->nan_supported_bands)
   return -VAR_2;

  if (VAR_14 && !(VAR_14 & FUNC_0(VAR_6)))
   return -VAR_1;

  VAR_12.bands = VAR_14;
 }

 VAR_13 = FUNC_3(VAR_10, VAR_11, &VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_11->is_running = 1;
 VAR_10->opencount++;

 return 0;
}
