
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct TYPE_3__ {int change_mpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = VAR_6->user_ptr[0];
 struct net_device *VAR_8 = VAR_6->user_ptr[1];
 u8 *VAR_9 = ((void*)0);
 u8 *VAR_10 = ((void*)0);

 if (!VAR_6->attrs[VAR_2])
  return -VAR_0;

 if (!VAR_6->attrs[VAR_3])
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_6->attrs[VAR_2]);
 VAR_10 = FUNC_0(VAR_6->attrs[VAR_3]);

 if (!VAR_7->ops->change_mpath)
  return -VAR_1;

 if (VAR_8->ieee80211_ptr->iftype != VAR_4)
  return -VAR_1;

 return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10);
}
