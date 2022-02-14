
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int (* notifier_call ) (struct notifier_block*,unsigned long,struct netdev_notifier_info*) ;} ;
struct netdev_notifier_info {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct notifier_block*,unsigned long,struct netdev_notifier_info*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_0, unsigned long VAR_1,
       struct net_device *VAR_2)
{
 struct netdev_notifier_info VAR_3 = {
  .dev = VAR_2,
 };

 return VAR_0->notifier_call(VAR_0, VAR_1, &VAR_3);
}
