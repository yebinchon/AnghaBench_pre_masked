
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct genl_info {struct net_device** user_ptr; } ;
typedef struct net_device cfg80211_registered_device ;


 int FUNC_0 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = VAR_1->user_ptr[0];
 struct net_device *VAR_3 = VAR_1->user_ptr[1];

 return FUNC_0(VAR_2, VAR_3);
}
