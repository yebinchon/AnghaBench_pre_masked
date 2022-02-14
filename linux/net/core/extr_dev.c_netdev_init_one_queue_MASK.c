
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int xmit_lock_owner; int dql; struct net_device* dev; int _xmit_lock; } ;
struct net_device {int qdisc_xmit_lock_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct netdev_queue*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
      struct netdev_queue *VAR_3, void *VAR_4)
{

 FUNC_3(&VAR_3->_xmit_lock);
 FUNC_1(&VAR_3->_xmit_lock, &VAR_2->qdisc_xmit_lock_key);
 VAR_3->xmit_lock_owner = -1;
 FUNC_2(VAR_3, VAR_1);
 VAR_3->dev = VAR_2;



}
