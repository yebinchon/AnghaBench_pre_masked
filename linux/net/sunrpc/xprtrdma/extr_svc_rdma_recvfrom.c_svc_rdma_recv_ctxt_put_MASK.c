
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_recv_ctxts; } ;
struct svc_rdma_recv_ctxt {unsigned int rc_page_count; int rc_node; int rc_temp; int * rc_pages; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct svcxprt_rdma*,struct svc_rdma_recv_ctxt*) ;

void FUNC_3(struct svcxprt_rdma *VAR_0,
       struct svc_rdma_recv_ctxt *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->rc_page_count; VAR_2++)
  FUNC_1(VAR_1->rc_pages[VAR_2]);

 if (!VAR_1->rc_temp)
  FUNC_0(&VAR_1->rc_node, &VAR_0->sc_recv_ctxts);
 else
  FUNC_2(VAR_0, VAR_1);
}
