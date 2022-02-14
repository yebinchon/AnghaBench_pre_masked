
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ baserestrict_min_security; } ;
struct TYPE_5__ {scalar_t__ security_level; scalar_t__ leakproof; } ;
typedef TYPE_1__ RestrictInfo ;
typedef TYPE_2__ RelOptInfo ;



bool
FUNC_0(RestrictInfo *VAR_0,
           RelOptInfo *VAR_1)
{




 if (VAR_0->security_level <= VAR_1->baserestrict_min_security ||
  VAR_0->leakproof)
  return 1;
 else
  return 0;
}
