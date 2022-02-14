
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct netdev_notifier_bonding_info {TYPE_1__ info; int bonding_info; } ;
struct netdev_bonding_info {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,struct netdev_bonding_info*,int) ;

void FUNC_2(struct net_device *VAR_1,
    struct netdev_bonding_info *VAR_2)
{
 struct netdev_notifier_bonding_info VAR_3 = {
  .info.dev = VAR_1,
 };

 FUNC_1(&VAR_3.bonding_info, VAR_2,
        sizeof(struct netdev_bonding_info));
 FUNC_0(VAR_0,
          &VAR_3.info);
}
