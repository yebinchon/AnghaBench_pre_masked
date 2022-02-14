
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_sock {int queue_id; struct net_device* dev; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_xsk_wakeup ) (struct net_device*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct xdp_sock *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;

 return VAR_2->netdev_ops->ndo_xsk_wakeup(VAR_2, VAR_1->queue_id,
            VAR_0);
}
