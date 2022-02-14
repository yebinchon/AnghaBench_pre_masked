
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6addrlbl_entry {int ifindex; int addrtype; int prefixlen; int prefix; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr const*,int *,int ) ;

__attribute__((used)) static bool FUNC_1(const struct ip6addrlbl_entry *VAR_0,
          const struct in6_addr *VAR_1,
          int VAR_2, int VAR_3)
{
 if (VAR_0->ifindex && VAR_0->ifindex != VAR_3)
  return 0;
 if (VAR_0->addrtype && VAR_0->addrtype != VAR_2)
  return 0;
 if (!FUNC_0(VAR_1, &VAR_0->prefix, VAR_0->prefixlen))
  return 0;
 return 1;
}
