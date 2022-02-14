
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int a4; } ;
struct TYPE_5__ {int a4; } ;
struct xfrm_selector {int dport; int dport_mask; int sport; int sport_mask; scalar_t__ proto; scalar_t__ ifindex; int prefixlen_s; TYPE_3__ saddr; int prefixlen_d; TYPE_2__ daddr; } ;
struct flowi4 {scalar_t__ flowi4_proto; scalar_t__ flowi4_oif; int uli; int saddr; int daddr; } ;
struct TYPE_4__ {struct flowi4 ip4; } ;
struct flowi {TYPE_1__ u; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct flowi const*,int *) ;
 int FUNC_2 (struct flowi const*,int *) ;

__attribute__((used)) static inline bool
FUNC_3(const struct xfrm_selector *VAR_0, const struct flowi *VAR_1)
{
 const struct flowi4 *VAR_2 = &VAR_1->u.ip4;

 return FUNC_0(VAR_2->daddr, VAR_0->daddr.a4, VAR_0->prefixlen_d) &&
  FUNC_0(VAR_2->saddr, VAR_0->saddr.a4, VAR_0->prefixlen_s) &&
  !((FUNC_1(VAR_1, &VAR_2->uli) ^ VAR_0->dport) & VAR_0->dport_mask) &&
  !((FUNC_2(VAR_1, &VAR_2->uli) ^ VAR_0->sport) & VAR_0->sport_mask) &&
  (VAR_2->flowi4_proto == VAR_0->proto || !VAR_0->proto) &&
  (VAR_2->flowi4_oif == VAR_0->ifindex || !VAR_0->ifindex);
}
