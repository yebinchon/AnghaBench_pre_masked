
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_l2tpip {TYPE_1__ l2tp_addr; int l2tp_conn_id; int l2tp_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct l2tp_ip_sock {int conn_id; int peer_conn_id; } ;
struct inet_sock {scalar_t__ inet_saddr; scalar_t__ inet_rcv_saddr; scalar_t__ inet_daddr; int inet_dport; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 struct l2tp_ip_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sockaddr_l2tpip*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_2, struct sockaddr *VAR_3,
      int VAR_4)
{
 struct sock *VAR_5 = VAR_2->sk;
 struct inet_sock *VAR_6 = FUNC_0(VAR_5);
 struct l2tp_ip_sock *VAR_7 = FUNC_1(VAR_5);
 struct sockaddr_l2tpip *VAR_8 = (struct sockaddr_l2tpip *)VAR_3;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->l2tp_family = VAR_0;
 if (VAR_4) {
  if (!VAR_6->inet_dport)
   return -VAR_1;
  VAR_8->l2tp_conn_id = VAR_7->peer_conn_id;
  VAR_8->l2tp_addr.s_addr = VAR_6->inet_daddr;
 } else {
  __be32 VAR_9 = VAR_6->inet_rcv_saddr;
  if (!VAR_9)
   VAR_9 = VAR_6->inet_saddr;
  VAR_8->l2tp_conn_id = VAR_7->conn_id;
  VAR_8->l2tp_addr.s_addr = VAR_9;
 }
 return sizeof(*VAR_8);
}
