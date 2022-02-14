
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {int natts; } ;
struct TYPE_14__ {void* fn_oid; } ;
struct TYPE_13__ {void** supportCollation; TYPE_7__* fetchFn; TYPE_7__* distanceFn; TYPE_7__* equalFn; TYPE_7__* picksplitFn; TYPE_7__* penaltyFn; TYPE_7__* decompressFn; TYPE_7__* compressFn; TYPE_7__* unionFn; TYPE_7__* consistentFn; TYPE_9__* nonLeafTupdesc; TYPE_10__* leafTupdesc; void* tempCxt; void* scanCxt; } ;
struct TYPE_12__ {TYPE_10__* rd_att; void** rd_indcollation; } ;
struct TYPE_11__ {int natts; } ;
typedef TYPE_1__* Relation ;
typedef void* MemoryContext ;
typedef TYPE_2__ GISTSTATE ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;
 TYPE_9__* FUNC_1 (TYPE_10__*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_14 ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (TYPE_7__*,int ,void*) ;
 void* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_9 (int) ;

GISTSTATE *
FUNC_10(Relation VAR_15)
{
 GISTSTATE *VAR_16;
 MemoryContext VAR_17;
 MemoryContext VAR_18;
 int VAR_19;


 if (VAR_15->rd_att->natts > VAR_13)
  FUNC_5(VAR_3, "numberOfAttributes %d > %d",
    VAR_15->rd_att->natts, VAR_13);


 VAR_17 = FUNC_0(VAR_1,
         "GiST scan context",
         VAR_0);
 VAR_18 = FUNC_3(VAR_17);


 VAR_16 = (GISTSTATE *) FUNC_9(sizeof(GISTSTATE));

 VAR_16->scanCxt = VAR_17;
 VAR_16->tempCxt = VAR_17;
 VAR_16->leafTupdesc = VAR_15->rd_att;
 VAR_16->nonLeafTupdesc = FUNC_1(VAR_15->rd_att);
 VAR_16->nonLeafTupdesc->natts =
  FUNC_2(VAR_15);

 for (VAR_19 = 0; VAR_19 < FUNC_2(VAR_15); VAR_19++)
 {
  FUNC_6(&(VAR_16->consistentFn[VAR_19]),
        FUNC_8(VAR_15, VAR_19 + 1, VAR_5),
        VAR_17);
  FUNC_6(&(VAR_16->unionFn[VAR_19]),
        FUNC_8(VAR_15, VAR_19 + 1, VAR_12),
        VAR_17);


  if (FUNC_4(FUNC_7(VAR_15, VAR_19 + 1, VAR_4)))
   FUNC_6(&(VAR_16->compressFn[VAR_19]),
         FUNC_8(VAR_15, VAR_19 + 1, VAR_4),
         VAR_17);
  else
   VAR_16->compressFn[VAR_19].fn_oid = VAR_14;


  if (FUNC_4(FUNC_7(VAR_15, VAR_19 + 1, VAR_6)))
   FUNC_6(&(VAR_16->decompressFn[VAR_19]),
         FUNC_8(VAR_15, VAR_19 + 1, VAR_6),
         VAR_17);
  else
   VAR_16->decompressFn[VAR_19].fn_oid = VAR_14;

  FUNC_6(&(VAR_16->penaltyFn[VAR_19]),
        FUNC_8(VAR_15, VAR_19 + 1, VAR_10),
        VAR_17);
  FUNC_6(&(VAR_16->picksplitFn[VAR_19]),
        FUNC_8(VAR_15, VAR_19 + 1, VAR_11),
        VAR_17);
  FUNC_6(&(VAR_16->equalFn[VAR_19]),
        FUNC_8(VAR_15, VAR_19 + 1, VAR_8),
        VAR_17);


  if (FUNC_4(FUNC_7(VAR_15, VAR_19 + 1, VAR_7)))
   FUNC_6(&(VAR_16->distanceFn[VAR_19]),
         FUNC_8(VAR_15, VAR_19 + 1, VAR_7),
         VAR_17);
  else
   VAR_16->distanceFn[VAR_19].fn_oid = VAR_14;


  if (FUNC_4(FUNC_7(VAR_15, VAR_19 + 1, VAR_9)))
   FUNC_6(&(VAR_16->fetchFn[VAR_19]),
         FUNC_8(VAR_15, VAR_19 + 1, VAR_9),
         VAR_17);
  else
   VAR_16->fetchFn[VAR_19].fn_oid = VAR_14;
  if (FUNC_4(VAR_15->rd_indcollation[VAR_19]))
   VAR_16->supportCollation[VAR_19] = VAR_15->rd_indcollation[VAR_19];
  else
   VAR_16->supportCollation[VAR_19] = VAR_2;
 }


 for (; VAR_19 < VAR_15->rd_att->natts; VAR_19++)
 {
  VAR_16->consistentFn[VAR_19].fn_oid = VAR_14;
  VAR_16->unionFn[VAR_19].fn_oid = VAR_14;
  VAR_16->compressFn[VAR_19].fn_oid = VAR_14;
  VAR_16->decompressFn[VAR_19].fn_oid = VAR_14;
  VAR_16->penaltyFn[VAR_19].fn_oid = VAR_14;
  VAR_16->picksplitFn[VAR_19].fn_oid = VAR_14;
  VAR_16->equalFn[VAR_19].fn_oid = VAR_14;
  VAR_16->distanceFn[VAR_19].fn_oid = VAR_14;
  VAR_16->fetchFn[VAR_19].fn_oid = VAR_14;
  VAR_16->supportCollation[VAR_19] = VAR_14;
 }

 FUNC_3(VAR_18);

 return VAR_16;
}
