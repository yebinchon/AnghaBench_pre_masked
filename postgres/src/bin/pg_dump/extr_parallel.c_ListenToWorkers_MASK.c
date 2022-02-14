
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_6__ {int workerStatus; int callback_data; int (* callback ) (int *,int *,int,int ) ;} ;
struct TYPE_5__ {int ** te; TYPE_2__* parallelSlot; } ;
typedef TYPE_1__ ParallelState ;
typedef TYPE_2__ ParallelSlot ;
typedef int ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,int *,int,int ) ;

__attribute__((used)) static bool
FUNC_6(ArchiveHandle *VAR_1, ParallelState *VAR_2, bool VAR_3)
{
 int VAR_4;
 char *VAR_5;


 VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_4);

 if (!VAR_5)
 {

  if (VAR_3)
   FUNC_0("a worker process died unexpectedly");
  return 0;
 }


 if (FUNC_3(VAR_5, "OK "))
 {
  ParallelSlot *VAR_6 = &VAR_2->parallelSlot[VAR_4];
  TocEntry *VAR_7 = VAR_2->te[VAR_4];
  int VAR_8;

  VAR_8 = FUNC_4(VAR_1, VAR_7, VAR_5);
  VAR_6->callback(VAR_1, VAR_7, VAR_8, VAR_6->callback_data);
  VAR_6->workerStatus = VAR_0;
  VAR_2->te[VAR_4] = ((void*)0);
 }
 else
  FUNC_0("invalid message received from worker: \"%s\"",
     VAR_5);


 FUNC_1(VAR_5);

 return 1;
}
