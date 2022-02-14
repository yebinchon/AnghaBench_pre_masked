
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {int sc_rw_ctxt_lock; int sc_rw_ctxts; } ;
struct TYPE_2__ {int sgl; } ;
struct svc_rdma_rw_ctxt {TYPE_1__ rw_sg_table; int rw_first_sgl; int rw_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct svc_rdma_rw_ctxt*) ;
 struct svc_rdma_rw_ctxt* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct svc_rdma_rw_ctxt*,int ,int ) ;
 struct svc_rdma_rw_ctxt* FUNC_8 (int *) ;

__attribute__((used)) static struct svc_rdma_rw_ctxt *
FUNC_9(struct svcxprt_rdma *VAR_3, unsigned int VAR_4)
{
 struct svc_rdma_rw_ctxt *VAR_5;

 FUNC_5(&VAR_3->sc_rw_ctxt_lock);

 VAR_5 = FUNC_8(&VAR_3->sc_rw_ctxts);
 if (VAR_5) {
  FUNC_3(&VAR_5->rw_list);
  FUNC_6(&VAR_3->sc_rw_ctxt_lock);
 } else {
  FUNC_6(&VAR_3->sc_rw_ctxt_lock);
  VAR_5 = FUNC_2(FUNC_7(VAR_5, VAR_2, VAR_1),
          VAR_0);
  if (!VAR_5)
   goto out;
  FUNC_0(&VAR_5->rw_list);
 }

 VAR_5->rw_sg_table.sgl = VAR_5->rw_first_sgl;
 if (FUNC_4(&VAR_5->rw_sg_table, VAR_4,
       VAR_5->rw_sg_table.sgl,
       VAR_1)) {
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }
out:
 return VAR_5;
}
