
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rds_ib_send_work {int dummy; } ;
struct rds_ib_recv_work {int dummy; } ;
struct rds_ib_device {int max_wrs; int max_sge; int pd; scalar_t__ use_fastreg; } ;
struct TYPE_6__ {int w_nr; } ;
struct rds_ib_connection {int * i_send_cq; int * i_recv_cq; TYPE_3__* i_cm_id; int i_send_hdrs_dma; void* i_send_hdrs; TYPE_2__ i_send_ring; int i_recv_hdrs_dma; void* i_recv_hdrs; TYPE_2__ i_recv_ring; int i_ack_dma; void* i_ack; void* i_sends; int i_pd; void* i_recvs; void* i_rcq_vector; void* i_scq_vector; } ;
struct rds_header {int dummy; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;
struct TYPE_5__ {int max_send_wr; int max_recv_wr; int max_recv_sge; int max_send_sge; } ;
struct ib_qp_init_attr {int * recv_cq; int * send_cq; int qp_type; int sq_sig_type; TYPE_1__ cap; struct rds_connection* qp_context; int event_handler; } ;
struct ib_device {int dummy; } ;
struct ib_cq_init_attr {int cqe; void* comp_vector; } ;
typedef int attr ;
struct TYPE_7__ {struct ib_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (struct ib_device*,int ,int ,struct rds_connection*,struct ib_cq_init_attr*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct ib_device*,int,int *,int ) ;
 int FUNC_6 (struct ib_device*,int,void*,int ) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (struct rds_ib_device*) ;
 int FUNC_9 (struct rds_ib_device*,void*) ;
 int FUNC_10 (struct ib_device*) ;
 int FUNC_11 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_12 (TYPE_3__*,int ,struct ib_qp_init_attr*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct rds_ib_device*,struct rds_connection*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (struct rds_ib_device*) ;
 struct rds_ib_device* FUNC_16 (struct ib_device*) ;
 int VAR_12 ;
 int FUNC_17 (struct rds_ib_connection*) ;
 int FUNC_18 (struct rds_ib_device*,struct rds_connection*) ;
 int FUNC_19 (TYPE_2__*,int) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (void*) ;
 void* FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(struct rds_connection *VAR_13)
{
 struct rds_ib_connection *VAR_14 = VAR_13->c_transport_data;
 struct ib_device *VAR_15 = VAR_14->i_cm_id->device;
 struct ib_qp_init_attr VAR_16;
 struct ib_cq_init_attr VAR_17 = {};
 struct rds_ib_device *VAR_18;
 int VAR_19, VAR_20;





 VAR_18 = FUNC_16(VAR_15);
 if (!VAR_18)
  return -VAR_1;





 VAR_20 = (VAR_18->use_fastreg ? VAR_7 : 0);


 FUNC_14(VAR_18, VAR_13);

 if (VAR_18->max_wrs < VAR_14->i_send_ring.w_nr + 1)
  FUNC_19(&VAR_14->i_send_ring, VAR_18->max_wrs - 1);
 if (VAR_18->max_wrs < VAR_14->i_recv_ring.w_nr + 1)
  FUNC_19(&VAR_14->i_recv_ring, VAR_18->max_wrs - 1);


 VAR_14->i_pd = VAR_18->pd;

 VAR_14->i_scq_vector = FUNC_8(VAR_18);
 VAR_17.cqe = VAR_14->i_send_ring.w_nr + VAR_20 + 1;
 VAR_17.comp_vector = VAR_14->i_scq_vector;
 VAR_14->i_send_cq = FUNC_3(VAR_15, VAR_10,
         VAR_11, VAR_13,
         &VAR_17);
 if (FUNC_0(VAR_14->i_send_cq)) {
  VAR_19 = FUNC_1(VAR_14->i_send_cq);
  VAR_14->i_send_cq = ((void*)0);
  FUNC_9(VAR_18, VAR_14->i_scq_vector);
  FUNC_20("ib_create_cq send failed: %d\n", VAR_19);
  goto rds_ibdev_out;
 }

 VAR_14->i_rcq_vector = FUNC_8(VAR_18);
 VAR_17.cqe = VAR_14->i_recv_ring.w_nr;
 VAR_17.comp_vector = VAR_14->i_rcq_vector;
 VAR_14->i_recv_cq = FUNC_3(VAR_15, VAR_9,
         VAR_11, VAR_13,
         &VAR_17);
 if (FUNC_0(VAR_14->i_recv_cq)) {
  VAR_19 = FUNC_1(VAR_14->i_recv_cq);
  VAR_14->i_recv_cq = ((void*)0);
  FUNC_9(VAR_18, VAR_14->i_rcq_vector);
  FUNC_20("ib_create_cq recv failed: %d\n", VAR_19);
  goto send_cq_out;
 }

 VAR_19 = FUNC_7(VAR_14->i_send_cq, VAR_3);
 if (VAR_19) {
  FUNC_20("ib_req_notify_cq send failed: %d\n", VAR_19);
  goto recv_cq_out;
 }

 VAR_19 = FUNC_7(VAR_14->i_recv_cq, VAR_4);
 if (VAR_19) {
  FUNC_20("ib_req_notify_cq recv failed: %d\n", VAR_19);
  goto recv_cq_out;
 }


 FUNC_11(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.event_handler = VAR_12;
 VAR_16.qp_context = VAR_13;

 VAR_16.cap.max_send_wr = VAR_14->i_send_ring.w_nr + VAR_20 + 1;
 VAR_16.cap.max_recv_wr = VAR_14->i_recv_ring.w_nr + 1;
 VAR_16.cap.max_send_sge = VAR_18->max_sge;
 VAR_16.cap.max_recv_sge = VAR_8;
 VAR_16.sq_sig_type = VAR_6;
 VAR_16.qp_type = VAR_5;
 VAR_16.send_cq = VAR_14->i_send_cq;
 VAR_16.recv_cq = VAR_14->i_recv_cq;





 VAR_19 = FUNC_12(VAR_14->i_cm_id, VAR_14->i_pd, &VAR_16);
 if (VAR_19) {
  FUNC_20("rdma_create_qp failed: %d\n", VAR_19);
  goto recv_cq_out;
 }

 VAR_14->i_send_hdrs = FUNC_5(VAR_15,
        VAR_14->i_send_ring.w_nr *
      sizeof(struct rds_header),
        &VAR_14->i_send_hdrs_dma, VAR_2);
 if (!VAR_14->i_send_hdrs) {
  VAR_19 = -VAR_0;
  FUNC_20("ib_dma_alloc_coherent send failed\n");
  goto qp_out;
 }

 VAR_14->i_recv_hdrs = FUNC_5(VAR_15,
        VAR_14->i_recv_ring.w_nr *
      sizeof(struct rds_header),
        &VAR_14->i_recv_hdrs_dma, VAR_2);
 if (!VAR_14->i_recv_hdrs) {
  VAR_19 = -VAR_0;
  FUNC_20("ib_dma_alloc_coherent recv failed\n");
  goto send_hdrs_dma_out;
 }

 VAR_14->i_ack = FUNC_5(VAR_15, sizeof(struct rds_header),
           &VAR_14->i_ack_dma, VAR_2);
 if (!VAR_14->i_ack) {
  VAR_19 = -VAR_0;
  FUNC_20("ib_dma_alloc_coherent ack failed\n");
  goto recv_hdrs_dma_out;
 }

 VAR_14->i_sends = FUNC_22(FUNC_2(sizeof(struct rds_ib_send_work),
           VAR_14->i_send_ring.w_nr),
       FUNC_10(VAR_15));
 if (!VAR_14->i_sends) {
  VAR_19 = -VAR_0;
  FUNC_20("send allocation failed\n");
  goto ack_dma_out;
 }

 VAR_14->i_recvs = FUNC_22(FUNC_2(sizeof(struct rds_ib_recv_work),
           VAR_14->i_recv_ring.w_nr),
       FUNC_10(VAR_15));
 if (!VAR_14->i_recvs) {
  VAR_19 = -VAR_0;
  FUNC_20("recv allocation failed\n");
  goto sends_out;
 }

 FUNC_17(VAR_14);

 FUNC_20("conn %p pd %p cq %p %p\n", VAR_13, VAR_14->i_pd,
   VAR_14->i_send_cq, VAR_14->i_recv_cq);

 goto out;

sends_out:
 FUNC_21(VAR_14->i_sends);
ack_dma_out:
 FUNC_6(VAR_15, sizeof(struct rds_header),
        VAR_14->i_ack, VAR_14->i_ack_dma);
recv_hdrs_dma_out:
 FUNC_6(VAR_15, VAR_14->i_recv_ring.w_nr *
     sizeof(struct rds_header),
     VAR_14->i_recv_hdrs, VAR_14->i_recv_hdrs_dma);
send_hdrs_dma_out:
 FUNC_6(VAR_15, VAR_14->i_send_ring.w_nr *
     sizeof(struct rds_header),
     VAR_14->i_send_hdrs, VAR_14->i_send_hdrs_dma);
qp_out:
 FUNC_13(VAR_14->i_cm_id);
recv_cq_out:
 FUNC_4(VAR_14->i_recv_cq);
 VAR_14->i_recv_cq = ((void*)0);
send_cq_out:
 FUNC_4(VAR_14->i_send_cq);
 VAR_14->i_send_cq = ((void*)0);
rds_ibdev_out:
 FUNC_18(VAR_18, VAR_13);
out:
 FUNC_15(VAR_18);

 return VAR_19;
}
