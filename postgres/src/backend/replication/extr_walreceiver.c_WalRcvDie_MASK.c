
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ walRcvState; scalar_t__ pid; int ready_to_display; int mutex; int * latch; } ;
typedef TYPE_1__ WalRcvData ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 () ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * VAR_8 ;

__attribute__((used)) static void
FUNC_6(int VAR_9, Datum VAR_10)
{
 WalRcvData *VAR_11 = VAR_7;


 FUNC_4(1);


 FUNC_1(&VAR_11->mutex);
 FUNC_0(VAR_11->walRcvState == VAR_5 ||
     VAR_11->walRcvState == VAR_1 ||
     VAR_11->walRcvState == VAR_2 ||
     VAR_11->walRcvState == VAR_6 ||
     VAR_11->walRcvState == VAR_4);
 FUNC_0(VAR_11->pid == VAR_0);
 VAR_11->walRcvState = VAR_3;
 VAR_11->pid = 0;
 VAR_11->ready_to_display = 0;
 VAR_11->latch = ((void*)0);
 FUNC_2(&VAR_11->mutex);


 if (VAR_8 != ((void*)0))
  FUNC_5(VAR_8);


 FUNC_3();
}
