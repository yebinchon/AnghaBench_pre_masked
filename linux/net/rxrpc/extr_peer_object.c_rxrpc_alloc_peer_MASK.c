
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_peer {int cong_cwnd; int debug_id; int rtt_input_lock; int lock; int service_conn_lock; int service_conns; int error_targets; int local; int usage; } ;
struct rxrpc_local {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct rxrpc_peer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 struct rxrpc_peer* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct rxrpc_local*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct rxrpc_peer *FUNC_9(struct rxrpc_local *VAR_3, gfp_t VAR_4)
{
 struct rxrpc_peer *VAR_5;

 FUNC_1("");

 VAR_5 = FUNC_5(sizeof(struct rxrpc_peer), VAR_4);
 if (VAR_5) {
  FUNC_4(&VAR_5->usage, 1);
  VAR_5->local = FUNC_6(VAR_3);
  FUNC_0(&VAR_5->error_targets);
  VAR_5->service_conns = VAR_0;
  FUNC_7(&VAR_5->service_conn_lock);
  FUNC_8(&VAR_5->lock);
  FUNC_8(&VAR_5->rtt_input_lock);
  VAR_5->debug_id = FUNC_3(&VAR_2);

  if (VAR_1 > 2190)
   VAR_5->cong_cwnd = 2;
  else if (VAR_1 > 1095)
   VAR_5->cong_cwnd = 3;
  else
   VAR_5->cong_cwnd = 4;
 }

 FUNC_2(" = %p", VAR_5);
 return VAR_5;
}
