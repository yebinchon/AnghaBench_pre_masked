
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {int size_align; int debug_id; int idle_timestamp; int state_lock; int * security; int rx_queue; int link; int proc_link; int processor; int timer; int waiting_calls; int channel_lock; int cache_link; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct rxrpc_connection*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct rxrpc_connection* FUNC_5 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;

struct rxrpc_connection *FUNC_9(gfp_t VAR_5)
{
 struct rxrpc_connection *VAR_6;

 FUNC_2("");

 VAR_6 = FUNC_5(sizeof(struct rxrpc_connection), VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_6->cache_link);
  FUNC_7(&VAR_6->channel_lock);
  FUNC_0(&VAR_6->waiting_calls);
  FUNC_8(&VAR_6->timer, &VAR_1, 0);
  FUNC_1(&VAR_6->processor, &VAR_4);
  FUNC_0(&VAR_6->proc_link);
  FUNC_0(&VAR_6->link);
  FUNC_6(&VAR_6->rx_queue);
  VAR_6->security = &VAR_3;
  FUNC_7(&VAR_6->state_lock);
  VAR_6->debug_id = FUNC_4(&VAR_2);
  VAR_6->size_align = 4;
  VAR_6->idle_timestamp = VAR_0;
 }

 FUNC_3(" = %p{%d}", VAR_6, VAR_6 ? VAR_6->debug_id : 0);
 return VAR_6;
}
