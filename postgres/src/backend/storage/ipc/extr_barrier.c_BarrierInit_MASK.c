
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int participants; int static_party; int condition_variable; scalar_t__ elected; scalar_t__ phase; scalar_t__ arrived; int mutex; } ;
typedef TYPE_1__ Barrier ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(Barrier *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->mutex);
 VAR_0->participants = VAR_1;
 VAR_0->arrived = 0;
 VAR_0->phase = 0;
 VAR_0->elected = 0;
 VAR_0->static_party = VAR_1 > 0;
 FUNC_0(&VAR_0->condition_variable);
}
