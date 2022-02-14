
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_sndbuf; int sk_userlocks; } ;
struct rds_tcp_net {scalar_t__ sndbuf_size; scalar_t__ rcvbuf_size; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 struct rds_tcp_net* FUNC_1 (struct net*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct sock*) ;
 struct net* FUNC_4 (struct sock*) ;

void FUNC_5(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;
 struct net *VAR_5 = FUNC_4(VAR_4);
 struct rds_tcp_net *VAR_6 = FUNC_1(VAR_5, VAR_2);

 FUNC_2(VAR_3);
 FUNC_0(VAR_4);
 if (VAR_6->sndbuf_size > 0) {
  VAR_4->sk_sndbuf = VAR_6->sndbuf_size;
  VAR_4->sk_userlocks |= VAR_1;
 }
 if (VAR_6->rcvbuf_size > 0) {
  VAR_4->sk_sndbuf = VAR_6->rcvbuf_size;
  VAR_4->sk_userlocks |= VAR_0;
 }
 FUNC_3(VAR_4);
}
