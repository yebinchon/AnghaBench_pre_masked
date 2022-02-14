
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {scalar_t__ need_wakeup; } ;
struct xdp_sock {scalar_t__ tx; scalar_t__ rx; int queue_id; struct xdp_umem* umem; struct net_device* dev; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct poll_table_struct {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* ndo_xsk_wakeup ) (struct net_device*,int ,scalar_t__) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 unsigned int FUNC_1 (struct file*,struct socket*,struct poll_table_struct*) ;
 int FUNC_2 (struct net_device*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 struct xdp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct xdp_sock*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_8(struct file *VAR_4, struct socket *VAR_5,
        struct poll_table_struct *VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 struct sock *VAR_8 = VAR_5->sk;
 struct xdp_sock *VAR_9 = FUNC_4(VAR_8);
 struct net_device *VAR_10;
 struct xdp_umem *VAR_11;

 if (FUNC_3(!FUNC_5(VAR_9)))
  return VAR_7;

 VAR_10 = VAR_9->dev;
 VAR_11 = VAR_9->umem;

 if (VAR_11->need_wakeup) {
  if (VAR_10->netdev_ops->ndo_xsk_wakeup)
   VAR_10->netdev_ops->ndo_xsk_wakeup(VAR_10, VAR_9->queue_id,
       VAR_11->need_wakeup);
  else

   FUNC_0(VAR_8);
 }

 if (VAR_9->rx && !FUNC_6(VAR_9->rx))
  VAR_7 |= VAR_0 | VAR_2;
 if (VAR_9->tx && !FUNC_7(VAR_9->tx))
  VAR_7 |= VAR_1 | VAR_3;

 return VAR_7;
}
