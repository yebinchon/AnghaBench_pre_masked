
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int fetchTupdesc; int leafTupdesc; TYPE_2__* compressFn; TYPE_1__* fetchFn; int tempCxt; } ;
struct TYPE_14__ {TYPE_3__* rd_att; } ;
struct TYPE_13__ {int natts; } ;
struct TYPE_12__ {scalar_t__ fn_oid; } ;
struct TYPE_11__ {scalar_t__ fn_oid; } ;
typedef TYPE_4__* Relation ;
typedef int MemoryContext ;
typedef int IndexTuple ;
typedef int HeapTuple ;
typedef TYPE_5__ GISTSTATE ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int,scalar_t__,TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__*,int*) ;
 scalar_t__ FUNC_4 (int ,int,int ,int*) ;

HeapTuple
FUNC_5(GISTSTATE *VAR_2, Relation VAR_3, IndexTuple VAR_4)
{
 MemoryContext VAR_5 = FUNC_1(VAR_2->tempCxt);
 Datum VAR_6[VAR_0];
 bool VAR_7[VAR_0];
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
 {
  Datum VAR_9;

  VAR_9 = FUNC_4(VAR_4, VAR_8 + 1, VAR_2->leafTupdesc, &VAR_7[VAR_8]);

  if (VAR_2->fetchFn[VAR_8].fn_oid != VAR_1)
  {
   if (!VAR_7[VAR_8])
    VAR_6[VAR_8] = FUNC_2(VAR_2, VAR_8, VAR_9, VAR_3);
   else
    VAR_6[VAR_8] = (Datum) 0;
  }
  else if (VAR_2->compressFn[VAR_8].fn_oid == VAR_1)
  {




   if (!VAR_7[VAR_8])
    VAR_6[VAR_8] = VAR_9;
   else
    VAR_6[VAR_8] = (Datum) 0;
  }
  else
  {





   VAR_7[VAR_8] = 1;
   VAR_6[VAR_8] = (Datum) 0;
  }
 }




 for (; VAR_8 < VAR_3->rd_att->natts; VAR_8++)
 {
  VAR_6[VAR_8] = FUNC_4(VAR_4, VAR_8 + 1, VAR_2->leafTupdesc,
         &VAR_7[VAR_8]);
 }
 FUNC_1(VAR_5);

 return FUNC_3(VAR_2->fetchTupdesc, VAR_6, VAR_7);
}
