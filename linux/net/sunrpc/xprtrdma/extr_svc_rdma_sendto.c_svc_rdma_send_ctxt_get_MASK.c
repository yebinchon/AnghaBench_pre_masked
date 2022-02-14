
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {int sc_send_lock; int sc_send_ctxts; } ;
struct TYPE_2__ {scalar_t__ num_sge; } ;
struct svc_rdma_send_ctxt {scalar_t__ sc_page_count; scalar_t__ sc_cur_sge_no; TYPE_1__ sc_send_wr; int sc_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct svc_rdma_send_ctxt* FUNC_3 (int *) ;
 struct svc_rdma_send_ctxt* FUNC_4 (struct svcxprt_rdma*) ;

struct svc_rdma_send_ctxt *FUNC_5(struct svcxprt_rdma *VAR_0)
{
 struct svc_rdma_send_ctxt *VAR_1;

 FUNC_1(&VAR_0->sc_send_lock);
 VAR_1 = FUNC_3(&VAR_0->sc_send_ctxts);
 if (!VAR_1)
  goto out_empty;
 FUNC_0(&VAR_1->sc_list);
 FUNC_2(&VAR_0->sc_send_lock);

out:
 VAR_1->sc_send_wr.num_sge = 0;
 VAR_1->sc_cur_sge_no = 0;
 VAR_1->sc_page_count = 0;
 return VAR_1;

out_empty:
 FUNC_2(&VAR_0->sc_send_lock);
 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return ((void*)0);
 goto out;
}
