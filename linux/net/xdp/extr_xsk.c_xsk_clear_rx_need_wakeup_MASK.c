
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_umem {int need_wakeup; TYPE_2__* fq; } ;
struct TYPE_4__ {TYPE_1__* ring; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct xdp_umem *VAR_2)
{
 if (!(VAR_2->need_wakeup & VAR_1))
  return;

 VAR_2->fq->ring->flags &= ~VAR_0;
 VAR_2->need_wakeup &= ~VAR_1;
}
