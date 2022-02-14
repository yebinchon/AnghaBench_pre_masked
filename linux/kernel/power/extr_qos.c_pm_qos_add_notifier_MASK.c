
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* constraints; } ;
struct TYPE_3__ {int notifiers; } ;


 int FUNC_0 (int ,struct notifier_block*) ;
 TYPE_2__** VAR_0 ;

int FUNC_1(int VAR_1, struct notifier_block *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(
   VAR_0[VAR_1]->constraints->notifiers,
   VAR_2);

 return VAR_3;
}
