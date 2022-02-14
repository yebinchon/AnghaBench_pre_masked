
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct dsa_switch {TYPE_2__ nb; TYPE_1__* dst; } ;
struct TYPE_3__ {int nh; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;

int FUNC_1(struct dsa_switch *VAR_1)
{
 VAR_1->nb.notifier_call = VAR_0;

 return FUNC_0(&VAR_1->dst->nh, &VAR_1->nb);
}
