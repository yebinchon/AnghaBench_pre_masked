
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* WorkerInfo ;
struct TYPE_5__ {int av_freeWorkers; int av_workItems; int * av_startingWorker; int av_runningWorkers; scalar_t__ av_launcherpid; } ;
struct TYPE_4__ {int wi_links; } ;
typedef int AutoVacuumWorkItem ;
typedef TYPE_2__ AutoVacuumShmemStruct ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,int ,int*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int) ;

void
FUNC_7(void)
{
 bool VAR_4;

 VAR_0 = (AutoVacuumShmemStruct *)
  FUNC_3("AutoVacuum Data",
      FUNC_1(),
      &VAR_4);

 if (!VAR_1)
 {
  WorkerInfo VAR_5;
  int VAR_6;

  FUNC_0(!VAR_4);

  VAR_0->av_launcherpid = 0;
  FUNC_4(&VAR_0->av_freeWorkers);
  FUNC_4(&VAR_0->av_runningWorkers);
  VAR_0->av_startingWorker = ((void*)0);
  FUNC_6(VAR_0->av_workItems, 0,
      sizeof(AutoVacuumWorkItem) * VAR_2);

  VAR_5 = (WorkerInfo) ((char *) VAR_0 +
          FUNC_2(sizeof(AutoVacuumShmemStruct)));


  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   FUNC_5(&VAR_0->av_freeWorkers,
       &VAR_5[VAR_6].wi_links);
 }
 else
  FUNC_0(VAR_4);
}
