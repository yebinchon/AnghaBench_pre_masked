
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int in6; int ip; } ;
struct TYPE_5__ {int in6; int ip; } ;
struct nf_nat_range2 {TYPE_3__ max_addr; TYPE_1__ min_addr; } ;
struct TYPE_6__ {int in6; int ip; } ;
struct TYPE_8__ {scalar_t__ l3num; TYPE_2__ u3; } ;
struct nf_conntrack_tuple {TYPE_4__ src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct nf_conntrack_tuple *VAR_1,
     const struct nf_nat_range2 *VAR_2)
{
 if (VAR_1->src.l3num == VAR_0)
  return FUNC_1(VAR_1->src.u3.ip) >= FUNC_1(VAR_2->min_addr.ip) &&
         FUNC_1(VAR_1->src.u3.ip) <= FUNC_1(VAR_2->max_addr.ip);

 return FUNC_0(&VAR_1->src.u3.in6, &VAR_2->min_addr.in6) >= 0 &&
        FUNC_0(&VAR_1->src.u3.in6, &VAR_2->max_addr.in6) <= 0;
}
