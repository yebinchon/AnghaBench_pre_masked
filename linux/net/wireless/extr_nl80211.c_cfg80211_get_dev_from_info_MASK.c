
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct genl_info {int attrs; } ;
struct cfg80211_registered_device {int dummy; } ;


 struct cfg80211_registered_device* FUNC_0 (struct net*,int ) ;

__attribute__((used)) static struct cfg80211_registered_device *
FUNC_1(struct net *VAR_0, struct genl_info *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->attrs);
}
