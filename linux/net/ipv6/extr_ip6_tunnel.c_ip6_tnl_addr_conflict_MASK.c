
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipv6hdr {int saddr; } ;
struct TYPE_2__ {int raddr; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline bool
FUNC_1(const struct ip6_tnl *VAR_0, const struct ipv6hdr *VAR_1)
{
 return FUNC_0(&VAR_0->parms.raddr, &VAR_1->saddr);
}
