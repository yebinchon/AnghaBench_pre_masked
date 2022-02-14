
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* policy_count; TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_3__ {unsigned int hmask; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct net *VAR_1, int VAR_2, int *VAR_3)
{
 unsigned int VAR_4 = VAR_1->xfrm.policy_count[VAR_2];
 unsigned int VAR_5 = VAR_1->xfrm.policy_bydst[VAR_2].hmask;

 if (VAR_3)
  *VAR_3 += VAR_4;

 if ((VAR_5 + 1) < VAR_0 &&
     VAR_4 > VAR_5)
  return 1;

 return 0;
}
