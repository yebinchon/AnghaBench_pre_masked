
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct rds_tcp_net {struct socket* rds_tcp_listen_sock; } ;
struct net {int dummy; } ;
struct TYPE_2__ {void* sk_user_data; } ;


 struct rds_tcp_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;

void *FUNC_1(struct net *VAR_1)
{
 struct rds_tcp_net *VAR_2 = FUNC_0(VAR_1, VAR_0);
 struct socket *VAR_3 = VAR_2->rds_tcp_listen_sock;

 if (!VAR_3)
  return ((void*)0);

 return VAR_3->sk->sk_user_data;
}
