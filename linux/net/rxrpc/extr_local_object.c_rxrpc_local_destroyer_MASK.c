
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct rxrpc_net {int service_conn_reaper; int local_mutex; } ;
struct rxrpc_local {int dead; int event_queue; int reject_queue; struct socket* socket; int service; int link; int debug_id; struct rxrpc_net* rxnet; } ;
struct TYPE_2__ {int * sk_user_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rxrpc_local*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct socket*) ;

__attribute__((used)) static void FUNC_10(struct rxrpc_local *VAR_1)
{
 struct socket *VAR_2 = VAR_1->socket;
 struct rxrpc_net *VAR_3 = VAR_1->rxnet;

 FUNC_1("%d", VAR_1->debug_id);

 VAR_1->dead = 1;

 FUNC_4(&VAR_3->local_mutex);
 FUNC_3(&VAR_1->link);
 FUNC_5(&VAR_3->local_mutex);

 FUNC_6(VAR_1);
 FUNC_8(&VAR_3->service_conn_reaper);
 FUNC_0(!VAR_1->service);

 if (VAR_2) {
  VAR_1->socket = ((void*)0);
  FUNC_2(VAR_2, VAR_0);
  VAR_2->sk->sk_user_data = ((void*)0);
  FUNC_9(VAR_2);
 }




 FUNC_7(&VAR_1->reject_queue);
 FUNC_7(&VAR_1->event_queue);
}
