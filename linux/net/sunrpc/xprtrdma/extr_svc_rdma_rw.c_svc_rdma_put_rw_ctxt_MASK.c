
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_rw_ctxt_lock; int sc_rw_ctxts; } ;
struct svc_rdma_rw_ctxt {int rw_list; int rw_sg_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct svcxprt_rdma *VAR_1,
     struct svc_rdma_rw_ctxt *VAR_2)
{
 FUNC_1(&VAR_2->rw_sg_table, VAR_0);

 FUNC_2(&VAR_1->sc_rw_ctxt_lock);
 FUNC_0(&VAR_2->rw_list, &VAR_1->sc_rw_ctxts);
 FUNC_3(&VAR_1->sc_rw_ctxt_lock);
}
