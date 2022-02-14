
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct net_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
typedef enum nl80211_tdls_operation { ____Placeholder_nl80211_tdls_operation } nl80211_tdls_operation ;
struct TYPE_4__ {int tdls_oper; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct net_device*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = VAR_6->user_ptr[0];
 struct net_device *VAR_8 = VAR_6->user_ptr[1];
 enum nl80211_tdls_operation VAR_9;
 u8 *VAR_10;

 if (!(VAR_7->wiphy.flags & VAR_4) ||
     !VAR_7->ops->tdls_oper)
  return -VAR_1;

 if (!VAR_6->attrs[VAR_3] ||
     !VAR_6->attrs[VAR_2])
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6->attrs[VAR_3]);
 VAR_10 = FUNC_0(VAR_6->attrs[VAR_2]);

 return FUNC_2(VAR_7, VAR_8, VAR_10, VAR_9);
}
