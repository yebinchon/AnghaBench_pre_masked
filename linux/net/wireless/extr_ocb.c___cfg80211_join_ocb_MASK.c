
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chan; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ chandef; } ;
struct ocb_setup {TYPE_2__ chandef; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_3__ {int join_ocb; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,struct ocb_setup*) ;

int FUNC_3(struct cfg80211_registered_device *VAR_3,
   struct net_device *VAR_4,
   struct ocb_setup *VAR_5)
{
 struct wireless_dev *VAR_6 = VAR_4->ieee80211_ptr;
 int VAR_7;

 FUNC_0(VAR_6);

 if (VAR_4->ieee80211_ptr->iftype != VAR_2)
  return -VAR_1;

 if (!VAR_3->ops->join_ocb)
  return -VAR_1;

 if (FUNC_1(!VAR_5->chandef.chan))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (!VAR_7)
  VAR_6->chandef = VAR_5->chandef;

 return VAR_7;
}
