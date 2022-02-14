
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int a4; } ;
struct TYPE_5__ {int a4; } ;
struct xfrm_selector {int prefixlen_d; int prefixlen_s; int ifindex; int proto; int family; void* sport_mask; int sport; void* dport_mask; int dport; TYPE_3__ saddr; TYPE_2__ daddr; } ;
struct flowi4 {int flowi4_oif; int flowi4_proto; int uli; int saddr; int daddr; } ;
struct TYPE_4__ {struct flowi4 ip4; } ;
struct flowi {TYPE_1__ u; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct flowi const*,int *) ;
 int FUNC_2 (struct flowi const*,int *) ;

__attribute__((used)) static void
FUNC_3(struct xfrm_selector *VAR_1, const struct flowi *VAR_2)
{
 const struct flowi4 *VAR_3 = &VAR_2->u.ip4;

 VAR_1->daddr.a4 = VAR_3->daddr;
 VAR_1->saddr.a4 = VAR_3->saddr;
 VAR_1->dport = FUNC_1(VAR_2, &VAR_3->uli);
 VAR_1->dport_mask = FUNC_0(0xffff);
 VAR_1->sport = FUNC_2(VAR_2, &VAR_3->uli);
 VAR_1->sport_mask = FUNC_0(0xffff);
 VAR_1->family = VAR_0;
 VAR_1->prefixlen_d = 32;
 VAR_1->prefixlen_s = 32;
 VAR_1->proto = VAR_3->flowi4_proto;
 VAR_1->ifindex = VAR_3->flowi4_oif;
}
