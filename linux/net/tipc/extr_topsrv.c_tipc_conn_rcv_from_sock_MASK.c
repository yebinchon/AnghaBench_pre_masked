
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_topsrv {int dummy; } ;
struct tipc_subscr {int dummy; } ;
struct tipc_conn {TYPE_1__* sock; struct tipc_topsrv* server; } ;
struct sock {int sk_callback_lock; } ;
struct msghdr {int msg_iter; int * msg_name; } ;
struct kvec {int iov_len; struct tipc_subscr* iov_base; } ;
typedef int s ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct kvec*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct msghdr*,int ) ;
 int FUNC_4 (struct tipc_conn*) ;
 int FUNC_5 (struct tipc_topsrv*,struct tipc_conn*,struct tipc_subscr*) ;

__attribute__((used)) static int FUNC_6(struct tipc_conn *VAR_3)
{
 struct tipc_topsrv *VAR_4 = VAR_3->server;
 struct sock *VAR_5 = VAR_3->sock->sk;
 struct msghdr VAR_6 = {};
 struct tipc_subscr VAR_7;
 struct kvec VAR_8;
 int VAR_9;

 VAR_8.iov_base = &VAR_7;
 VAR_8.iov_len = sizeof(VAR_7);
 VAR_6.msg_name = ((void*)0);
 FUNC_0(&VAR_6.msg_iter, VAR_2, &VAR_8, 1, VAR_8.iov_len);
 VAR_9 = FUNC_3(VAR_3->sock, &VAR_6, VAR_1);
 if (VAR_9 == -VAR_0)
  return -VAR_0;
 if (VAR_9 == sizeof(VAR_7)) {
  FUNC_1(&VAR_5->sk_callback_lock);
  VAR_9 = FUNC_5(VAR_4, VAR_3, &VAR_7);
  FUNC_2(&VAR_5->sk_callback_lock);
 }
 if (VAR_9 < 0)
  FUNC_4(VAR_3);

 return VAR_9;
}
