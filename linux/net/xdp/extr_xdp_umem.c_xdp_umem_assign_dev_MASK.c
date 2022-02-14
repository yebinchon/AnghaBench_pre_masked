
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct xdp_umem {int queue_id; int zc; int flags; struct net_device* dev; } ;
struct TYPE_3__ {int queue_id; struct xdp_umem* umem; } ;
struct netdev_bpf {TYPE_1__ xsk; int command; } ;
struct net_device {TYPE_2__* netdev_ops; } ;
struct TYPE_4__ {int (* ndo_bpf ) (struct net_device*,struct netdev_bpf*) ;int ndo_xsk_wakeup; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct netdev_bpf*) ;
 int FUNC_3 (struct net_device*,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,struct xdp_umem*,int) ;
 int FUNC_6 (struct xdp_umem*) ;

int FUNC_7(struct xdp_umem *VAR_8, struct net_device *VAR_9,
   u16 VAR_10, u16 VAR_11)
{
 bool VAR_12, VAR_13;
 struct netdev_bpf VAR_14;
 int VAR_15 = 0;

 FUNC_0();

 VAR_12 = VAR_11 & VAR_7;
 VAR_13 = VAR_11 & VAR_3;

 if (VAR_12 && VAR_13)
  return -VAR_1;

 if (FUNC_4(VAR_9, VAR_10))
  return -VAR_0;

 VAR_15 = FUNC_5(VAR_9, VAR_8, VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_8->dev = VAR_9;
 VAR_8->queue_id = VAR_10;

 if (VAR_11 & VAR_6) {
  VAR_8->flags |= VAR_5;




  FUNC_6(VAR_8);
 }

 FUNC_1(VAR_9);

 if (VAR_13)

  return 0;

 if (!VAR_9->netdev_ops->ndo_bpf || !VAR_9->netdev_ops->ndo_xsk_wakeup) {
  VAR_15 = -VAR_2;
  goto err_unreg_umem;
 }

 VAR_14.command = VAR_4;
 VAR_14.xsk.umem = VAR_8;
 VAR_14.xsk.queue_id = VAR_10;

 VAR_15 = VAR_9->netdev_ops->ndo_bpf(VAR_9, &VAR_14);
 if (VAR_15)
  goto err_unreg_umem;

 VAR_8->zc = 1;
 return 0;

err_unreg_umem:
 if (!VAR_12)
  VAR_15 = 0;
 if (VAR_15)
  FUNC_3(VAR_9, VAR_10);
 return VAR_15;
}
