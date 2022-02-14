
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int v; int m; } ;
struct xfrm_policy {scalar_t__ priority; TYPE_1__ mark; } ;



__attribute__((used)) static bool FUNC_0(struct xfrm_policy *VAR_0,
       struct xfrm_policy *VAR_1)
{
 u32 VAR_2 = VAR_0->mark.v & VAR_0->mark.m;

 if (VAR_0->mark.v == VAR_1->mark.v && VAR_0->mark.m == VAR_1->mark.m)
  return 1;

 if ((VAR_2 & VAR_1->mark.m) == VAR_1->mark.v &&
     VAR_0->priority == VAR_1->priority)
  return 1;

 return 0;
}
