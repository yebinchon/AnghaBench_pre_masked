
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int value; scalar_t__ fixed; int disabled; } ;
union iwreq_data {TYPE_2__ txpower; } ;
struct wireless_dev {int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {int rfkill_block; int rfkill; TYPE_1__* ops; } ;
typedef enum nl80211_tx_power_setting { ____Placeholder_nl80211_tx_power_setting } nl80211_tx_power_setting ;
struct TYPE_3__ {int set_tx_power; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
        struct iw_request_info *VAR_9,
        union iwreq_data *VAR_10, char *VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_8->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_13 = FUNC_4(VAR_12->wiphy);
 enum nl80211_tx_power_setting VAR_14;
 int VAR_15 = 0;

 if ((VAR_10->txpower.flags & VAR_4) != VAR_2)
  return -VAR_0;
 if (VAR_10->txpower.flags & VAR_3)
  return -VAR_0;

 if (!VAR_13->ops->set_tx_power)
  return -VAR_1;


 if (!VAR_10->txpower.disabled) {
  FUNC_2(VAR_13->rfkill, 0);

  if (VAR_10->txpower.fixed) {




   if (VAR_10->txpower.value < 0)
    return -VAR_0;
   VAR_15 = VAR_10->txpower.value;
   VAR_14 = VAR_6;

  } else {




   if (VAR_10->txpower.value < 0) {
    VAR_14 = VAR_5;
   } else {
    VAR_15 = VAR_10->txpower.value;
    VAR_14 = VAR_7;
   }
  }
 } else {
  if (FUNC_2(VAR_13->rfkill, 1))
   FUNC_3(&VAR_13->rfkill_block);
  return 0;
 }

 return FUNC_1(VAR_13, VAR_12, VAR_14, FUNC_0(VAR_15));
}
