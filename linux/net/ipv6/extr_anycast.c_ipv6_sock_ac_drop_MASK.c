
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_ac_socklist* ipv6_ac_list; } ;
struct ipv6_ac_socklist {int acl_ifindex; int acl_addr; struct ipv6_ac_socklist* acl_next; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct net_device* FUNC_1 (struct net*,int) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int *,struct in6_addr const*) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (struct sock*,struct ipv6_ac_socklist*,int) ;
 struct net* FUNC_6 (struct sock*) ;

int FUNC_7(struct sock *VAR_1, int VAR_2, const struct in6_addr *VAR_3)
{
 struct ipv6_pinfo *VAR_4 = FUNC_2(VAR_1);
 struct net_device *VAR_5;
 struct ipv6_ac_socklist *VAR_6, *VAR_7;
 struct net *VAR_8 = FUNC_6(VAR_1);

 FUNC_0();

 VAR_7 = ((void*)0);
 for (VAR_6 = VAR_4->ipv6_ac_list; VAR_6; VAR_6 = VAR_6->acl_next) {
  if ((VAR_2 == 0 || VAR_6->acl_ifindex == VAR_2) &&
       FUNC_3(&VAR_6->acl_addr, VAR_3))
   break;
  VAR_7 = VAR_6;
 }
 if (!VAR_6)
  return -VAR_0;
 if (VAR_7)
  VAR_7->acl_next = VAR_6->acl_next;
 else
  VAR_4->ipv6_ac_list = VAR_6->acl_next;

 VAR_5 = FUNC_1(VAR_8, VAR_6->acl_ifindex);
 if (VAR_5)
  FUNC_4(VAR_5, &VAR_6->acl_addr);

 FUNC_5(VAR_1, VAR_6, sizeof(*VAR_6));
 return 0;
}
