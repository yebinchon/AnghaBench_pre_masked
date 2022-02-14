
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct TYPE_3__ {int del_mpath; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,struct net_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net_device *VAR_6 = VAR_4->user_ptr[1];
 u8 *VAR_7 = ((void*)0);

 if (VAR_4->attrs[VAR_1])
  VAR_7 = FUNC_0(VAR_4->attrs[VAR_1]);

 if (!VAR_5->ops->del_mpath)
  return -VAR_0;

 if (VAR_6->ieee80211_ptr->iftype != VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
