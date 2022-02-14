
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nexthop {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib6_result {int dummy; } ;
struct fib6_nh_dm_arg {int oif; int flags; struct fib6_nh* nh; struct in6_addr const* saddr; struct net* net; } ;
struct fib6_nh {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nexthop*,int ,struct fib6_nh_dm_arg*) ;
 scalar_t__ FUNC_1 (struct nexthop*) ;

__attribute__((used)) static struct fib6_nh *FUNC_2(struct net *VAR_1, struct nexthop *VAR_2,
     struct fib6_result *VAR_3,
     const struct in6_addr *VAR_4,
     int VAR_5, int VAR_6)
{
 struct fib6_nh_dm_arg VAR_7 = {
  .net = VAR_1,
  .saddr = VAR_4,
  .oif = VAR_5,
  .flags = VAR_6,
 };

 if (FUNC_1(VAR_2))
  return ((void*)0);

 if (FUNC_0(VAR_2, VAR_0, &VAR_7))
  return VAR_7.nh;

 return ((void*)0);
}
