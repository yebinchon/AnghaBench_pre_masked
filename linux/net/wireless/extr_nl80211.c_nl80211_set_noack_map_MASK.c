
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int set_noack_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net_device *VAR_6 = VAR_4->user_ptr[1];
 u16 VAR_7;

 if (!VAR_4->attrs[VAR_2])
  return -VAR_0;

 if (!VAR_5->ops->set_noack_map)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_4->attrs[VAR_2]);

 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
