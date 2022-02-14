
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int sk_v6_rcv_saddr; int sk_bound_dev_if; int sk_v6_daddr; } ;
struct net {int dummy; } ;
struct inet_sock {scalar_t__ inet_dport; } ;
struct in6_addr {int dummy; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {unsigned short udp_port_hash; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,struct in6_addr const*,struct in6_addr const*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct in6_addr const*) ;
 int FUNC_4 (int ,struct net*) ;
 int FUNC_5 (struct sock*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct net*,int ,int,int) ;

__attribute__((used)) static bool FUNC_8(struct net *VAR_1, struct sock *VAR_2,
       __be16 VAR_3, const struct in6_addr *VAR_4,
       __be16 VAR_5, const struct in6_addr *VAR_6,
       int VAR_7, int VAR_8, unsigned short VAR_9)
{
 struct inet_sock *VAR_10 = FUNC_1(VAR_2);

 if (!FUNC_4(FUNC_5(VAR_2), VAR_1))
  return 0;

 if (FUNC_6(VAR_2)->udp_port_hash != VAR_9 ||
     VAR_2->sk_family != VAR_0 ||
     (VAR_10->inet_dport && VAR_10->inet_dport != VAR_5) ||
     (!FUNC_2(&VAR_2->sk_v6_daddr) &&
      !FUNC_3(&VAR_2->sk_v6_daddr, VAR_6)) ||
     !FUNC_7(VAR_1, VAR_2->sk_bound_dev_if, VAR_7, VAR_8) ||
     (!FUNC_2(&VAR_2->sk_v6_rcv_saddr) &&
      !FUNC_3(&VAR_2->sk_v6_rcv_saddr, VAR_4)))
  return 0;
 if (!FUNC_0(VAR_2, VAR_4, VAR_6))
  return 0;
 return 1;
}
