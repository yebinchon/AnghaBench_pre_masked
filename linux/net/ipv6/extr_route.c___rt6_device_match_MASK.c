
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib6_nh {int fib_nh_flags; struct net_device* fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,struct in6_addr const*,struct net_device const*,int) ;

__attribute__((used)) static bool FUNC_1(struct net *VAR_2, const struct fib6_nh *VAR_3,
          const struct in6_addr *VAR_4, int VAR_5, int VAR_6)
{
 const struct net_device *VAR_7;

 if (VAR_3->fib_nh_flags & VAR_1)
  return 0;

 VAR_7 = VAR_3->fib_nh_dev;
 if (VAR_5) {
  if (VAR_7->ifindex == VAR_5)
   return 1;
 } else {
  if (FUNC_0(VAR_2, VAR_4, VAR_7,
      VAR_6 & VAR_0))
   return 1;
 }

 return 0;
}
