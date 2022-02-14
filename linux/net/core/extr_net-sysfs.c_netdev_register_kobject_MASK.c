
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct attribute_group const** groups; struct net_device* platform_data; int * class; } ;
struct net_device {scalar_t__ wireless_handlers; scalar_t__ ieee80211_ptr; int name; struct attribute_group** sysfs_groups; struct device dev; } ;
struct attribute_group {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_2 ;

int FUNC_6(struct net_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 const struct attribute_group **VAR_5 = VAR_3->sysfs_groups;
 int VAR_6 = 0;

 FUNC_3(VAR_4);
 VAR_4->class = &VAR_0;
 VAR_4->platform_data = VAR_3;
 VAR_4->groups = VAR_5;

 FUNC_0(VAR_4, "%s", VAR_3->name);
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_4);
  return VAR_6;
 }

 FUNC_4(VAR_4, 1);

 return VAR_6;
}
