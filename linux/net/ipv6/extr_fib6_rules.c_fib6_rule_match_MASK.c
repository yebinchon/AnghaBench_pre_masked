
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flowi6 {scalar_t__ flowi6_proto; int fl6_dport; int fl6_sport; int flowlabel; int saddr; int daddr; } ;
struct TYPE_5__ {struct flowi6 ip6; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {scalar_t__ ip_proto; int dport_range; int sport_range; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ plen; int addr; } ;
struct TYPE_6__ {scalar_t__ plen; int addr; } ;
struct fib6_rule {scalar_t__ tclass; TYPE_4__ common; TYPE_3__ src; TYPE_2__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fib_rule *VAR_2, struct flowi *VAR_3, int VAR_4)
{
 struct fib6_rule *VAR_5 = (struct fib6_rule *) VAR_2;
 struct flowi6 *VAR_6 = &VAR_3->u.ip6;

 if (VAR_5->dst.plen &&
     !FUNC_3(&VAR_6->daddr, &VAR_5->dst.addr, VAR_5->dst.plen))
  return 0;






 if (VAR_5->src.plen) {
  if (VAR_4 & VAR_1) {
   if (!FUNC_3(&VAR_6->saddr, &VAR_5->src.addr,
            VAR_5->src.plen))
    return 0;
  } else if (!(VAR_5->common.flags & VAR_0))
   return 0;
 }

 if (VAR_5->tclass && VAR_5->tclass != FUNC_2(VAR_6->flowlabel))
  return 0;

 if (VAR_2->ip_proto && (VAR_2->ip_proto != VAR_6->flowi6_proto))
  return 0;

 if (FUNC_1(&VAR_2->sport_range) &&
     !FUNC_0(&VAR_2->sport_range, VAR_6->fl6_sport))
  return 0;

 if (FUNC_1(&VAR_2->dport_range) &&
     !FUNC_0(&VAR_2->dport_range, VAR_6->fl6_dport))
  return 0;

 return 1;
}
