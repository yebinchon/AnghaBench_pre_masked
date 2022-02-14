
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;


struct TYPE_29__ {int fn_oid; } ;
struct TYPE_24__ {TYPE_9__ cmp_proc_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_28__ {int atttypmod; int atttypid; int attcollation; int attndims; } ;
struct TYPE_27__ {int oneCol; int* canPartialMatch; int * supportCollation; TYPE_12__* comparePartialFn; TYPE_12__* triConsistentFn; TYPE_12__* consistentFn; TYPE_12__* extractQueryFn; TYPE_12__* extractValueFn; TYPE_12__* compareFn; TYPE_2__** tupdesc; TYPE_2__* origTupdesc; TYPE_3__* index; } ;
struct TYPE_26__ {int * rd_indcollation; } ;
struct TYPE_25__ {int natts; } ;
struct TYPE_23__ {scalar_t__ fn_oid; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ GinState ;
typedef TYPE_5__* Form_pg_attribute ;
typedef int AttrNumber ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_12 ;
 TYPE_5__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int ,int,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (TYPE_12__*,TYPE_9__*,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*,int,int ) ;
 TYPE_9__* FUNC_15 (TYPE_3__*,int,int ) ;
 TYPE_1__* FUNC_16 (int ,int ) ;

void
FUNC_17(GinState *VAR_13, Relation VAR_14)
{
 TupleDesc VAR_15 = FUNC_3(VAR_14);
 int VAR_16;

 FUNC_1(VAR_13, 0, sizeof(GinState));

 VAR_13->index = VAR_14;
 VAR_13->oneCol = (VAR_15->natts == 1) ? 1 : 0;
 VAR_13->origTupdesc = VAR_15;

 for (VAR_16 = 0; VAR_16 < VAR_15->natts; VAR_16++)
 {
  Form_pg_attribute VAR_17 = FUNC_5(VAR_15, VAR_16);

  if (VAR_13->oneCol)
   VAR_13->tupdesc[VAR_16] = VAR_13->origTupdesc;
  else
  {
   VAR_13->tupdesc[VAR_16] = FUNC_0(2);

   FUNC_6(VAR_13->tupdesc[VAR_16], (AttrNumber) 1, ((void*)0),
          VAR_10, -1, 0);
   FUNC_6(VAR_13->tupdesc[VAR_16], (AttrNumber) 2, ((void*)0),
          VAR_17->atttypid,
          VAR_17->atttypmod,
          VAR_17->attndims);
   FUNC_7(VAR_13->tupdesc[VAR_16], (AttrNumber) 2,
          VAR_17->attcollation);
  }





  if (FUNC_14(VAR_14, VAR_16 + 1, VAR_5) != VAR_11)
  {
   FUNC_12(&(VAR_13->compareFn[VAR_16]),
         FUNC_15(VAR_14, VAR_16 + 1, VAR_5),
         VAR_0);
  }
  else
  {
   TypeCacheEntry *VAR_18;

   VAR_18 = FUNC_16(VAR_17->atttypid,
           VAR_12);
   if (!FUNC_2(VAR_18->cmp_proc_finfo.fn_oid))
    FUNC_9(VAR_3,
      (FUNC_10(VAR_2),
       FUNC_11("could not identify a comparison function for type %s",
        FUNC_13(VAR_17->atttypid))));
   FUNC_12(&(VAR_13->compareFn[VAR_16]),
         &(VAR_18->cmp_proc_finfo),
         VAR_0);
  }


  FUNC_12(&(VAR_13->extractValueFn[VAR_16]),
        FUNC_15(VAR_14, VAR_16 + 1, VAR_8),
        VAR_0);
  FUNC_12(&(VAR_13->extractQueryFn[VAR_16]),
        FUNC_15(VAR_14, VAR_16 + 1, VAR_7),
        VAR_0);





  if (FUNC_14(VAR_14, VAR_16 + 1, VAR_9) != VAR_11)
  {
   FUNC_12(&(VAR_13->triConsistentFn[VAR_16]),
         FUNC_15(VAR_14, VAR_16 + 1, VAR_9),
         VAR_0);
  }

  if (FUNC_14(VAR_14, VAR_16 + 1, VAR_6) != VAR_11)
  {
   FUNC_12(&(VAR_13->consistentFn[VAR_16]),
         FUNC_15(VAR_14, VAR_16 + 1, VAR_6),
         VAR_0);
  }

  if (VAR_13->consistentFn[VAR_16].fn_oid == VAR_11 &&
   VAR_13->triConsistentFn[VAR_16].fn_oid == VAR_11)
  {
   FUNC_8(VAR_3, "missing GIN support function (%d or %d) for attribute %d of index \"%s\"",
     VAR_6, VAR_9,
     VAR_16 + 1, FUNC_4(VAR_14));
  }




  if (FUNC_14(VAR_14, VAR_16 + 1, VAR_4) != VAR_11)
  {
   FUNC_12(&(VAR_13->comparePartialFn[VAR_16]),
         FUNC_15(VAR_14, VAR_16 + 1, VAR_4),
         VAR_0);
   VAR_13->canPartialMatch[VAR_16] = 1;
  }
  else
  {
   VAR_13->canPartialMatch[VAR_16] = 0;
  }
  if (FUNC_2(VAR_14->rd_indcollation[VAR_16]))
   VAR_13->supportCollation[VAR_16] = VAR_14->rd_indcollation[VAR_16];
  else
   VAR_13->supportCollation[VAR_16] = VAR_1;
 }
}
