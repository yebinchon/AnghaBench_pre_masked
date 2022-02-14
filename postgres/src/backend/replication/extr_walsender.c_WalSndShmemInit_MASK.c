
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* walsnds; int * SyncRepQueue; } ;
typedef TYPE_1__ WalSndCtlData ;
struct TYPE_6__ {int mutex; } ;
typedef TYPE_2__ WalSnd ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int ,int*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;

void
FUNC_5(void)
{
 bool VAR_3;
 int VAR_4;

 VAR_1 = (WalSndCtlData *)
  FUNC_2("Wal Sender Ctl", FUNC_4(), &VAR_3);

 if (!VAR_3)
 {

  FUNC_0(VAR_1, 0, FUNC_4());

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(&(VAR_1->SyncRepQueue[VAR_4]));

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   WalSnd *VAR_5 = &VAR_1->walsnds[VAR_4];

   FUNC_3(&VAR_5->mutex);
  }
 }
}
