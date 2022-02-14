
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sortKeys; int sortcontext; } ;
typedef TYPE_2__ Tuplesortstate ;
typedef int TupleTableSlot ;
struct TYPE_9__ {int * tuple; int datum1; } ;
struct TYPE_7__ {scalar_t__ abbrev_converter; } ;
typedef TYPE_3__ SortTuple ;
typedef int MinimalTuple ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int,TYPE_3__*) ;

bool
FUNC_5(Tuplesortstate *VAR_0, bool VAR_1, bool VAR_2,
        TupleTableSlot *VAR_3, Datum *VAR_4)
{
 MemoryContext VAR_5 = FUNC_2(VAR_0->sortcontext);
 SortTuple VAR_6;

 if (!FUNC_4(VAR_0, VAR_1, &VAR_6))
  VAR_6.tuple = ((void*)0);

 FUNC_2(VAR_5);

 if (VAR_6.tuple)
 {

  if (VAR_0->sortKeys->abbrev_converter && VAR_4)
   *VAR_4 = VAR_6.datum1;

  if (VAR_2)
   VAR_6.tuple = FUNC_3((MinimalTuple) VAR_6.tuple);

  FUNC_1((MinimalTuple) VAR_6.tuple, VAR_3, VAR_2);
  return 1;
 }
 else
 {
  FUNC_0(VAR_3);
  return 0;
 }
}
