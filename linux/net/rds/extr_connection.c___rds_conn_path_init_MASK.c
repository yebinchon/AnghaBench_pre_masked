
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_proposed_version; } ;
struct rds_conn_path {int cp_next_tx_seq; scalar_t__ cp_flags; int cp_cm_lock; int cp_down_w; int cp_conn_w; int cp_recv_w; int cp_send_w; struct rds_connection* cp_conn; scalar_t__ cp_reconnect_jiffies; scalar_t__ cp_send_gen; int cp_state; int cp_retrans; int cp_send_queue; int cp_waitq; int cp_lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rds_connection *VAR_6,
     struct rds_conn_path *VAR_7, bool VAR_8)
{
 FUNC_6(&VAR_7->cp_lock);
 VAR_7->cp_next_tx_seq = 1;
 FUNC_4(&VAR_7->cp_waitq);
 FUNC_1(&VAR_7->cp_send_queue);
 FUNC_1(&VAR_7->cp_retrans);

 VAR_7->cp_conn = VAR_6;
 FUNC_3(&VAR_7->cp_state, VAR_0);
 VAR_7->cp_send_gen = 0;
 VAR_7->cp_reconnect_jiffies = 0;
 VAR_7->cp_conn->c_proposed_version = VAR_1;
 FUNC_0(&VAR_7->cp_send_w, VAR_4);
 FUNC_0(&VAR_7->cp_recv_w, VAR_3);
 FUNC_0(&VAR_7->cp_conn_w, VAR_2);
 FUNC_2(&VAR_7->cp_down_w, VAR_5);
 FUNC_5(&VAR_7->cp_cm_lock);
 VAR_7->cp_flags = 0;
}
