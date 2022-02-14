
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr_rxrpc {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int sk_state; } ;
struct rxrpc_sock {TYPE_1__ sk; int flags; struct sockaddr_rxrpc connect_srx; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int FUNC_0 (char*,struct rxrpc_sock*,struct sockaddr*,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct rxrpc_sock* FUNC_4 (int ) ;
 int FUNC_5 (struct rxrpc_sock*,struct sockaddr_rxrpc*,int) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_3, struct sockaddr *VAR_4,
    int VAR_5, int VAR_6)
{
 struct sockaddr_rxrpc *VAR_7 = (struct sockaddr_rxrpc *)VAR_4;
 struct rxrpc_sock *VAR_8 = FUNC_4(VAR_3->sk);
 int VAR_9;

 FUNC_0("%p,%p,%d,%d", VAR_8, VAR_4, VAR_5, VAR_6);

 VAR_9 = FUNC_5(VAR_8, VAR_7, VAR_5);
 if (VAR_9 < 0) {
  FUNC_1(" = %d [bad addr]", VAR_9);
  return VAR_9;
 }

 FUNC_2(&VAR_8->sk);

 VAR_9 = -VAR_1;
 if (FUNC_7(VAR_2, &VAR_8->flags))
  goto error;

 switch (VAR_8->sk.sk_state) {
 case 128:
  VAR_8->sk.sk_state = 129;
 case 129:
 case 130:
  break;
 default:
  VAR_9 = -VAR_0;
  goto error;
 }

 VAR_8->connect_srx = *VAR_7;
 FUNC_6(VAR_2, &VAR_8->flags);
 VAR_9 = 0;

error:
 FUNC_3(&VAR_8->sk);
 return VAR_9;
}
