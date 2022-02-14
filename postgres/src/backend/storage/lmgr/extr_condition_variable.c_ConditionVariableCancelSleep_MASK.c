
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pgprocno; } ;
struct TYPE_5__ {int mutex; int wakeup; } ;
typedef TYPE_1__ ConditionVariable ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5(void)
{
 ConditionVariable *VAR_3 = VAR_2;
 bool VAR_4 = 0;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(&VAR_3->mutex);
 if (FUNC_3(&VAR_3->wakeup, VAR_0->pgprocno, VAR_1))
  FUNC_4(&VAR_3->wakeup, VAR_0->pgprocno, VAR_1);
 else
  VAR_4 = 1;
 FUNC_2(&VAR_3->mutex);






 if (VAR_4)
  FUNC_0(VAR_3);

 VAR_2 = ((void*)0);
}
