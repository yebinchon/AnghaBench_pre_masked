
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flowi4 {int daddr; int saddr; scalar_t__ flowi4_tos; scalar_t__ flowi4_proto; int fl4_dport; int fl4_sport; } ;
struct TYPE_2__ {struct flowi4 ip4; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {scalar_t__ ip_proto; int dport_range; int sport_range; } ;
struct fib4_rule {int src; int srcmask; int dst; int dstmask; scalar_t__ tos; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_0, struct flowi *VAR_1, int VAR_2)
{
 struct fib4_rule *VAR_3 = (struct fib4_rule *) VAR_0;
 struct flowi4 *VAR_4 = &VAR_1->u.ip4;
 __be32 VAR_5 = VAR_4->daddr;
 __be32 VAR_6 = VAR_4->saddr;

 if (((VAR_6 ^ VAR_3->src) & VAR_3->srcmask) ||
     ((VAR_5 ^ VAR_3->dst) & VAR_3->dstmask))
  return 0;

 if (VAR_3->tos && (VAR_3->tos != VAR_4->flowi4_tos))
  return 0;

 if (VAR_0->ip_proto && (VAR_0->ip_proto != VAR_4->flowi4_proto))
  return 0;

 if (FUNC_1(&VAR_0->sport_range) &&
     !FUNC_0(&VAR_0->sport_range, VAR_4->fl4_sport))
  return 0;

 if (FUNC_1(&VAR_0->dport_range) &&
     !FUNC_0(&VAR_0->dport_range, VAR_4->fl4_dport))
  return 0;

 return 1;
}
