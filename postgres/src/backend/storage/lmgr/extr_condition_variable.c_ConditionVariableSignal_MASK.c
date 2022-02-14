
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mutex; int wakeup; } ;
struct TYPE_5__ {int procLatch; } ;
typedef TYPE_1__ PGPROC ;
typedef TYPE_2__ ConditionVariable ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int ) ;

void
FUNC_5(ConditionVariable *VAR_1)
{
 PGPROC *VAR_2 = ((void*)0);


 FUNC_1(&VAR_1->mutex);
 if (!FUNC_3(&VAR_1->wakeup))
  VAR_2 = FUNC_4(&VAR_1->wakeup, VAR_0);
 FUNC_2(&VAR_1->mutex);


 if (VAR_2 != ((void*)0))
  FUNC_0(&VAR_2->procLatch);
}
