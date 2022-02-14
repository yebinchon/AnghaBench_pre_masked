
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_update_owe_info {int ie_len; int ie; int peer; int status; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int owe_info ;
struct TYPE_2__ {int update_owe_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct cfg80211_update_owe_info*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (struct net_device*,struct net_device*,struct cfg80211_update_owe_info*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct cfg80211_update_owe_info VAR_9;
 struct net_device *VAR_10 = VAR_7->user_ptr[1];

 if (!VAR_8->ops->update_owe_info)
  return -VAR_1;

 if (!VAR_7->attrs[VAR_5] ||
     !VAR_7->attrs[VAR_4])
  return -VAR_0;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.status = FUNC_2(VAR_7->attrs[VAR_5]);
 FUNC_4(VAR_9.peer, VAR_7->attrs[VAR_4], VAR_2);

 if (VAR_7->attrs[VAR_3]) {
  VAR_9.ie = FUNC_1(VAR_7->attrs[VAR_3]);
  VAR_9.ie_len = FUNC_3(VAR_7->attrs[VAR_3]);
 }

 return FUNC_5(VAR_8, VAR_10, &VAR_9);
}
