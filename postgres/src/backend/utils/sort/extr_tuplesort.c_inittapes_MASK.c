
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* tp_fib; int* tp_dummy; int* tp_tapenum; size_t tapeRange; int Level; int status; scalar_t__ destTape; scalar_t__* tp_runs; scalar_t__ currentRun; int worker; TYPE_1__* shared; int tapeset; int ru_start; int allowedMem; } ;
typedef TYPE_2__ Tuplesortstate ;
struct TYPE_7__ {int fileset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,int ,int,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(Tuplesortstate *VAR_4, bool VAR_5)
{
 int VAR_6,
    VAR_7;

 FUNC_0(!FUNC_1(VAR_4));

 if (VAR_5)
 {

  VAR_6 = FUNC_7(VAR_4->allowedMem) + 1;
 }
 else
 {

  FUNC_0(FUNC_3(VAR_4));
  VAR_6 = VAR_1 + 1;
 }
 FUNC_5(VAR_4, VAR_6);
 VAR_4->tapeset =
  FUNC_2(VAR_6, ((void*)0),
        VAR_4->shared ? &VAR_4->shared->fileset : ((void*)0),
        VAR_4->worker);

 VAR_4->currentRun = 0;




 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  VAR_4->tp_fib[VAR_7] = 1;
  VAR_4->tp_runs[VAR_7] = 0;
  VAR_4->tp_dummy[VAR_7] = 1;
  VAR_4->tp_tapenum[VAR_7] = VAR_7;
 }
 VAR_4->tp_fib[VAR_4->tapeRange] = 0;
 VAR_4->tp_dummy[VAR_4->tapeRange] = 0;

 VAR_4->Level = 1;
 VAR_4->destTape = 0;

 VAR_4->status = VAR_2;
}
