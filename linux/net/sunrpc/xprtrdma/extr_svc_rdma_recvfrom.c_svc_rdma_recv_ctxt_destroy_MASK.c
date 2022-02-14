
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {TYPE_1__* sc_pd; } ;
struct TYPE_4__ {int length; int addr; } ;
struct svc_rdma_recv_ctxt {struct svc_rdma_recv_ctxt* rc_recv_buf; TYPE_2__ rc_recv_sge; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct svc_rdma_recv_ctxt*) ;

__attribute__((used)) static void FUNC_2(struct svcxprt_rdma *VAR_1,
           struct svc_rdma_recv_ctxt *VAR_2)
{
 FUNC_0(VAR_1->sc_pd->device, VAR_2->rc_recv_sge.addr,
       VAR_2->rc_recv_sge.length, VAR_0);
 FUNC_1(VAR_2->rc_recv_buf);
 FUNC_1(VAR_2);
}
