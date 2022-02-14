
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svcxprt_rdma {TYPE_2__* sc_pd; } ;
struct TYPE_4__ {int num_sge; } ;
struct svc_rdma_send_ctxt {TYPE_3__* sc_sges; TYPE_1__ sc_send_wr; } ;
struct TYPE_6__ {unsigned int length; int addr; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;

void FUNC_1(struct svcxprt_rdma *VAR_1,
        struct svc_rdma_send_ctxt *VAR_2,
        unsigned int VAR_3)
{
 VAR_2->sc_sges[0].length = VAR_3;
 VAR_2->sc_send_wr.num_sge++;
 FUNC_0(VAR_1->sc_pd->device,
          VAR_2->sc_sges[0].addr, VAR_3,
          VAR_0);
}
