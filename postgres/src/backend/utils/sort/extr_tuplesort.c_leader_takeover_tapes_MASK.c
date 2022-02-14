
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nParticipants; int currentRun; int maxTapes; int* tp_fib; int* tp_runs; int* tp_dummy; int* tp_tapenum; size_t tapeRange; int Level; int status; scalar_t__ destTape; int worker; int tapeset; TYPE_2__* shared; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_7__ {int workersFinished; int fileset; int tapes; int mutex; } ;
typedef TYPE_2__ Sharedsort ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(Tuplesortstate *VAR_2)
{
 Sharedsort *VAR_3 = VAR_2->shared;
 int VAR_4 = VAR_2->nParticipants;
 int VAR_5;
 int VAR_6;

 FUNC_0(FUNC_1(VAR_2));
 FUNC_0(VAR_4 >= 1);

 FUNC_3(&VAR_3->mutex);
 VAR_5 = VAR_3->workersFinished;
 FUNC_4(&VAR_3->mutex);

 if (VAR_4 != VAR_5)
  FUNC_5(VAR_0, "cannot take over tapes before all workers finish");
 FUNC_6(VAR_2, VAR_4 + 1);
 VAR_2->tapeset = FUNC_2(VAR_4 + 1, VAR_3->tapes,
            &VAR_3->fileset, VAR_2->worker);


 VAR_2->currentRun = VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_2->maxTapes; VAR_6++)
 {

  VAR_2->tp_fib[VAR_6] = 1;
  VAR_2->tp_runs[VAR_6] = 1;
  VAR_2->tp_dummy[VAR_6] = 0;
  VAR_2->tp_tapenum[VAR_6] = VAR_6;
 }

 VAR_2->tp_fib[VAR_2->tapeRange] = 0;
 VAR_2->tp_runs[VAR_2->tapeRange] = 0;
 VAR_2->tp_dummy[VAR_2->tapeRange] = 1;

 VAR_2->Level = 1;
 VAR_2->destTape = 0;

 VAR_2->status = VAR_1;
}
