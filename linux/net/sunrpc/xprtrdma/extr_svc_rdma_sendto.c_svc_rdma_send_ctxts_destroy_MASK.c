
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {int sc_max_req_size; TYPE_1__* sc_pd; int sc_send_ctxts; } ;
struct svc_rdma_send_ctxt {struct svc_rdma_send_ctxt* sc_xprt_buf; TYPE_2__* sc_sges; int sc_list; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct svc_rdma_send_ctxt*) ;
 int FUNC_2 (int *) ;
 struct svc_rdma_send_ctxt* FUNC_3 (int *) ;

void FUNC_4(struct svcxprt_rdma *VAR_1)
{
 struct svc_rdma_send_ctxt *VAR_2;

 while ((VAR_2 = FUNC_3(&VAR_1->sc_send_ctxts))) {
  FUNC_2(&VAR_2->sc_list);
  FUNC_0(VAR_1->sc_pd->device,
        VAR_2->sc_sges[0].addr,
        VAR_1->sc_max_req_size,
        VAR_0);
  FUNC_1(VAR_2->sc_xprt_buf);
  FUNC_1(VAR_2);
 }
}
