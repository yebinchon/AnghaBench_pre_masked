
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pagesPerRange; int version; } ;
typedef TYPE_1__ xl_brin_createidx ;
typedef int XLogRecPtr ;
struct TYPE_10__ {double bs_numtuples; int bs_rmAccess; } ;
struct TYPE_9__ {double heap_tuples; double index_tuples; } ;
typedef int Relation ;
typedef int Page ;
typedef int IndexInfo ;
typedef TYPE_2__ IndexBuildResult ;
typedef int Buffer ;
typedef int BrinRevmap ;
typedef TYPE_3__ BrinBuildState ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int VAR_9 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (char*,int ) ;
 int * FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_19 (int ,char*,int ) ;
 int FUNC_20 (TYPE_3__*) ;
 TYPE_3__* FUNC_21 (int ,int *,int ) ;
 scalar_t__ FUNC_22 (int) ;
 double FUNC_23 (int ,int ,int *,int,int,int ,void*,int *) ;
 int FUNC_24 (TYPE_3__*) ;

IndexBuildResult *
FUNC_25(Relation VAR_11, Relation VAR_12, IndexInfo *VAR_13)
{
 IndexBuildResult *VAR_14;
 double VAR_15;
 double VAR_16;
 BrinRevmap *VAR_17;
 BrinBuildState *VAR_18;
 Buffer VAR_19;
 BlockNumber VAR_20;




 if (FUNC_8(VAR_12) != 0)
  FUNC_19(VAR_3, "index \"%s\" already contains data",
    FUNC_9(VAR_12));






 VAR_19 = FUNC_7(VAR_12, VAR_4);
 FUNC_0(FUNC_2(VAR_19) == VAR_1);
 FUNC_4(VAR_19, VAR_2);

 FUNC_18(FUNC_3(VAR_19), FUNC_1(VAR_12),
        VAR_0);
 FUNC_5(VAR_19);

 if (FUNC_10(VAR_12))
 {
  xl_brin_createidx VAR_21;
  XLogRecPtr VAR_22;
  Page VAR_23;

  VAR_21.version = VAR_0;
  VAR_21.pagesPerRange = FUNC_1(VAR_12);

  FUNC_12();
  FUNC_15((char *) &VAR_21, VAR_8);
  FUNC_14(0, VAR_19, VAR_6 | VAR_5);

  VAR_22 = FUNC_13(VAR_7, VAR_9);

  VAR_23 = FUNC_3(VAR_19);
  FUNC_6(VAR_23, VAR_22);
 }

 FUNC_11(VAR_19);




 VAR_17 = FUNC_16(VAR_12, &VAR_20, ((void*)0));
 VAR_18 = FUNC_21(VAR_12, VAR_17, VAR_20);





 VAR_15 = FUNC_23(VAR_11, VAR_12, VAR_13, 0, 1,
            VAR_10, (void *) VAR_18, ((void*)0));


 FUNC_20(VAR_18);


 VAR_16 = VAR_18->bs_numtuples;
 FUNC_17(VAR_18->bs_rmAccess);
 FUNC_24(VAR_18);




 VAR_14 = (IndexBuildResult *) FUNC_22(sizeof(IndexBuildResult));

 VAR_14->heap_tuples = VAR_15;
 VAR_14->index_tuples = VAR_16;

 return VAR_14;
}
