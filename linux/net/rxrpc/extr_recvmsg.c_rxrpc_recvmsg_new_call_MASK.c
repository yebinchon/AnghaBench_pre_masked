
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int call_lock; int to_be_accepted; int recvmsg_lock; } ;
struct rxrpc_call {int accept_link; int recvmsg_link; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct msghdr*,int ,int ,int ,int*) ;
 int VAR_3 ;
 int FUNC_4 (struct rxrpc_call*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct rxrpc_call*,int ,int,int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct rxrpc_sock *VAR_5,
      struct rxrpc_call *VAR_6,
      struct msghdr *VAR_7, int VAR_8)
{
 int VAR_9 = 0, VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_2, VAR_1, 0, &VAR_9);

 if (VAR_10 == 0 && !(VAR_8 & VAR_0)) {
  FUNC_0("to be accepted");
  FUNC_7(&VAR_5->recvmsg_lock);
  FUNC_2(&VAR_6->recvmsg_link);
  FUNC_9(&VAR_5->recvmsg_lock);

  FUNC_4(VAR_6, VAR_3);
  FUNC_6(&VAR_5->call_lock);
  FUNC_1(&VAR_6->accept_link, &VAR_5->to_be_accepted);
  FUNC_8(&VAR_5->call_lock);
 }

 FUNC_5(VAR_6, VAR_4, 1, 0, 0, VAR_10);
 return VAR_10;
}
