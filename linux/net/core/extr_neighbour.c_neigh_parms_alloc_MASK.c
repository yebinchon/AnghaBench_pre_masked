
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_ops {scalar_t__ (* ndo_neigh_setup ) (struct net_device*,struct neigh_parms*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int list; } ;
struct neigh_table {int lock; TYPE_1__ parms; } ;
struct neigh_parms {int list; int * sysctl_table; int net; struct net_device* dev; int reachable_time; int refcnt; struct neigh_table* tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct neigh_parms*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct neigh_parms*) ;
 struct neigh_parms* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct neigh_parms*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (struct net_device*,struct neigh_parms*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct net*) ;
 int FUNC_13 (int *) ;

struct neigh_parms *FUNC_14(struct net_device *VAR_2,
          struct neigh_table *VAR_3)
{
 struct neigh_parms *VAR_4;
 struct net *VAR_5 = FUNC_2(VAR_2);
 const struct net_device_ops *VAR_6 = VAR_2->netdev_ops;

 VAR_4 = FUNC_5(&VAR_3->parms, sizeof(*VAR_4), VAR_1);
 if (VAR_4) {
  VAR_4->tbl = VAR_3;
  FUNC_9(&VAR_4->refcnt, 1);
  VAR_4->reachable_time =
    FUNC_8(FUNC_0(VAR_4, VAR_0));
  FUNC_1(VAR_2);
  VAR_4->dev = VAR_2;
  FUNC_12(&VAR_4->net, VAR_5);
  VAR_4->sysctl_table = ((void*)0);

  if (VAR_6->ndo_neigh_setup && VAR_6->ndo_neigh_setup(VAR_2, VAR_4)) {
   FUNC_3(VAR_2);
   FUNC_4(VAR_4);
   return ((void*)0);
  }

  FUNC_11(&VAR_3->lock);
  FUNC_6(&VAR_4->list, &VAR_3->parms.list);
  FUNC_13(&VAR_3->lock);

  FUNC_7(VAR_4);
 }
 return VAR_4;
}
