
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct p9_trans_rdma {scalar_t__ state; int req_lock; TYPE_5__* cm_id; int excess_rc; int qp; int sq_sem; TYPE_3__* pd; int rq_sem; } ;
struct TYPE_8__ {int size; int sdata; } ;
struct TYPE_12__ {int * sdata; } ;
struct p9_req_t {int status; TYPE_2__ tc; TYPE_6__ rc; } ;
struct TYPE_10__ {int done; } ;
struct TYPE_7__ {int * sdata; } ;
struct p9_rdma_context {TYPE_4__ cqe; struct p9_req_t* req; int busa; TYPE_1__ rc; } ;
struct p9_client {struct p9_trans_rdma* trans; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_send_wr {int num_sge; struct ib_sge* sg_list; int send_flags; int opcode; TYPE_4__* wr_cqe; int * next; } ;
struct TYPE_11__ {int device; } ;
struct TYPE_9__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct ib_send_wr*,int *) ;
 int FUNC_7 (struct p9_rdma_context*) ;
 struct p9_rdma_context* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (struct p9_client*,struct p9_rdma_context*) ;
 int FUNC_12 (TYPE_5__*) ;
 int VAR_11 ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct p9_client *VAR_12, struct p9_req_t *VAR_13)
{
 struct p9_trans_rdma *VAR_14 = VAR_12->trans;
 struct ib_send_wr VAR_15;
 struct ib_sge VAR_16;
 int VAR_17 = 0;
 unsigned long VAR_18;
 struct p9_rdma_context *VAR_19 = ((void*)0);
 struct p9_rdma_context *VAR_20 = ((void*)0);
 if (FUNC_15(FUNC_1(&VAR_14->excess_rc) > 0)) {
  if ((FUNC_2(1, &VAR_14->excess_rc) >= 0)) {

   FUNC_10(&VAR_13->rc);
   VAR_13->rc.sdata = ((void*)0);
   goto dont_need_post_recv;
  } else {

   FUNC_0(&VAR_14->excess_rc);
  }
 }


 VAR_20 = FUNC_8(sizeof *VAR_20, VAR_4);
 if (!VAR_20) {
  VAR_17 = -VAR_3;
  goto recv_error;
 }
 VAR_20->rc.sdata = VAR_13->rc.sdata;
 if (FUNC_3(&VAR_14->rq_sem)) {
  VAR_17 = -VAR_1;
  goto recv_error;
 }

 VAR_17 = FUNC_11(VAR_12, VAR_20);
 if (VAR_17) {
  FUNC_9(VAR_7, "POST RECV failed: %d\n", VAR_17);
  goto recv_error;
 }

 VAR_13->rc.sdata = ((void*)0);

dont_need_post_recv:

 VAR_19 = FUNC_8(sizeof *VAR_19, VAR_4);
 if (!VAR_19) {
  VAR_17 = -VAR_3;
  goto send_error;
 }
 VAR_19->req = VAR_13;

 VAR_19->busa = FUNC_4(VAR_14->cm_id->device,
        VAR_19->req->tc.sdata, VAR_19->req->tc.size,
        VAR_0);
 if (FUNC_5(VAR_14->cm_id->device, VAR_19->busa)) {
  VAR_17 = -VAR_2;
  goto send_error;
 }

 VAR_19->cqe.done = VAR_11;

 VAR_16.addr = VAR_19->busa;
 VAR_16.length = VAR_19->req->tc.size;
 VAR_16.lkey = VAR_14->pd->local_dma_lkey;

 VAR_15.next = ((void*)0);
 VAR_15.wr_cqe = &VAR_19->cqe;
 VAR_15.opcode = VAR_6;
 VAR_15.send_flags = VAR_5;
 VAR_15.sg_list = &VAR_16;
 VAR_15.num_sge = 1;

 if (FUNC_3(&VAR_14->sq_sem)) {
  VAR_17 = -VAR_1;
  goto send_error;
 }





 VAR_13->status = VAR_10;
 VAR_17 = FUNC_6(VAR_14->qp, &VAR_15, ((void*)0));
 if (VAR_17)
  goto send_error;


 return 0;


 send_error:
 VAR_13->status = VAR_9;
 FUNC_7(VAR_19);
 FUNC_9(VAR_7, "Error %d in rdma_request()\n", VAR_17);




 FUNC_0(&VAR_14->excess_rc);
 return VAR_17;


 recv_error:
 FUNC_7(VAR_20);
 FUNC_13(&VAR_14->req_lock, VAR_18);
 if (VAR_17 != -VAR_1 && VAR_14->state < VAR_8) {
  VAR_14->state = VAR_8;
  FUNC_14(&VAR_14->req_lock, VAR_18);
  FUNC_12(VAR_14->cm_id);
 } else
  FUNC_14(&VAR_14->req_lock, VAR_18);
 return VAR_17;
}
