
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {int * ginstate; } ;
struct TYPE_12__ {scalar_t__ nTotalPages; int nEntryPages; } ;
struct TYPE_11__ {scalar_t__ indtuples; TYPE_3__ buildStats; void* tmpCtx; void* funcCtx; int ginstate; TYPE_6__ accum; } ;
struct TYPE_10__ {double heap_tuples; scalar_t__ index_tuples; } ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef void* MemoryContext ;
typedef int ItemPointerData ;
typedef int IndexInfo ;
typedef TYPE_1__ IndexBuildResult ;
typedef int GinStatsData ;
typedef int GinNullCategory ;
typedef TYPE_2__ GinBuildState ;
typedef int Datum ;
typedef int Buffer ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (TYPE_6__*) ;
 int VAR_5 ;
 int FUNC_16 (int *,int ,int ,int ,int *,int ,TYPE_3__*) ;
 int * FUNC_17 (TYPE_6__*,int *,int *,int *,int *) ;
 int FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (int ,TYPE_3__*,int) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_22 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_23 (int) ;
 double FUNC_24 (int ,int ,int *,int,int,int ,void*,int *) ;

IndexBuildResult *
FUNC_25(Relation VAR_6, Relation VAR_7, IndexInfo *VAR_8)
{
 IndexBuildResult *VAR_9;
 double VAR_10;
 GinBuildState VAR_11;
 Buffer VAR_12,
    VAR_13;
 ItemPointerData *VAR_14;
 Datum VAR_15;
 GinNullCategory VAR_16;
 uint32 VAR_17;
 MemoryContext VAR_18;
 OffsetNumber VAR_19;

 if (FUNC_9(VAR_7) != 0)
  FUNC_14(VAR_2, "index \"%s\" already contains data",
    FUNC_10(VAR_7));

 FUNC_20(&VAR_11.ginstate, VAR_7);
 VAR_11.indtuples = 0;
 FUNC_22(&VAR_11.buildStats, 0, sizeof(GinStatsData));


 VAR_13 = FUNC_5(VAR_7);


 VAR_12 = FUNC_5(VAR_7);

 FUNC_12();
 FUNC_4(VAR_13);
 FUNC_6(VAR_13);
 FUNC_3(VAR_12, VAR_3);
 FUNC_6(VAR_12);


 FUNC_13(VAR_13);
 FUNC_13(VAR_12);
 FUNC_2();


 VAR_11.buildStats.nEntryPages++;





 VAR_11.tmpCtx = FUNC_0(VAR_1,
             "Gin build temporary context",
             VAR_0);





 VAR_11.funcCtx = FUNC_0(VAR_1,
              "Gin build temporary context for user-defined function",
              VAR_0);

 VAR_11.accum.ginstate = &VAR_11.ginstate;
 FUNC_18(&VAR_11.accum);





 VAR_10 = FUNC_24(VAR_6, VAR_7, VAR_8, 0, 1,
            VAR_5, (void *) &VAR_11,
            ((void*)0));


 VAR_18 = FUNC_8(VAR_11.tmpCtx);
 FUNC_15(&VAR_11.accum);
 while ((VAR_14 = FUNC_17(&VAR_11.accum,
         &VAR_19, &VAR_15, &VAR_16, &VAR_17)) != ((void*)0))
 {

  FUNC_1();
  FUNC_16(&VAR_11.ginstate, VAR_19, VAR_15, VAR_16,
        VAR_14, VAR_17, &VAR_11.buildStats);
 }
 FUNC_8(VAR_18);

 FUNC_7(VAR_11.funcCtx);
 FUNC_7(VAR_11.tmpCtx);




 VAR_11.buildStats.nTotalPages = FUNC_9(VAR_7);
 FUNC_19(VAR_7, &VAR_11.buildStats, 1);





 if (FUNC_11(VAR_7))
 {
  FUNC_21(VAR_7, VAR_4,
        0, FUNC_9(VAR_7),
        1);
 }




 VAR_9 = (IndexBuildResult *) FUNC_23(sizeof(IndexBuildResult));

 VAR_9->heap_tuples = VAR_10;
 VAR_9->index_tuples = VAR_11.indtuples;

 return VAR_9;
}
