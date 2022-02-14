
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_selector {int prefixlen_d; int prefixlen_s; int ifindex; int proto; int family; void* sport_mask; int sport; void* dport_mask; int dport; int saddr; int daddr; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_oif; int flowi6_proto; int uli; struct in6_addr saddr; struct in6_addr daddr; } ;
struct TYPE_2__ {struct flowi6 ip6; } ;
struct flowi {TYPE_1__ u; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct flowi const*,int *) ;
 int FUNC_2 (struct flowi const*,int *) ;

__attribute__((used)) static void
FUNC_3(struct xfrm_selector *VAR_1, const struct flowi *VAR_2)
{
 const struct flowi6 *VAR_3 = &VAR_2->u.ip6;


 *(struct in6_addr *)&VAR_1->daddr = VAR_3->daddr;
 *(struct in6_addr *)&VAR_1->saddr = VAR_3->saddr;
 VAR_1->dport = FUNC_1(VAR_2, &VAR_3->uli);
 VAR_1->dport_mask = FUNC_0(0xffff);
 VAR_1->sport = FUNC_2(VAR_2, &VAR_3->uli);
 VAR_1->sport_mask = FUNC_0(0xffff);
 VAR_1->family = VAR_0;
 VAR_1->prefixlen_d = 128;
 VAR_1->prefixlen_s = 128;
 VAR_1->proto = VAR_3->flowi6_proto;
 VAR_1->ifindex = VAR_3->flowi6_oif;
}
