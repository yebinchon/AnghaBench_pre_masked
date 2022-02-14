
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int dummy; } ;
struct rds_ib_connection {scalar_t__ i_ack_recv; int i_recv_wc; int i_recv_cq; int i_cq_quiesce; struct rds_ib_device* rds_ibdev; struct rds_connection* conn; } ;
struct rds_ib_ack_state {scalar_t__ ack_recv; scalar_t__ ack_recv_valid; int ack_required; int ack_next; scalar_t__ ack_next_valid; } ;
struct rds_connection {int dummy; } ;
typedef int state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rds_ib_ack_state*,int ,int) ;
 int FUNC_3 (struct rds_ib_connection*,int ,int ,struct rds_ib_ack_state*) ;
 int FUNC_4 (struct rds_connection*) ;
 scalar_t__ FUNC_5 (struct rds_connection*) ;
 int FUNC_6 (struct rds_ib_connection*) ;
 int FUNC_7 (struct rds_ib_connection*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rds_connection*,scalar_t__,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_2)
{
 struct rds_ib_connection *VAR_3 = (struct rds_ib_connection *)VAR_2;
 struct rds_connection *VAR_4 = VAR_3->conn;
 struct rds_ib_device *VAR_5 = VAR_3->rds_ibdev;
 struct rds_ib_ack_state VAR_6;

 if (!VAR_5)
  FUNC_4(VAR_4);

 FUNC_8(VAR_1);


 if (FUNC_0(&VAR_3->i_cq_quiesce))
  return;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_3, VAR_3->i_recv_cq, VAR_3->i_recv_wc, &VAR_6);
 FUNC_1(VAR_3->i_recv_cq, VAR_0);
 FUNC_3(VAR_3, VAR_3->i_recv_cq, VAR_3->i_recv_wc, &VAR_6);

 if (VAR_6.ack_next_valid)
  FUNC_7(VAR_3, VAR_6.ack_next, VAR_6.ack_required);
 if (VAR_6.ack_recv_valid && VAR_6.ack_recv > VAR_3->i_ack_recv) {
  FUNC_9(VAR_4, VAR_6.ack_recv, ((void*)0));
  VAR_3->i_ack_recv = VAR_6.ack_recv;
 }

 if (FUNC_5(VAR_4))
  FUNC_6(VAR_3);
}
