
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_omem_alloc; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ imr_multiaddr; int imr_ifindex; } ;
struct ip_mc_socklist {TYPE_2__ multi; scalar_t__ next_rcu; } ;
struct inet_sock {scalar_t__ mc_list; } ;
struct in_device {int dummy; } ;


 int FUNC_0 (int,int *) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 struct in_device* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct in_device*,int ) ;
 int FUNC_4 (struct sock*,struct ip_mc_socklist*,struct in_device*) ;
 int FUNC_5 (struct ip_mc_socklist*,int ) ;
 int VAR_0 ;
 struct ip_mc_socklist* FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct net* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_1(VAR_1);
 struct ip_mc_socklist *VAR_3;
 struct net *VAR_4 = FUNC_9(VAR_1);

 if (!VAR_2->mc_list)
  return;

 FUNC_7();
 while ((VAR_3 = FUNC_6(VAR_2->mc_list)) != ((void*)0)) {
  struct in_device *VAR_5;

  VAR_2->mc_list = VAR_3->next_rcu;
  VAR_5 = FUNC_2(VAR_4, VAR_3->multi.imr_ifindex);
  (void) FUNC_4(VAR_1, VAR_3, VAR_5);
  if (VAR_5)
   FUNC_3(VAR_5, VAR_3->multi.imr_multiaddr.s_addr);

  FUNC_0(sizeof(*VAR_3), &VAR_1->sk_omem_alloc);
  FUNC_5(VAR_3, VAR_0);
 }
 FUNC_8();
}
