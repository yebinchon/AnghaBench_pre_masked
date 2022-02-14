
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_bound_dev_if; scalar_t__ sk_family; } ;
struct net_device {scalar_t__ ifindex; } ;
struct ipv6_pinfo {scalar_t__ mcast_oif; } ;
struct inet_sock {scalar_t__ mc_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_2, struct net_device *VAR_3)
{
 struct inet_sock *VAR_4 = FUNC_1(VAR_2);

 if (VAR_2->sk_bound_dev_if && VAR_3->ifindex != VAR_2->sk_bound_dev_if)
  return -VAR_1;

 FUNC_2(VAR_2);
 VAR_4->mc_index = VAR_3->ifindex;
 FUNC_3(VAR_2);

 return 0;
}
