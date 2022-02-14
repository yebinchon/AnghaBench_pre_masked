
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int memtupcount; int tupDesc; TYPE_1__* indexInfo; TYPE_3__* memtuples; TYPE_4__* sortKeys; int tuplecontext; } ;
typedef TYPE_2__ Tuplesortstate ;
struct TYPE_12__ {void* (* abbrev_converter ) (void*,TYPE_4__*) ;} ;
struct TYPE_11__ {int isnull1; void* datum1; void* tuple; } ;
struct TYPE_9__ {int * ii_IndexAttrNumbers; } ;
typedef TYPE_3__ SortTuple ;
typedef int MemoryContext ;
typedef scalar_t__ HeapTuple ;
typedef void* Datum ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__,int ,int ,int *) ;
 void* FUNC_6 (void*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_7(Tuplesortstate *VAR_0, SortTuple *VAR_1, void *VAR_2)
{
 HeapTuple VAR_3 = (HeapTuple) VAR_2;
 Datum VAR_4;
 MemoryContext VAR_5 = FUNC_1(VAR_0->tuplecontext);


 VAR_3 = FUNC_4(VAR_3);
 VAR_1->tuple = (void *) VAR_3;
 FUNC_2(VAR_0, FUNC_0(VAR_3));

 FUNC_1(VAR_5);





 if (VAR_0->indexInfo->ii_IndexAttrNumbers[0] == 0)
  return;

 VAR_4 = FUNC_5(VAR_3,
       VAR_0->indexInfo->ii_IndexAttrNumbers[0],
       VAR_0->tupDesc,
       &VAR_1->isnull1);

 if (!VAR_0->sortKeys->abbrev_converter || VAR_1->isnull1)
 {
  VAR_1->datum1 = VAR_4;
 }
 else if (!FUNC_3(VAR_0))
 {

  VAR_1->datum1 = VAR_0->sortKeys->abbrev_converter(VAR_4,
               VAR_0->sortKeys);
 }
 else
 {

  int VAR_6;

  VAR_1->datum1 = VAR_4;
  for (VAR_6 = 0; VAR_6 < VAR_0->memtupcount; VAR_6++)
  {
   SortTuple *VAR_7 = &VAR_0->memtuples[VAR_6];

   VAR_3 = (HeapTuple) VAR_7->tuple;
   VAR_7->datum1 = FUNC_5(VAR_3,
          VAR_0->indexInfo->ii_IndexAttrNumbers[0],
          VAR_0->tupDesc,
          &VAR_7->isnull1);
  }
 }
}
