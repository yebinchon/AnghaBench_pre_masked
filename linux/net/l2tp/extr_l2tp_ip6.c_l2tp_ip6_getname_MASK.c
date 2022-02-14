
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_l2tpip6 {scalar_t__ l2tp_scope_id; int l2tp_addr; scalar_t__ l2tp_conn_id; scalar_t__ l2tp_flowinfo; scalar_t__ l2tp_unused; int l2tp_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_bound_dev_if; int sk_v6_rcv_saddr; int sk_v6_daddr; } ;
struct l2tp_ip6_sock {scalar_t__ conn_id; scalar_t__ peer_conn_id; } ;
struct ipv6_pinfo {int saddr; scalar_t__ flow_label; scalar_t__ sndflow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct l2tp_ip6_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4,
       int VAR_5)
{
 struct sockaddr_l2tpip6 *VAR_6 = (struct sockaddr_l2tpip6 *)VAR_4;
 struct sock *VAR_7 = VAR_3->sk;
 struct ipv6_pinfo *VAR_8 = FUNC_0(VAR_7);
 struct l2tp_ip6_sock *VAR_9 = FUNC_3(VAR_7);

 VAR_6->l2tp_family = VAR_0;
 VAR_6->l2tp_flowinfo = 0;
 VAR_6->l2tp_scope_id = 0;
 VAR_6->l2tp_unused = 0;
 if (VAR_5) {
  if (!VAR_9->peer_conn_id)
   return -VAR_1;
  VAR_6->l2tp_conn_id = VAR_9->peer_conn_id;
  VAR_6->l2tp_addr = VAR_7->sk_v6_daddr;
  if (VAR_8->sndflow)
   VAR_6->l2tp_flowinfo = VAR_8->flow_label;
 } else {
  if (FUNC_1(&VAR_7->sk_v6_rcv_saddr))
   VAR_6->l2tp_addr = VAR_8->saddr;
  else
   VAR_6->l2tp_addr = VAR_7->sk_v6_rcv_saddr;

  VAR_6->l2tp_conn_id = VAR_9->conn_id;
 }
 if (FUNC_2(&VAR_6->l2tp_addr) & VAR_2)
  VAR_6->l2tp_scope_id = VAR_7->sk_bound_dev_if;
 return sizeof(*VAR_6);
}
