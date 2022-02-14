
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int memtupcount; TYPE_2__* memtuples; TYPE_4__* sortKeys; int sortcontext; int datumTypeLen; int tuples; int tuplecontext; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_11__ {void* (* abbrev_converter ) (void*,TYPE_4__*) ;} ;
struct TYPE_10__ {int isnull1; int * tuple; void* datum1; } ;
typedef TYPE_2__ SortTuple ;
typedef int MemoryContext ;
typedef void* Datum ;


 int * FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (void*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 void* FUNC_8 (void*,TYPE_4__*) ;

void
FUNC_9(Tuplesortstate *VAR_0, Datum VAR_1, bool VAR_2)
{
 MemoryContext VAR_3 = FUNC_2(VAR_0->tuplecontext);
 SortTuple VAR_4;
 if (VAR_2 || !VAR_0->tuples)
 {




  VAR_4.datum1 = !VAR_2 ? VAR_1 : (Datum) 0;
  VAR_4.isnull1 = VAR_2;
  VAR_4.tuple = ((void*)0);
  FUNC_2(VAR_0->sortcontext);
 }
 else
 {
  Datum VAR_5 = FUNC_6(VAR_1, 0, VAR_0->datumTypeLen);

  VAR_4.isnull1 = 0;
  VAR_4.tuple = FUNC_0(VAR_5);
  FUNC_4(VAR_0, FUNC_1(VAR_4.tuple));
  FUNC_2(VAR_0->sortcontext);

  if (!VAR_0->sortKeys->abbrev_converter)
  {
   VAR_4.datum1 = VAR_5;
  }
  else if (!FUNC_5(VAR_0))
  {

   VAR_4.datum1 = VAR_0->sortKeys->abbrev_converter(VAR_5,
               VAR_0->sortKeys);
  }
  else
  {

   int VAR_6;

   VAR_4.datum1 = VAR_5;
   for (VAR_6 = 0; VAR_6 < VAR_0->memtupcount; VAR_6++)
   {
    SortTuple *VAR_7 = &VAR_0->memtuples[VAR_6];

    VAR_7->datum1 = FUNC_3(VAR_7->tuple);
   }
  }
 }

 FUNC_7(VAR_0, &VAR_4);

 FUNC_2(VAR_3);
}
