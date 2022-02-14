
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {int sc_xprt; int sc_port_num; int sc_qp; } ;
struct TYPE_2__ {int sgl; } ;
struct svc_rdma_rw_ctxt {int rw_nents; TYPE_1__ rw_sg_table; int rw_ctx; int rw_list; } ;
struct svc_rdma_chunk_ctxt {int cc_rwctxts; struct svcxprt_rdma* cc_rdma; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int) ;
 struct svc_rdma_rw_ctxt* FUNC_2 (int *) ;
 int FUNC_3 (struct svcxprt_rdma*,struct svc_rdma_rw_ctxt*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct svc_rdma_chunk_ctxt *VAR_0,
    enum dma_data_direction VAR_1)
{
 struct svcxprt_rdma *VAR_2 = VAR_0->cc_rdma;
 struct svc_rdma_rw_ctxt *VAR_3;

 while ((VAR_3 = FUNC_2(&VAR_0->cc_rwctxts)) != ((void*)0)) {
  FUNC_0(&VAR_3->rw_list);

  FUNC_1(&VAR_3->rw_ctx, VAR_2->sc_qp,
        VAR_2->sc_port_num, VAR_3->rw_sg_table.sgl,
        VAR_3->rw_nents, VAR_1);
  FUNC_3(VAR_2, VAR_3);
 }
 FUNC_4(&VAR_2->sc_xprt);
}
