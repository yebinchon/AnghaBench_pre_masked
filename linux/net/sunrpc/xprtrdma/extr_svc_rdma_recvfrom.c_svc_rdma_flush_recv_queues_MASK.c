
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_rq_dto_q; int sc_read_complete_q; } ;
struct svc_rdma_recv_ctxt {int rc_list; } ;


 int FUNC_0 (int *) ;
 struct svc_rdma_recv_ctxt* FUNC_1 (int *) ;
 int FUNC_2 (struct svcxprt_rdma*,struct svc_rdma_recv_ctxt*) ;

void FUNC_3(struct svcxprt_rdma *VAR_0)
{
 struct svc_rdma_recv_ctxt *VAR_1;

 while ((VAR_1 = FUNC_1(&VAR_0->sc_read_complete_q))) {
  FUNC_0(&VAR_1->rc_list);
  FUNC_2(VAR_0, VAR_1);
 }
 while ((VAR_1 = FUNC_1(&VAR_0->sc_rq_dto_q))) {
  FUNC_0(&VAR_1->rc_list);
  FUNC_2(VAR_0, VAR_1);
 }
}
