
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_ac_socklist* ipv6_ac_list; } ;
struct ipv6_ac_socklist {int acl_ifindex; int acl_addr; struct ipv6_ac_socklist* acl_next; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*,struct ipv6_ac_socklist*,int) ;
 struct net* FUNC_6 (struct sock*) ;

void FUNC_7(struct sock *VAR_0)
{
 struct ipv6_pinfo *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = ((void*)0);
 struct ipv6_ac_socklist *VAR_3;
 struct net *VAR_4 = FUNC_6(VAR_0);
 int VAR_5;

 if (!VAR_1->ipv6_ac_list)
  return;

 FUNC_3();
 VAR_3 = VAR_1->ipv6_ac_list;
 VAR_1->ipv6_ac_list = ((void*)0);

 VAR_5 = 0;
 while (VAR_3) {
  struct ipv6_ac_socklist *VAR_6 = VAR_3->acl_next;

  if (VAR_3->acl_ifindex != VAR_5) {
   VAR_2 = FUNC_0(VAR_4, VAR_3->acl_ifindex);
   VAR_5 = VAR_3->acl_ifindex;
  }
  if (VAR_2)
   FUNC_2(VAR_2, &VAR_3->acl_addr);
  FUNC_5(VAR_0, VAR_3, sizeof(*VAR_3));
  VAR_3 = VAR_6;
 }
 FUNC_4();
}
