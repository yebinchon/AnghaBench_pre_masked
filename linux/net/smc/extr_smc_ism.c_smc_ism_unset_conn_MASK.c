
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smc_connection {TYPE_2__* lgr; TYPE_3__* rmb_desc; } ;
struct TYPE_6__ {size_t sba_idx; } ;
struct TYPE_5__ {TYPE_1__* smcd; } ;
struct TYPE_4__ {int lock; int ** conn; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct smc_connection *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0->rmb_desc)
  return;

 FUNC_0(&VAR_0->lgr->smcd->lock, VAR_1);
 VAR_0->lgr->smcd->conn[VAR_0->rmb_desc->sba_idx] = ((void*)0);
 FUNC_1(&VAR_0->lgr->smcd->lock, VAR_1);
}
