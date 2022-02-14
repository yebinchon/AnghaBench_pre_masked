
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rds_tcp_net {int rds_tcp_accept_w; } ;
struct net {int dummy; } ;


 struct rds_tcp_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_2)
{
 struct net *VAR_3 = FUNC_2(VAR_2);
 struct rds_tcp_net *VAR_4 = FUNC_0(VAR_3, VAR_0);

 FUNC_1(VAR_1, &VAR_4->rds_tcp_accept_w);
}
