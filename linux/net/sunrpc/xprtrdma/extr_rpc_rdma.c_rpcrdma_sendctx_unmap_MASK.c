
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_sendctx {TYPE_1__* sc_req; int sc_device; scalar_t__ sc_unmap_count; struct ib_sge* sc_sges; } ;
struct ib_sge {int length; int addr; } ;
struct TYPE_2__ {int rl_kref; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;

void FUNC_2(struct rpcrdma_sendctx *VAR_2)
{
 struct ib_sge *VAR_3;

 if (!VAR_2->sc_unmap_count)
  return;





 for (VAR_3 = &VAR_2->sc_sges[2]; VAR_2->sc_unmap_count;
      ++VAR_3, --VAR_2->sc_unmap_count)
  FUNC_0(VAR_2->sc_device, VAR_3->addr, VAR_3->length,
      VAR_0);

 FUNC_1(&VAR_2->sc_req->rl_kref, VAR_1);
}
