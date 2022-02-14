
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_in6 {int sin6_addr; scalar_t__ sin6_scope_id; scalar_t__ sin6_port; scalar_t__ sin6_flowinfo; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; int sk_bound_dev_if; int sk_v6_rcv_saddr; int sk_v6_daddr; } ;
struct ipv6_pinfo {int saddr; scalar_t__ flow_label; scalar_t__ sndflow; } ;
struct inet_sock {scalar_t__ inet_sport; scalar_t__ inet_dport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

int FUNC_4(struct socket *VAR_4, struct sockaddr *VAR_5,
   int VAR_6)
{
 struct sockaddr_in6 *VAR_7 = (struct sockaddr_in6 *)VAR_5;
 struct sock *VAR_8 = VAR_4->sk;
 struct inet_sock *VAR_9 = FUNC_1(VAR_8);
 struct ipv6_pinfo *VAR_10 = FUNC_0(VAR_8);

 VAR_7->sin6_family = VAR_0;
 VAR_7->sin6_flowinfo = 0;
 VAR_7->sin6_scope_id = 0;
 if (VAR_6) {
  if (!VAR_9->inet_dport)
   return -VAR_1;
  if (((1 << VAR_8->sk_state) & (VAR_2 | VAR_3)) &&
      VAR_6 == 1)
   return -VAR_1;
  VAR_7->sin6_port = VAR_9->inet_dport;
  VAR_7->sin6_addr = VAR_8->sk_v6_daddr;
  if (VAR_10->sndflow)
   VAR_7->sin6_flowinfo = VAR_10->flow_label;
 } else {
  if (FUNC_2(&VAR_8->sk_v6_rcv_saddr))
   VAR_7->sin6_addr = VAR_10->saddr;
  else
   VAR_7->sin6_addr = VAR_8->sk_v6_rcv_saddr;

  VAR_7->sin6_port = VAR_9->inet_sport;
 }
 VAR_7->sin6_scope_id = FUNC_3(&VAR_7->sin6_addr,
       VAR_8->sk_bound_dev_if);
 return sizeof(*VAR_7);
}
