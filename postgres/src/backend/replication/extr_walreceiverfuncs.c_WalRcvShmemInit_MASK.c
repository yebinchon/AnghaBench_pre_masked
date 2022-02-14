
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * latch; int mutex; int walRcvState; } ;
typedef TYPE_1__ WalRcvData ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;

void
FUNC_4(void)
{
 bool VAR_2;

 VAR_1 = (WalRcvData *)
  FUNC_1("Wal Receiver Ctl", FUNC_3(), &VAR_2);

 if (!VAR_2)
 {

  FUNC_0(VAR_1, 0, FUNC_3());
  VAR_1->walRcvState = VAR_0;
  FUNC_2(&VAR_1->mutex);
  VAR_1->latch = ((void*)0);
 }
}
