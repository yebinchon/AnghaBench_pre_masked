
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_selector {int dport; int dport_mask; int sport; int sport_mask; scalar_t__ proto; scalar_t__ ifindex; int prefixlen_s; int saddr; int prefixlen_d; int daddr; } ;
struct flowi6 {scalar_t__ flowi6_proto; scalar_t__ flowi6_oif; int uli; int saddr; int daddr; } ;
struct TYPE_2__ {struct flowi6 ip6; } ;
struct flowi {TYPE_1__ u; } ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct flowi const*,int *) ;
 int FUNC_2 (struct flowi const*,int *) ;

__attribute__((used)) static inline bool
FUNC_3(const struct xfrm_selector *VAR_0, const struct flowi *VAR_1)
{
 const struct flowi6 *VAR_2 = &VAR_1->u.ip6;

 return FUNC_0(&VAR_2->daddr, &VAR_0->daddr, VAR_0->prefixlen_d) &&
  FUNC_0(&VAR_2->saddr, &VAR_0->saddr, VAR_0->prefixlen_s) &&
  !((FUNC_1(VAR_1, &VAR_2->uli) ^ VAR_0->dport) & VAR_0->dport_mask) &&
  !((FUNC_2(VAR_1, &VAR_2->uli) ^ VAR_0->sport) & VAR_0->sport_mask) &&
  (VAR_2->flowi6_proto == VAR_0->proto || !VAR_0->proto) &&
  (VAR_2->flowi6_oif == VAR_0->ifindex || !VAR_0->ifindex);
}
