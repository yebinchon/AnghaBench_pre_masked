
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xdp_umem {int zc; TYPE_3__* dev; int queue_id; } ;
struct TYPE_6__ {int queue_id; int * umem; } ;
struct netdev_bpf {TYPE_1__ xsk; int command; } ;
struct TYPE_8__ {TYPE_2__* netdev_ops; } ;
struct TYPE_7__ {int (* ndo_bpf ) (TYPE_3__*,struct netdev_bpf*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct netdev_bpf*) ;
 int FUNC_4 (TYPE_3__*,int ) ;

void FUNC_5(struct xdp_umem *VAR_1)
{
 struct netdev_bpf VAR_2;
 int VAR_3;

 FUNC_0();

 if (!VAR_1->dev)
  return;

 if (VAR_1->zc) {
  VAR_2.command = VAR_0;
  VAR_2.xsk.umem = ((void*)0);
  VAR_2.xsk.queue_id = VAR_1->queue_id;

  VAR_3 = VAR_1->dev->netdev_ops->ndo_bpf(VAR_1->dev, &VAR_2);

  if (VAR_3)
   FUNC_1(1, "failed to disable umem!\n");
 }

 FUNC_4(VAR_1->dev, VAR_1->queue_id);

 FUNC_2(VAR_1->dev);
 VAR_1->dev = ((void*)0);
 VAR_1->zc = 0;
}
