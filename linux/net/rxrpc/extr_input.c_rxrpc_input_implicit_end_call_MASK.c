
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int incoming_lock; } ;
struct rxrpc_connection {int dummy; } ;
struct rxrpc_call {int events; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (struct rxrpc_connection*,struct rxrpc_call*) ;
 int FUNC_2 (char*,struct rxrpc_call*,int ,int ,int ) ;
 int FUNC_3 (struct rxrpc_call*) ;
 int FUNC_4 (struct rxrpc_call*) ;
 int FUNC_5 (struct rxrpc_call*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rxrpc_call*) ;

__attribute__((used)) static void FUNC_10(struct rxrpc_sock *VAR_3,
       struct rxrpc_connection *VAR_4,
       struct rxrpc_call *VAR_5)
{
 switch (FUNC_0(VAR_5->state)) {
 case 128:
  FUNC_3(VAR_5);

 case 129:
  break;
 default:
  if (FUNC_2("IMP", VAR_5, 0, VAR_2, -VAR_0)) {
   FUNC_6(VAR_1, &VAR_5->events);
   FUNC_5(VAR_5);
  }
  FUNC_9(VAR_5);
  break;
 }

 FUNC_7(&VAR_3->incoming_lock);
 FUNC_1(VAR_4, VAR_5);
 FUNC_8(&VAR_3->incoming_lock);
 FUNC_4(VAR_5);
}
