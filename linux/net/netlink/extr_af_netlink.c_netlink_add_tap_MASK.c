
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_tap_net {int netlink_tap_lock; int netlink_tap_all; } ;
struct netlink_tap {int module; int list; TYPE_1__* dev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct net* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct netlink_tap_net* FUNC_5 (struct net*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct netlink_tap *VAR_3)
{
 struct net *VAR_4 = FUNC_1(VAR_3->dev);
 struct netlink_tap_net *VAR_5 = FUNC_5(VAR_4, VAR_2);

 if (FUNC_6(VAR_3->dev->type != VAR_0))
  return -VAR_1;

 FUNC_3(&VAR_5->netlink_tap_lock);
 FUNC_2(&VAR_3->list, &VAR_5->netlink_tap_all);
 FUNC_4(&VAR_5->netlink_tap_lock);

 FUNC_0(VAR_3->module);

 return 0;
}
