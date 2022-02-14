
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rds_message {scalar_t__ m_final_op; } ;
struct TYPE_7__ {int send_flags; } ;
struct rds_ib_send_work {scalar_t__ s_op; scalar_t__ s_queued; TYPE_2__ s_wr; } ;
struct TYPE_8__ {scalar_t__ w_nr; } ;
struct rds_ib_connection {TYPE_3__ i_send_ring; struct rds_ib_send_work* i_sends; scalar_t__ i_ack_queued; struct rds_connection* conn; } ;
struct rds_connection {int c_tos; int c_faddr; int c_laddr; int c_send_w; int c_map_queued; int c_flags; } ;
struct TYPE_6__ {int imm_data; } ;
struct ib_wc {scalar_t__ wr_id; int status; TYPE_1__ ex; int byte_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 int FUNC_4 (struct rds_ib_connection*) ;
 int FUNC_5 (struct rds_connection*,char*,int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 struct rds_message* FUNC_9 (struct rds_ib_connection*,struct rds_ib_send_work*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct rds_ib_connection*,int) ;
 int FUNC_12 (struct rds_message*) ;
 int FUNC_13 (struct rds_message*) ;
 int VAR_6 ;
 int FUNC_14 (char*,unsigned long long,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,scalar_t__) ;

void FUNC_18(struct rds_ib_connection *VAR_9, struct ib_wc *VAR_10)
{
 struct rds_message *VAR_11 = ((void*)0);
 struct rds_connection *VAR_12 = VAR_9->conn;
 struct rds_ib_send_work *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16 = 0;
 int VAR_17 = 0;


 FUNC_14("wc wr_id 0x%llx status %u (%s) byte_len %u imm_data %u\n",
   (unsigned long long)VAR_10->wr_id, VAR_10->status,
   FUNC_1(VAR_10->status), VAR_10->byte_len,
   FUNC_0(VAR_10->ex.imm_data));
 FUNC_10(VAR_7);

 if (VAR_10->wr_id == VAR_3) {
  if (FUNC_17(VAR_5, VAR_9->i_ack_queued + VAR_0 / 2))
   FUNC_10(VAR_8);
  FUNC_4(VAR_9);
  return;
 }

 VAR_15 = FUNC_8(&VAR_9->i_send_ring);

 VAR_14 = FUNC_6(&VAR_9->i_send_ring, VAR_10->wr_id, VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_13 = &VAR_9->i_sends[VAR_15];
  if (VAR_13->s_wr.send_flags & VAR_1)
   VAR_17++;

  VAR_11 = FUNC_9(VAR_9, VAR_13, VAR_10->status);

  if (FUNC_17(VAR_5, VAR_13->s_queued + VAR_0 / 2))
   FUNC_10(VAR_8);

  if (VAR_13->s_op) {
   if (VAR_13->s_op == VAR_11->m_final_op) {



    FUNC_13(VAR_11);
   }
   FUNC_12(VAR_11);
   VAR_13->s_op = ((void*)0);
  }

  VAR_15 = (VAR_15 + 1) % VAR_9->i_send_ring.w_nr;
 }

 FUNC_7(&VAR_9->i_send_ring, VAR_14);
 FUNC_11(VAR_9, VAR_17);
 VAR_17 = 0;

 if (FUNC_15(VAR_4, &VAR_12->c_flags) ||
     FUNC_16(0, &VAR_12->c_map_queued))
  FUNC_2(VAR_6, &VAR_12->c_send_w, 0);


 if (VAR_10->status != VAR_2 && FUNC_3(VAR_12)) {
  FUNC_5(VAR_12, "send completion on <%pI6c,%pI6c,%d> had status %u (%s), disconnecting and reconnecting\n",
      &VAR_12->c_laddr, &VAR_12->c_faddr,
      VAR_12->c_tos, VAR_10->status,
      FUNC_1(VAR_10->status));
 }
}
