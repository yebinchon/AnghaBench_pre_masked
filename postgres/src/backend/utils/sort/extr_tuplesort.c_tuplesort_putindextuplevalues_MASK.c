
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int memtupcount; int indexRel; TYPE_2__* memtuples; TYPE_5__* sortKeys; int sortcontext; int tuplecontext; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_16__ {void* (* abbrev_converter ) (void*,TYPE_5__*) ;} ;
struct TYPE_15__ {int t_tid; } ;
struct TYPE_14__ {scalar_t__ isnull1; void* datum1; TYPE_3__* tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int * ItemPointer ;
typedef TYPE_3__* IndexTuple ;
typedef void* Datum ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (int ,void**,int*) ;
 void* FUNC_6 (TYPE_3__*,int,int ,scalar_t__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 void* FUNC_8 (void*,TYPE_5__*) ;

void
FUNC_9(Tuplesortstate *VAR_0, Relation VAR_1,
         ItemPointer VAR_2, Datum *VAR_3,
         bool *VAR_4)
{
 MemoryContext VAR_5 = FUNC_1(VAR_0->tuplecontext);
 SortTuple VAR_6;
 Datum VAR_7;
 IndexTuple VAR_8;

 VAR_6.tuple = FUNC_5(FUNC_2(VAR_1), VAR_3, VAR_4);
 VAR_8 = ((IndexTuple) VAR_6.tuple);
 VAR_8->t_tid = *VAR_2;
 FUNC_3(VAR_0, FUNC_0(VAR_6.tuple));

 VAR_7 = FUNC_6(VAR_8,
        1,
        FUNC_2(VAR_0->indexRel),
        &VAR_6.isnull1);

 FUNC_1(VAR_0->sortcontext);

 if (!VAR_0->sortKeys || !VAR_0->sortKeys->abbrev_converter || VAR_6.isnull1)
 {
  VAR_6.datum1 = VAR_7;
 }
 else if (!FUNC_4(VAR_0))
 {

  VAR_6.datum1 = VAR_0->sortKeys->abbrev_converter(VAR_7,
              VAR_0->sortKeys);
 }
 else
 {

  int VAR_9;

  VAR_6.datum1 = VAR_7;
  for (VAR_9 = 0; VAR_9 < VAR_0->memtupcount; VAR_9++)
  {
   SortTuple *VAR_10 = &VAR_0->memtuples[VAR_9];

   VAR_8 = VAR_10->tuple;
   VAR_10->datum1 = FUNC_6(VAR_8,
           1,
           FUNC_2(VAR_0->indexRel),
           &VAR_10->isnull1);
  }
 }

 FUNC_7(VAR_0, &VAR_6);

 FUNC_1(VAR_5);
}
