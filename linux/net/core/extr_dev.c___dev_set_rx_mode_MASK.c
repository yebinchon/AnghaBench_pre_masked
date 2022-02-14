
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_set_rx_mode ) (struct net_device*) ;} ;
struct net_device {int flags; int priv_flags; int uc_promisc; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_2)
{
 const struct net_device_ops *VAR_3 = VAR_2->netdev_ops;


 if (!(VAR_2->flags&VAR_1))
  return;

 if (!FUNC_2(VAR_2))
  return;

 if (!(VAR_2->priv_flags & VAR_0)) {



  if (!FUNC_1(VAR_2) && !VAR_2->uc_promisc) {
   FUNC_0(VAR_2, 1, 0);
   VAR_2->uc_promisc = 1;
  } else if (FUNC_1(VAR_2) && VAR_2->uc_promisc) {
   FUNC_0(VAR_2, -1, 0);
   VAR_2->uc_promisc = 0;
  }
 }

 if (VAR_3->ndo_set_rx_mode)
  VAR_3->ndo_set_rx_mode(VAR_2);
}
