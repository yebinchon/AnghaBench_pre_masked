
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct netdev_notifier_change_info {TYPE_1__ info; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,struct net_device*,int ,int ) ;

void FUNC_2(struct net_device *VAR_4)
{
 if (VAR_4->flags & VAR_1) {
  struct netdev_notifier_change_info VAR_5 = {
   .info.dev = VAR_4,
  };

  FUNC_0(VAR_2,
           &VAR_5.info);
  FUNC_1(VAR_3, VAR_4, 0, VAR_0);
 }
}
