
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {unsigned int sk_max_ack_backlog; } ;
struct TYPE_3__ {int sk_state; } ;
struct rxrpc_sock {TYPE_1__ sk; int * local; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ) ;



 int VAR_5 ;

 int FUNC_2 (char*,struct rxrpc_sock*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct rxrpc_sock*) ;
 int VAR_6 ;
 int FUNC_7 (struct rxrpc_sock*,int ) ;
 struct rxrpc_sock* FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct rxrpc_sock *VAR_10 = FUNC_8(VAR_9);
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 FUNC_2("%p,%d", VAR_10, VAR_8);

 FUNC_4(&VAR_10->sk);

 switch (VAR_10->sk.sk_state) {
 case 128:
  VAR_13 = -VAR_0;
  break;
 case 131:
 case 130:
  FUNC_0(VAR_10->local != ((void*)0));
  VAR_11 = FUNC_1(VAR_6);
  VAR_13 = -VAR_2;
  if (VAR_8 == VAR_4)
   VAR_8 = VAR_11;
  else if (VAR_8 < 0 || VAR_8 > VAR_11)
   break;
  VAR_12 = VAR_9->sk_max_ack_backlog;
  VAR_9->sk_max_ack_backlog = VAR_8;
  VAR_13 = FUNC_7(VAR_10, VAR_3);
  if (VAR_13 == 0)
   VAR_10->sk.sk_state = 129;
  else
   VAR_9->sk_max_ack_backlog = VAR_12;
  break;
 case 129:
  if (VAR_8 == 0) {
   VAR_10->sk.sk_state = VAR_5;
   VAR_9->sk_max_ack_backlog = 0;
   FUNC_6(VAR_10);
   VAR_13 = 0;
   break;
  }

 default:
  VAR_13 = -VAR_1;
  break;
 }

 FUNC_5(&VAR_10->sk);
 FUNC_3(" = %d", VAR_13);
 return VAR_13;
}
