
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct aa_profile {TYPE_2__ base; TYPE_1__* ns; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_profile*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct aa_profile *VAR_0)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->ns);
 FUNC_0(!FUNC_3(&VAR_0->ns->lock));

 FUNC_2(&VAR_0->base.list);
 FUNC_1(VAR_0);
}
