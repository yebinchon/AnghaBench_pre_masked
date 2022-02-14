
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpoll_info {int dev_lock; } ;
struct net_device_ops {int (* ndo_poll_controller ) (struct net_device*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; int npinfo; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct netpoll_info* FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

void FUNC_7(struct net_device *VAR_0)
{
 struct netpoll_info *VAR_1 = FUNC_3(VAR_0->npinfo);
 const struct net_device_ops *VAR_2;





 if (!VAR_1 || FUNC_0(&VAR_1->dev_lock))
  return;

 if (!FUNC_1(VAR_0)) {
  FUNC_5(&VAR_1->dev_lock);
  return;
 }

 VAR_2 = VAR_0->netdev_ops;
 if (VAR_2->ndo_poll_controller)
  VAR_2->ndo_poll_controller(VAR_0);

 FUNC_2(VAR_0);

 FUNC_5(&VAR_1->dev_lock);

 FUNC_6();
}
