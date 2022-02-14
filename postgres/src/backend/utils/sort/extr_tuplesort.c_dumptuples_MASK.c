
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int memtupcount; int memtupsize; scalar_t__ status; scalar_t__ currentRun; size_t destTape; int ru_start; int worker; int * tp_dummy; int * tp_runs; int * tp_tapenum; int tuplecontext; int * memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (int ,char*,int ,scalar_t__,size_t,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(Tuplesortstate *VAR_6, bool VAR_7)
{
 int VAR_8;
 int VAR_9;





 if (VAR_6->memtupcount < VAR_6->memtupsize && !FUNC_1(VAR_6) &&
  !VAR_7)
  return;
 FUNC_0(VAR_6->status == VAR_4);





 if (VAR_6->currentRun == VAR_2)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("cannot have more than %d runs for an external sort",
      VAR_2)));

 VAR_6->currentRun++;
 FUNC_11(VAR_6);
 VAR_8 = VAR_6->memtupcount;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  FUNC_3(VAR_6, VAR_6->tp_tapenum[VAR_6->destTape],
     &VAR_6->memtuples[VAR_9]);
  VAR_6->memtupcount--;
 }
 FUNC_2(VAR_6->tuplecontext);

 FUNC_8(VAR_6, VAR_6->tp_tapenum[VAR_6->destTape]);
 VAR_6->tp_runs[VAR_6->destTape]++;
 VAR_6->tp_dummy[VAR_6->destTape]--;
 if (!VAR_7)
  FUNC_10(VAR_6);
}
