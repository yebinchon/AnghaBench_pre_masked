
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct socket {int sk; } ;
struct sockaddr_rxrpc {int srx_service; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int sk_state; } ;
struct rxrpc_sock {TYPE_1__ sk; int second_service; struct sockaddr_rxrpc srx; struct rxrpc_local* local; } ;
struct rxrpc_local {int services_lock; int service; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rxrpc_local*) ;
 int FUNC_1 (struct rxrpc_local*) ;
 int VAR_2 ;

 int VAR_3 ;

 int FUNC_2 (char*,struct rxrpc_sock*,struct sockaddr*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct sockaddr_rxrpc*,struct sockaddr_rxrpc*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct rxrpc_sock*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct rxrpc_local* FUNC_9 (int ,struct sockaddr_rxrpc*) ;
 struct rxrpc_sock* FUNC_10 (int ) ;
 int FUNC_11 (struct rxrpc_local*) ;
 int FUNC_12 (struct rxrpc_sock*,struct sockaddr_rxrpc*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct sockaddr_rxrpc *VAR_7 = (struct sockaddr_rxrpc *)VAR_5;
 struct rxrpc_local *VAR_8;
 struct rxrpc_sock *VAR_9 = FUNC_10(VAR_4->sk);
 u16 VAR_10;
 int VAR_11;

 FUNC_2("%p,%p,%d", VAR_9, VAR_5, VAR_6);

 VAR_11 = FUNC_12(VAR_9, VAR_7, VAR_6);
 if (VAR_11 < 0)
  goto error;
 VAR_10 = VAR_7->srx_service;

 FUNC_4(&VAR_9->sk);

 switch (VAR_9->sk.sk_state) {
 case 128:
  VAR_9->srx = *VAR_7;
  VAR_8 = FUNC_9(FUNC_13(&VAR_9->sk), &VAR_9->srx);
  if (FUNC_0(VAR_8)) {
   VAR_11 = FUNC_1(VAR_8);
   goto error_unlock;
  }

  if (VAR_10) {
   FUNC_14(&VAR_8->services_lock);
   if (FUNC_6(VAR_8->service))
    goto service_in_use;
   VAR_9->local = VAR_8;
   FUNC_7(VAR_8->service, VAR_9);
   FUNC_15(&VAR_8->services_lock);

   VAR_9->sk.sk_state = 129;
  } else {
   VAR_9->local = VAR_8;
   VAR_9->sk.sk_state = VAR_2;
  }
  break;

 case 129:
  VAR_11 = -VAR_1;
  if (VAR_10 == 0)
   goto error_unlock;
  VAR_11 = -VAR_0;
  if (VAR_10 == VAR_9->srx.srx_service)
   goto error_unlock;
  VAR_11 = -VAR_1;
  VAR_7->srx_service = VAR_9->srx.srx_service;
  if (FUNC_5(VAR_7, &VAR_9->srx, sizeof(*VAR_7)) != 0)
   goto error_unlock;
  VAR_9->second_service = VAR_10;
  VAR_9->sk.sk_state = VAR_3;
  break;

 default:
  VAR_11 = -VAR_1;
  goto error_unlock;
 }

 FUNC_8(&VAR_9->sk);
 FUNC_3(" = 0");
 return 0;

service_in_use:
 FUNC_15(&VAR_8->services_lock);
 FUNC_11(VAR_8);
 VAR_11 = -VAR_0;
error_unlock:
 FUNC_8(&VAR_9->sk);
error:
 FUNC_3(" = %d", VAR_11);
 return VAR_11;
}
