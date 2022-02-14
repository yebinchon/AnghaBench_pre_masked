
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_xprt; } ;
struct svc_rdma_chunk_ctxt {scalar_t__ cc_sqecount; int cc_rwctxts; struct svcxprt_rdma* cc_rdma; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct svcxprt_rdma *VAR_0,
        struct svc_rdma_chunk_ctxt *VAR_1)
{
 VAR_1->cc_rdma = VAR_0;
 FUNC_1(&VAR_0->sc_xprt);

 FUNC_0(&VAR_1->cc_rwctxts);
 VAR_1->cc_sqecount = 0;
}
