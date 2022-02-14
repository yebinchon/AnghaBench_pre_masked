
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct rxrpc_call {int user_mutex; int notify_lock; scalar_t__ notify_rx; int usage; int debug_id; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct rxrpc_call*,int ) ;
 int FUNC_5 (int ,struct rxrpc_call*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct socket *VAR_2, struct rxrpc_call *VAR_3)
{
 FUNC_0("%d{%d}", VAR_3->debug_id, FUNC_1(&VAR_3->usage));

 FUNC_2(&VAR_3->user_mutex);
 FUNC_5(FUNC_6(VAR_2->sk), VAR_3);


 if (VAR_3->notify_rx) {
  FUNC_7(&VAR_3->notify_lock);
  VAR_3->notify_rx = VAR_1;
  FUNC_8(&VAR_3->notify_lock);
 }

 FUNC_3(&VAR_3->user_mutex);
 FUNC_4(VAR_3, VAR_0);
}
