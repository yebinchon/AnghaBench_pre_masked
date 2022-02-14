
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mutex; int wakeup; } ;
struct TYPE_6__ {int pgprocno; int procLatch; } ;
typedef TYPE_1__ PGPROC ;
typedef TYPE_2__ ConditionVariable ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int,int ) ;

void
FUNC_9(ConditionVariable *VAR_3)
{
 int VAR_4 = VAR_0->pgprocno;
 PGPROC *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 if (VAR_2 != ((void*)0))
  FUNC_1();






 FUNC_3(&VAR_3->mutex);

 FUNC_0(!FUNC_5(&VAR_3->wakeup, VAR_4, VAR_1));

 if (!FUNC_6(&VAR_3->wakeup))
 {
  VAR_5 = FUNC_7(&VAR_3->wakeup, VAR_1);
  if (!FUNC_6(&VAR_3->wakeup))
  {
   FUNC_8(&VAR_3->wakeup, VAR_4, VAR_1);
   VAR_6 = 1;
  }
 }
 FUNC_4(&VAR_3->mutex);


 if (VAR_5 != ((void*)0))
  FUNC_2(&VAR_5->procLatch);

 while (VAR_6)
 {
  VAR_5 = ((void*)0);
  FUNC_3(&VAR_3->mutex);
  if (!FUNC_6(&VAR_3->wakeup))
   VAR_5 = FUNC_7(&VAR_3->wakeup, VAR_1);
  VAR_6 = FUNC_5(&VAR_3->wakeup, VAR_4, VAR_1);
  FUNC_4(&VAR_3->mutex);

  if (VAR_5 != ((void*)0) && VAR_5 != VAR_0)
   FUNC_2(&VAR_5->procLatch);
 }
}
