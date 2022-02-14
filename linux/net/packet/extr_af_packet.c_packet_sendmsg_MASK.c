
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ pg_vec; } ;
struct packet_sock {TYPE_1__ tx_ring; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 (struct socket*,struct msghdr*,size_t) ;
 struct packet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct packet_sock*,struct msghdr*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_0, struct msghdr *VAR_1, size_t VAR_2)
{
 struct sock *VAR_3 = VAR_0->sk;
 struct packet_sock *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->tx_ring.pg_vec)
  return FUNC_2(VAR_4, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
