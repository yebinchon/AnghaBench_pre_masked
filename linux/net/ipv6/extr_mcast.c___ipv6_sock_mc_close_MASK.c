
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {int ipv6_mc_list; } ;
struct ipv6_mc_socklist {int addr; int ifindex; int next; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 () ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct inet6_dev*,int *) ;
 int FUNC_4 (int,int *) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct ipv6_mc_socklist*,struct inet6_dev*) ;
 int FUNC_7 (struct ipv6_mc_socklist*,int ) ;
 int VAR_0 ;
 struct ipv6_mc_socklist* FUNC_8 (int ) ;
 struct net* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_1)
{
 struct ipv6_pinfo *VAR_2 = FUNC_5(VAR_1);
 struct ipv6_mc_socklist *VAR_3;
 struct net *VAR_4 = FUNC_9(VAR_1);

 FUNC_0();

 while ((VAR_3 = FUNC_8(VAR_2->ipv6_mc_list)) != ((void*)0)) {
  struct net_device *VAR_5;

  VAR_2->ipv6_mc_list = VAR_3->next;

  VAR_5 = FUNC_1(VAR_4, VAR_3->ifindex);
  if (VAR_5) {
   struct inet6_dev *VAR_6 = FUNC_2(VAR_5);

   (void) FUNC_6(VAR_1, VAR_3, VAR_6);
   if (VAR_6)
    FUNC_3(VAR_6, &VAR_3->addr);
  } else
   (void) FUNC_6(VAR_1, VAR_3, ((void*)0));

  FUNC_4(sizeof(*VAR_3), &VAR_1->sk_omem_alloc);
  FUNC_7(VAR_3, VAR_0);
 }
}
