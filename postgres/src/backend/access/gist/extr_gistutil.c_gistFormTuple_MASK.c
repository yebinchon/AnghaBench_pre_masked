
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_20__ {scalar_t__ key; } ;
struct TYPE_19__ {int nonLeafTupdesc; int leafTupdesc; int * supportCollation; TYPE_14__* compressFn; } ;
struct TYPE_18__ {int t_tid; } ;
struct TYPE_17__ {TYPE_1__* rd_att; } ;
struct TYPE_16__ {int natts; } ;
struct TYPE_15__ {int fn_oid; } ;
typedef TYPE_2__* Relation ;
typedef int OffsetNumber ;
typedef TYPE_3__* IndexTuple ;
typedef TYPE_4__ GISTSTATE ;
typedef TYPE_5__ GISTENTRY ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_14__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__,scalar_t__,TYPE_2__*,int *,int ,int) ;
 TYPE_3__* FUNC_7 (int ,scalar_t__*,int*) ;

IndexTuple
FUNC_8(GISTSTATE *VAR_1, Relation VAR_2,
     Datum VAR_3[], bool VAR_4[], bool VAR_5)
{
 Datum VAR_6[VAR_0];
 int VAR_7;
 IndexTuple VAR_8;




 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_2); VAR_7++)
 {
  if (VAR_4[VAR_7])
   VAR_6[VAR_7] = (Datum) 0;
  else
  {
   GISTENTRY VAR_9;
   GISTENTRY *VAR_10;

   FUNC_6(VAR_9, VAR_3[VAR_7], VAR_2, ((void*)0), (OffsetNumber) 0,
        VAR_5);

   if (FUNC_4(VAR_1->compressFn[VAR_7].fn_oid))
    VAR_10 = (GISTENTRY *)
     FUNC_0(FUNC_1(&VAR_1->compressFn[VAR_7],
               VAR_1->supportCollation[VAR_7],
               FUNC_5(&VAR_9)));
   else
    VAR_10 = &VAR_9;
   VAR_6[VAR_7] = VAR_10->key;
  }
 }

 if (VAR_5)
 {



  for (; VAR_7 < VAR_2->rd_att->natts; VAR_7++)
  {
   if (VAR_4[VAR_7])
    VAR_6[VAR_7] = (Datum) 0;
   else
    VAR_6[VAR_7] = VAR_3[VAR_7];
  }
 }

 VAR_8 = FUNC_7(VAR_5 ? VAR_1->leafTupdesc :
         VAR_1->nonLeafTupdesc,
         VAR_6, VAR_4);





 FUNC_3(&(VAR_8->t_tid), 0xffff);
 return VAR_8;
}
