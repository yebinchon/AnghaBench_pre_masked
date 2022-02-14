
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct p9_trans_rdma {int qp; TYPE_3__* pd; TYPE_2__* cm_id; } ;
struct TYPE_8__ {int done; } ;
struct TYPE_5__ {int sdata; } ;
struct p9_rdma_context {TYPE_4__ cqe; int busa; TYPE_1__ rc; } ;
struct p9_client {int msize; struct p9_trans_rdma* trans; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_recv_wr {int num_sge; struct ib_sge* sg_list; TYPE_4__* wr_cqe; int * next; } ;
struct TYPE_7__ {int local_dma_lkey; } ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct p9_client *VAR_4, struct p9_rdma_context *VAR_5)
{
 struct p9_trans_rdma *VAR_6 = VAR_4->trans;
 struct ib_recv_wr VAR_7;
 struct ib_sge VAR_8;

 VAR_5->busa = FUNC_0(VAR_6->cm_id->device,
        VAR_5->rc.sdata, VAR_4->msize,
        VAR_0);
 if (FUNC_1(VAR_6->cm_id->device, VAR_5->busa))
  goto error;

 VAR_5->cqe.done = VAR_3;

 VAR_8.addr = VAR_5->busa;
 VAR_8.length = VAR_4->msize;
 VAR_8.lkey = VAR_6->pd->local_dma_lkey;

 VAR_7.next = ((void*)0);
 VAR_7.wr_cqe = &VAR_5->cqe;
 VAR_7.sg_list = &VAR_8;
 VAR_7.num_sge = 1;
 return FUNC_2(VAR_6->qp, &VAR_7, ((void*)0));

 error:
 FUNC_3(VAR_2, "EIO\n");
 return -VAR_1;
}
