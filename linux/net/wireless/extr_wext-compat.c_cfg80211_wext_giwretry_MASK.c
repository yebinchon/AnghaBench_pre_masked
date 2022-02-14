
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; scalar_t__ value; scalar_t__ disabled; } ;
struct TYPE_2__ {scalar_t__ retry_short; scalar_t__ retry_long; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct net_device *VAR_3,
      struct iw_request_info *VAR_4,
      struct iw_param *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;

 VAR_5->disabled = 0;

 if (VAR_5->flags == 0 || (VAR_5->flags & VAR_2)) {




  VAR_5->flags |= VAR_0 | VAR_2;
  VAR_5->value = VAR_7->wiphy->retry_short;
  if (VAR_7->wiphy->retry_long == VAR_7->wiphy->retry_short)
   VAR_5->flags |= VAR_1;

  return 0;
 }

 if (VAR_5->flags & VAR_1) {
  VAR_5->flags = VAR_0 | VAR_1;
  VAR_5->value = VAR_7->wiphy->retry_long;
 }

 return 0;
}
