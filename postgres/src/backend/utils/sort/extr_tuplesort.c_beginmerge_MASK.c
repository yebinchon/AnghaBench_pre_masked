
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ memtupcount; int* mergeactive; int maxTapes; int tapeRange; scalar_t__* tp_dummy; scalar_t__* tp_runs; int* tp_tapenum; int activeTapes; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_9__ {int srctape; } ;
typedef TYPE_2__ SortTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(Tuplesortstate *VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;


 FUNC_0(VAR_0->memtupcount == 0);


 FUNC_1(VAR_0->mergeactive, 0,
     VAR_0->maxTapes * sizeof(*VAR_0->mergeactive));
 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->tapeRange; VAR_2++)
 {
  if (VAR_0->tp_dummy[VAR_2] > 0)
   VAR_0->tp_dummy[VAR_2]--;
  else
  {
   FUNC_0(VAR_0->tp_runs[VAR_2] > 0);
   VAR_0->tp_runs[VAR_2]--;
   VAR_3 = VAR_0->tp_tapenum[VAR_2];
   VAR_0->mergeactive[VAR_3] = 1;
   VAR_1++;
  }
 }
 FUNC_0(VAR_1 > 0);
 VAR_0->activeTapes = VAR_1;


 for (VAR_3 = 0; VAR_3 < VAR_0->maxTapes; VAR_3++)
 {
  SortTuple VAR_4;

  if (FUNC_2(VAR_0, VAR_3, &VAR_4))
  {
   VAR_4.srctape = VAR_3;
   FUNC_3(VAR_0, &VAR_4);
  }
 }
}
