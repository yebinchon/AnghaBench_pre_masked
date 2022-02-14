
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WaitEventSet ;
struct TYPE_6__ {int pgprocno; } ;
struct TYPE_5__ {int mutex; int wakeup; } ;
typedef TYPE_1__ ConditionVariable ;


 int FUNC_0 (int *,int ,int ,int *,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int) ;
 int * VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int * VAR_8 ;
 int FUNC_6 (int *,int,int ) ;

void
FUNC_7(ConditionVariable *VAR_9)
{
 int VAR_10 = VAR_1->pgprocno;





 if (VAR_8 == ((void*)0))
 {
  WaitEventSet *VAR_11;

  VAR_11 = FUNC_2(VAR_3, 2);
  FUNC_0(VAR_11, VAR_5, VAR_2,
        VAR_0, ((void*)0));
  FUNC_0(VAR_11, VAR_4, VAR_2,
        ((void*)0), ((void*)0));

  VAR_8 = VAR_11;
 }
 if (VAR_7 != ((void*)0))
  FUNC_1();


 VAR_7 = VAR_9;





 FUNC_3(VAR_0);


 FUNC_4(&VAR_9->mutex);
 FUNC_6(&VAR_9->wakeup, VAR_10, VAR_6);
 FUNC_5(&VAR_9->mutex);
}
