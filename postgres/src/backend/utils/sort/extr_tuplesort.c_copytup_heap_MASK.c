
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int memtupcount; int tupDesc; TYPE_5__* sortKeys; TYPE_2__* memtuples; int tuplecontext; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TupleTableSlot ;
struct TYPE_17__ {int ssup_attno; void* (* abbrev_converter ) (void*,TYPE_5__*) ;} ;
struct TYPE_16__ {char* t_len; void* t_data; } ;
struct TYPE_15__ {int t_len; } ;
struct TYPE_14__ {int isnull1; void* datum1; void* tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef TYPE_3__* MinimalTuple ;
typedef int MemoryContext ;
typedef void* HeapTupleHeader ;
typedef TYPE_4__ HeapTupleData ;
typedef void* Datum ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 char* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_4__*,int ,int ,int *) ;
 void* FUNC_6 (void*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_7(Tuplesortstate *VAR_1, SortTuple *VAR_2, void *VAR_3)
{




 TupleTableSlot *VAR_4 = (TupleTableSlot *) VAR_3;
 Datum VAR_5;
 MinimalTuple VAR_6;
 HeapTupleData VAR_7;
 MemoryContext VAR_8 = FUNC_2(VAR_1->tuplecontext);


 VAR_6 = FUNC_0(VAR_4);
 VAR_2->tuple = (void *) VAR_6;
 FUNC_3(VAR_1, FUNC_1(VAR_6));

 VAR_7.t_len = VAR_6->t_len + VAR_0;
 VAR_7.t_data = (HeapTupleHeader) ((char *) VAR_6 - VAR_0);
 VAR_5 = FUNC_5(&VAR_7,
       VAR_1->sortKeys[0].ssup_attno,
       VAR_1->tupDesc,
       &VAR_2->isnull1);

 FUNC_2(VAR_8);

 if (!VAR_1->sortKeys->abbrev_converter || VAR_2->isnull1)
 {
  VAR_2->datum1 = VAR_5;
 }
 else if (!FUNC_4(VAR_1))
 {

  VAR_2->datum1 = VAR_1->sortKeys->abbrev_converter(VAR_5,
               VAR_1->sortKeys);
 }
 else
 {

  int VAR_9;

  VAR_2->datum1 = VAR_5;
  for (VAR_9 = 0; VAR_9 < VAR_1->memtupcount; VAR_9++)
  {
   SortTuple *VAR_10 = &VAR_1->memtuples[VAR_9];

   VAR_7.t_len = ((MinimalTuple) VAR_10->tuple)->t_len +
    VAR_0;
   VAR_7.t_data = (HeapTupleHeader) ((char *) VAR_10->tuple -
            VAR_0);

   VAR_10->datum1 = FUNC_5(&VAR_7,
          VAR_1->sortKeys[0].ssup_attno,
          VAR_1->tupDesc,
          &VAR_10->isnull1);
  }
 }
}
