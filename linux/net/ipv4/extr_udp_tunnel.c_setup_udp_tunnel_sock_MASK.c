
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_tunnel_sock_cfg {int gro_complete; int gro_receive; int encap_destroy; int encap_err_lookup; int encap_rcv; int encap_type; int sk_user_data; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {scalar_t__ mc_loop; } ;
struct TYPE_3__ {int gro_complete; int gro_receive; int encap_destroy; int encap_err_lookup; int encap_rcv; int encap_type; } ;


 int FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*) ;

void FUNC_5(struct net *VAR_0, struct socket *VAR_1,
      struct udp_tunnel_sock_cfg *VAR_2)
{
 struct sock *VAR_3 = VAR_1->sk;


 FUNC_1(VAR_3)->mc_loop = 0;


 FUNC_0(VAR_3);

 FUNC_2(VAR_3, VAR_2->sk_user_data);

 FUNC_3(VAR_3)->encap_type = VAR_2->encap_type;
 FUNC_3(VAR_3)->encap_rcv = VAR_2->encap_rcv;
 FUNC_3(VAR_3)->encap_err_lookup = VAR_2->encap_err_lookup;
 FUNC_3(VAR_3)->encap_destroy = VAR_2->encap_destroy;
 FUNC_3(VAR_3)->gro_receive = VAR_2->gro_receive;
 FUNC_3(VAR_3)->gro_complete = VAR_2->gro_complete;

 FUNC_4(VAR_1);
}
