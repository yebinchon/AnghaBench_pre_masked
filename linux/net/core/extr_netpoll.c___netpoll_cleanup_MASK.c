
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netpoll_info {int rcu; int refcnt; } ;
struct netpoll {TYPE_1__* dev; } ;
struct net_device_ops {int (* ndo_netpoll_cleanup ) (TYPE_1__*) ;} ;
struct TYPE_2__ {int npinfo; struct net_device_ops* netdev_ops; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 struct netpoll_info* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct netpoll *VAR_2)
{
 struct netpoll_info *VAR_3;

 VAR_3 = FUNC_3(VAR_2->dev->npinfo);
 if (!VAR_3)
  return;

 FUNC_5(&VAR_0);

 if (FUNC_2(&VAR_3->refcnt)) {
  const struct net_device_ops *VAR_4;

  VAR_4 = VAR_2->dev->netdev_ops;
  if (VAR_4->ndo_netpoll_cleanup)
   VAR_4->ndo_netpoll_cleanup(VAR_2->dev);

  FUNC_0(VAR_2->dev->npinfo, ((void*)0));
  FUNC_1(&VAR_3->rcu, VAR_1);
 } else
  FUNC_0(VAR_2->dev->npinfo, ((void*)0));
}
