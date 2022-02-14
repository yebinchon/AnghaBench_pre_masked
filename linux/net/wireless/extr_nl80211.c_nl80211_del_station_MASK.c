
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct station_del_parameters {int subtype; scalar_t__ reason_code; int mac; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
typedef int params ;
struct TYPE_4__ {int del_station; } ;
struct TYPE_3__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct station_del_parameters*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct net_device*,struct net_device*,struct station_del_parameters*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_12, struct genl_info *VAR_13)
{
 struct cfg80211_registered_device *VAR_14 = VAR_13->user_ptr[0];
 struct net_device *VAR_15 = VAR_13->user_ptr[1];
 struct station_del_parameters VAR_16;

 FUNC_0(&VAR_16, 0, sizeof(VAR_16));

 if (VAR_13->attrs[VAR_4])
  VAR_16.mac = FUNC_1(VAR_13->attrs[VAR_4]);

 if (VAR_15->ieee80211_ptr->iftype != VAR_7 &&
     VAR_15->ieee80211_ptr->iftype != VAR_8 &&
     VAR_15->ieee80211_ptr->iftype != VAR_9 &&
     VAR_15->ieee80211_ptr->iftype != VAR_10)
  return -VAR_0;

 if (!VAR_14->ops->del_station)
  return -VAR_1;

 if (VAR_13->attrs[VAR_5]) {
  VAR_16.subtype =
   FUNC_3(VAR_13->attrs[VAR_5]);
  if (VAR_16.subtype != VAR_3 >> 4 &&
      VAR_16.subtype != VAR_2 >> 4)
   return -VAR_0;
 } else {

  VAR_16.subtype = VAR_2 >> 4;
 }

 if (VAR_13->attrs[VAR_6]) {
  VAR_16.reason_code =
   FUNC_2(VAR_13->attrs[VAR_6]);
  if (VAR_16.reason_code == 0)
   return -VAR_0;
 } else {

  VAR_16.reason_code = VAR_11;
 }

 return FUNC_4(VAR_14, VAR_15, &VAR_16);
}
