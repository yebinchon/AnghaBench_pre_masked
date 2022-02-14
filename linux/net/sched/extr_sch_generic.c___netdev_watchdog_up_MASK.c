
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int watchdog_timeo; int watchdog_timer; TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {scalar_t__ ndo_tx_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct net_device *VAR_2)
{
 if (VAR_2->netdev_ops->ndo_tx_timeout) {
  if (VAR_2->watchdog_timeo <= 0)
   VAR_2->watchdog_timeo = 5*VAR_0;
  if (!FUNC_1(&VAR_2->watchdog_timer,
          FUNC_2(VAR_1 + VAR_2->watchdog_timeo)))
   FUNC_0(VAR_2);
 }
}
