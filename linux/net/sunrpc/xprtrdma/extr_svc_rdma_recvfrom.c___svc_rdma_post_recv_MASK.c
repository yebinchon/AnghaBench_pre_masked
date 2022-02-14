
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_xprt; int sc_qp; } ;
struct svc_rdma_recv_ctxt {int rc_recv_wr; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct svcxprt_rdma*,struct svc_rdma_recv_ctxt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct svcxprt_rdma *VAR_0,
    struct svc_rdma_recv_ctxt *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0->sc_xprt);
 VAR_2 = FUNC_0(VAR_0->sc_qp, &VAR_1->rc_recv_wr, ((void*)0));
 FUNC_4(&VAR_1->rc_recv_wr, VAR_2);
 if (VAR_2)
  goto err_post;
 return 0;

err_post:
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->sc_xprt);
 return VAR_2;
}
