
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct __ip6_tnl_parm {int flags; int name; scalar_t__ link; scalar_t__ collect_md; } ;
struct ip6_tnl {struct __ip6_tnl_parm parms; struct net* net; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (struct ip6_tnl*,struct in6_addr const*,struct in6_addr const*) ;
 int FUNC_2 (struct in6_addr const*) ;
 int FUNC_3 (struct net*,struct in6_addr const*,struct net_device*,int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ip6_tnl *VAR_4,
       const struct in6_addr *VAR_5,
       const struct in6_addr *VAR_6)
{
 struct __ip6_tnl_parm *VAR_7 = &VAR_4->parms;
 int VAR_8 = 0;
 struct net *VAR_9 = VAR_4->net;

 if (VAR_4->parms.collect_md)
  return 1;

 if ((VAR_7->flags & VAR_3) ||
     ((VAR_7->flags & VAR_2) &&
      (FUNC_1(VAR_4, VAR_5, VAR_6) & VAR_3))) {
  struct net_device *VAR_10 = ((void*)0);

  FUNC_5();
  if (VAR_7->link)
   VAR_10 = FUNC_0(VAR_9, VAR_7->link);

  if (FUNC_7(!FUNC_3(VAR_9, VAR_5, VAR_10, 0,
            0, VAR_0)))
   FUNC_4("%s xmit: Local address not yet configured!\n",
    VAR_7->name);
  else if (!(VAR_7->flags & VAR_1) &&
    !FUNC_2(VAR_6) &&
    FUNC_7(FUNC_3(VAR_9, VAR_6, VAR_10,
         1, 0, VAR_0)))
   FUNC_4("%s xmit: Routing loop! Remote address found on this node!\n",
    VAR_7->name);
  else
   VAR_8 = 1;
  FUNC_6();
 }
 return VAR_8;
}
