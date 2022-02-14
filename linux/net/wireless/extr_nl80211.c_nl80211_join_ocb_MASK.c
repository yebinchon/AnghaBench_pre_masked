
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ocb_setup {int chandef; } ;
struct net_device {int dummy; } ;
struct genl_info {struct net_device** user_ptr; } ;
typedef struct net_device cfg80211_registered_device ;


 int FUNC_0 (struct net_device*,struct net_device*,struct ocb_setup*) ;
 int FUNC_1 (struct net_device*,struct genl_info*,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = VAR_1->user_ptr[0];
 struct net_device *VAR_3 = VAR_1->user_ptr[1];
 struct ocb_setup VAR_4 = {};
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_4.chandef);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2, VAR_3, &VAR_4);
}
