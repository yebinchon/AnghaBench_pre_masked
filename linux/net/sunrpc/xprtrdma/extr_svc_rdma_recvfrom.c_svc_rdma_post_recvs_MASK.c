
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {unsigned int sc_max_requests; } ;
struct svc_rdma_recv_ctxt {int rc_temp; } ;


 int FUNC_0 (struct svcxprt_rdma*,struct svc_rdma_recv_ctxt*) ;
 struct svc_rdma_recv_ctxt* FUNC_1 (struct svcxprt_rdma*) ;

bool FUNC_2(struct svcxprt_rdma *VAR_0)
{
 struct svc_rdma_recv_ctxt *VAR_1;
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->sc_max_requests; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0);
  if (!VAR_1)
   return 0;
  VAR_1->rc_temp = 1;
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3)
   return 0;
 }
 return 1;
}
