
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_ib_recv_work {TYPE_3__* r_frag; } ;
struct rds_ib_connection {int i_recv_ring; TYPE_2__* i_cm_id; struct rds_ib_recv_work* i_recvs; struct rds_connection* conn; } ;
struct rds_ib_ack_state {int dummy; } ;
struct rds_connection {int c_tos; int c_faddr; int c_laddr; } ;
struct TYPE_4__ {int imm_data; } ;
struct ib_wc {int status; int byte_len; TYPE_1__ ex; scalar_t__ wr_id; } ;
struct TYPE_6__ {int f_sg; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 scalar_t__ FUNC_4 (struct rds_connection*) ;
 int FUNC_5 (struct rds_connection*,char*,int *,int *,int ,int ,int ) ;
 int FUNC_6 (struct rds_ib_connection*,TYPE_3__*) ;
 int FUNC_7 (struct rds_connection*,struct rds_ib_recv_work*,int ,struct rds_ib_ack_state*) ;
 int FUNC_8 (struct rds_connection*,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *) ;
 size_t FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,unsigned long long,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_15(struct rds_ib_connection *VAR_6,
        struct ib_wc *VAR_7,
        struct rds_ib_ack_state *VAR_8)
{
 struct rds_connection *VAR_9 = VAR_6->conn;
 struct rds_ib_recv_work *VAR_10;

 FUNC_14("wc wr_id 0x%llx status %u (%s) byte_len %u imm_data %u\n",
   (unsigned long long)VAR_7->wr_id, VAR_7->status,
   FUNC_2(VAR_7->status), VAR_7->byte_len,
   FUNC_0(VAR_7->ex.imm_data));

 FUNC_13(VAR_3);
 VAR_10 = &VAR_6->i_recvs[FUNC_12(&VAR_6->i_recv_ring)];
 FUNC_1(VAR_6->i_cm_id->device, &VAR_10->r_frag->f_sg, 1,
   VAR_0);





 if (VAR_7->status == VAR_2) {
  FUNC_7(VAR_9, VAR_10, VAR_7->byte_len, VAR_8);
 } else {

  if (FUNC_4(VAR_9) || FUNC_3(VAR_9))
   FUNC_5(VAR_9, "recv completion on <%pI6c,%pI6c, %d> had status %u (%s), disconnecting and reconnecting\n",
       &VAR_9->c_laddr, &VAR_9->c_faddr,
       VAR_9->c_tos, VAR_7->status,
       FUNC_2(VAR_7->status));
 }
 if (VAR_10->r_frag) {
  FUNC_6(VAR_6, VAR_10->r_frag);
  VAR_10->r_frag = ((void*)0);
 }
 FUNC_10(&VAR_6->i_recv_ring, 1);




 if (FUNC_9(&VAR_6->i_recv_ring))
  FUNC_13(VAR_5);

 if (FUNC_11(&VAR_6->i_recv_ring)) {
  FUNC_8(VAR_9, 0, VAR_1);
  FUNC_13(VAR_4);
 }
}
