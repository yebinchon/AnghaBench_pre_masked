
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct sock {int sk_state; TYPE_2__ sk_receive_queue; int sk_shutdown; int sk_refcnt; } ;
struct rxrpc_sock {int * securities; int * key; TYPE_1__* local; } ;
struct TYPE_3__ {int service_closed; int services_lock; int service; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*,struct sock*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct rxrpc_sock* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rxrpc_sock*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct rxrpc_sock*) ;
 struct rxrpc_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_3)
{
 struct rxrpc_sock *VAR_4 = FUNC_10(VAR_3);

 FUNC_0("%p{%d,%d}", VAR_3, VAR_3->sk_state, FUNC_6(&VAR_3->sk_refcnt));


 FUNC_12(VAR_3);
 VAR_3->sk_shutdown = VAR_1;





 switch (VAR_3->sk_state) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_4->local->service_closed = 1;
  break;
 }

 FUNC_14(&VAR_3->sk_receive_queue.lock);
 VAR_3->sk_state = VAR_0;
 FUNC_15(&VAR_3->sk_receive_queue.lock);

 if (VAR_4->local && FUNC_4(VAR_4->local->service) == VAR_4) {
  FUNC_16(&VAR_4->local->services_lock);
  FUNC_5(VAR_4->local->service, ((void*)0));
  FUNC_17(&VAR_4->local->services_lock);
 }


 FUNC_7(VAR_4);
 FUNC_9(VAR_4);
 FUNC_2(VAR_2);
 FUNC_8(&VAR_3->sk_receive_queue);

 FUNC_11(VAR_4->local);
 VAR_4->local = ((void*)0);
 FUNC_3(VAR_4->key);
 VAR_4->key = ((void*)0);
 FUNC_3(VAR_4->securities);
 VAR_4->securities = ((void*)0);
 FUNC_13(VAR_3);

 FUNC_1(" = 0");
 return 0;
}
