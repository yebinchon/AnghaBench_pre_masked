
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {int* tp_tapenum; size_t tapeRange; scalar_t__ memtupcount; int ru_start; int activeTapes; int worker; int * tp_runs; TYPE_12__* memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_16__ {int srctape; } ;
struct TYPE_14__ {int srctape; scalar_t__ tuple; } ;
typedef TYPE_2__ SortTuple ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int,TYPE_12__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(Tuplesortstate *VAR_2)
{
 int VAR_3 = VAR_2->tp_tapenum[VAR_2->tapeRange];
 int VAR_4;





 FUNC_2(VAR_2);






 while (VAR_2->memtupcount > 0)
 {
  SortTuple VAR_5;


  VAR_4 = VAR_2->memtuples[0].srctape;
  FUNC_1(VAR_2, VAR_3, &VAR_2->memtuples[0]);


  if (VAR_2->memtuples[0].tuple)
   FUNC_0(VAR_2, VAR_2->memtuples[0].tuple);





  if (FUNC_5(VAR_2, VAR_4, &VAR_5))
  {
   VAR_5.srctape = VAR_4;
   FUNC_8(VAR_2, &VAR_5);
  }
  else
   FUNC_7(VAR_2);
 }





 FUNC_4(VAR_2, VAR_3);
 VAR_2->tp_runs[VAR_2->tapeRange]++;






}
