
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct neighbour {TYPE_2__* tbl; int parms; scalar_t__ arp_queue_len_bytes; int lock; int arp_queue; int dead; struct net_device* dev; } ;
struct TYPE_4__ {int entries; } ;
struct TYPE_3__ {int (* ndo_neigh_destroy ) (struct net_device*,struct neighbour*) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct neighbour*,int ) ;
 int FUNC_6 (int,char*,struct neighbour*) ;
 scalar_t__ FUNC_7 (struct neighbour*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int VAR_1 ;
 int FUNC_10 (struct net_device*,struct neighbour*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct neighbour *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;

 FUNC_0(VAR_2->tbl, VAR_0);

 if (!VAR_2->dead) {
  FUNC_9("Destroying alive neighbour %p\n", VAR_2);
  FUNC_4();
  return;
 }

 if (FUNC_7(VAR_2))
  FUNC_9("Impossible event\n");

 FUNC_11(&VAR_2->lock);
 FUNC_1(&VAR_2->arp_queue);
 FUNC_12(&VAR_2->lock);
 VAR_2->arp_queue_len_bytes = 0;

 if (VAR_3->netdev_ops->ndo_neigh_destroy)
  VAR_3->netdev_ops->ndo_neigh_destroy(VAR_3, VAR_2);

 FUNC_3(VAR_3);
 FUNC_8(VAR_2->parms);

 FUNC_6(2, "neigh %p is destroyed\n", VAR_2);

 FUNC_2(&VAR_2->tbl->entries);
 FUNC_5(VAR_2, VAR_1);
}
