
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; int start; } ;
struct fib_rule {int suppress_ifgroup; int suppress_prefixlen; int dport_range; int sport_range; TYPE_1__ uid_range; scalar_t__ flags; scalar_t__ tun_id; scalar_t__ mark; scalar_t__ oifindex; scalar_t__ iifindex; } ;
struct TYPE_4__ {int end; int start; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(const struct fib_rule *VAR_1)
{
 if (VAR_1->iifindex || VAR_1->oifindex || VAR_1->mark || VAR_1->tun_id ||
     VAR_1->flags)
  return 0;
 if (VAR_1->suppress_ifgroup != -1 || VAR_1->suppress_prefixlen != -1)
  return 0;
 if (!FUNC_1(VAR_1->uid_range.start, VAR_0.start) ||
     !FUNC_1(VAR_1->uid_range.end, VAR_0.end))
  return 0;
 if (FUNC_0(&VAR_1->sport_range))
  return 0;
 if (FUNC_0(&VAR_1->dport_range))
  return 0;
 return 1;
}
