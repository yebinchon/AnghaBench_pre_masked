
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_rw_ctxts; } ;
struct svc_rdma_rw_ctxt {int rw_list; } ;


 int FUNC_0 (struct svc_rdma_rw_ctxt*) ;
 int FUNC_1 (int *) ;
 struct svc_rdma_rw_ctxt* FUNC_2 (int *) ;

void FUNC_3(struct svcxprt_rdma *VAR_0)
{
 struct svc_rdma_rw_ctxt *VAR_1;

 while ((VAR_1 = FUNC_2(&VAR_0->sc_rw_ctxts)) != ((void*)0)) {
  FUNC_1(&VAR_1->rw_list);
  FUNC_0(VAR_1);
 }
}
