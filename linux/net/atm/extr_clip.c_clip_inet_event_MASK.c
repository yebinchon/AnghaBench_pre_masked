
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct netdev_notifier_info {int dummy; } ;
struct in_ifaddr {struct in_device* ifa_dev; } ;
struct in_device {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct notifier_block*,int ,struct netdev_notifier_info*) ;
 int FUNC_1 (struct netdev_notifier_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3, unsigned long VAR_4,
      void *VAR_5)
{
 struct in_device *VAR_6;
 struct netdev_notifier_info VAR_7;

 VAR_6 = ((struct in_ifaddr *)VAR_5)->ifa_dev;




 if (VAR_4 != VAR_1)
  return VAR_2;
 FUNC_1(&VAR_7, VAR_6->dev);
 return FUNC_0(VAR_3, VAR_0, &VAR_7);
}
