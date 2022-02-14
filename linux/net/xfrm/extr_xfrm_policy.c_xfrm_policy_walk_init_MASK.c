
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dead; int all; } ;
struct xfrm_policy_walk {scalar_t__ seq; int type; TYPE_1__ walk; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct xfrm_policy_walk *VAR_0, u8 VAR_1)
{
 FUNC_0(&VAR_0->walk.all);
 VAR_0->walk.dead = 1;
 VAR_0->type = VAR_1;
 VAR_0->seq = 0;
}
