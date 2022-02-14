
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf ;
typedef int TocEntry ;
typedef int T_Action ;
struct TYPE_8__ {int ** te; TYPE_1__* parallelSlot; } ;
struct TYPE_7__ {void* callback_data; int callback; int workerStatus; } ;
typedef TYPE_2__ ParallelState ;
typedef int ParallelCompletionPtr ;
typedef int ArchiveHandle ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *,int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,int,char*) ;

void
FUNC_4(ArchiveHandle *VAR_3,
        ParallelState *VAR_4,
        TocEntry *VAR_5,
        T_Action VAR_6,
        ParallelCompletionPtr VAR_7,
        void *VAR_8)
{
 int VAR_9;
 char VAR_10[256];


 while ((VAR_9 = FUNC_0(VAR_4)) == VAR_0)
  FUNC_1(VAR_3, VAR_4, VAR_1);


 FUNC_2(VAR_3, VAR_5, VAR_6, VAR_10, sizeof(VAR_10));

 FUNC_3(VAR_4, VAR_9, VAR_10);


 VAR_4->parallelSlot[VAR_9].workerStatus = VAR_2;
 VAR_4->parallelSlot[VAR_9].callback = VAR_7;
 VAR_4->parallelSlot[VAR_9].callback_data = VAR_8;
 VAR_4->te[VAR_9] = VAR_5;
}
