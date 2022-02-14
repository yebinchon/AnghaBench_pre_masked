
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int isBuild; } ;
struct TYPE_6__ {double heap_tuples; scalar_t__ index_tuples; } ;
struct TYPE_5__ {scalar_t__ indtuples; int tmpCtx; TYPE_4__ spgstate; } ;
typedef TYPE_1__ SpGistBuildState ;
typedef int Relation ;
typedef int IndexInfo ;
typedef TYPE_2__ IndexBuildResult ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (int ,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_19 (int) ;
 int VAR_9 ;
 double FUNC_20 (int ,int ,int *,int,int,int ,void*,int *) ;

IndexBuildResult *
FUNC_21(Relation VAR_10, Relation VAR_11, IndexInfo *VAR_12)
{
 IndexBuildResult *VAR_13;
 double VAR_14;
 SpGistBuildState VAR_15;
 Buffer VAR_16,
    VAR_17,
    VAR_18;

 if (FUNC_7(VAR_11) != 0)
  FUNC_16(VAR_2, "index \"%s\" already contains data",
    FUNC_8(VAR_11));




 VAR_16 = FUNC_13(VAR_11);
 VAR_17 = FUNC_13(VAR_11);
 VAR_18 = FUNC_13(VAR_11);

 FUNC_1(FUNC_2(VAR_16) == VAR_5);
 FUNC_1(FUNC_2(VAR_17) == VAR_8);
 FUNC_1(FUNC_2(VAR_18) == VAR_7);

 FUNC_10();

 FUNC_12(FUNC_3(VAR_16));
 FUNC_5(VAR_16);
 FUNC_11(VAR_17, VAR_4);
 FUNC_5(VAR_17);
 FUNC_11(VAR_18, VAR_4 | VAR_6);
 FUNC_5(VAR_18);


 FUNC_4();

 FUNC_15(VAR_16);
 FUNC_15(VAR_17);
 FUNC_15(VAR_18);




 FUNC_17(&VAR_15.spgstate, VAR_11);
 VAR_15.spgstate.isBuild = 1;
 VAR_15.indtuples = 0;

 VAR_15.tmpCtx = FUNC_0(VAR_1,
             "SP-GiST build temporary context",
             VAR_0);

 VAR_14 = FUNC_20(VAR_10, VAR_11, VAR_12, 1, 1,
            VAR_9, (void *) &VAR_15,
            ((void*)0));

 FUNC_6(VAR_15.tmpCtx);

 FUNC_14(VAR_11);





 if (FUNC_9(VAR_11))
 {
  FUNC_18(VAR_11, VAR_3,
        0, FUNC_7(VAR_11),
        1);
 }

 VAR_13 = (IndexBuildResult *) FUNC_19(sizeof(IndexBuildResult));
 VAR_13->heap_tuples = VAR_14;
 VAR_13->index_tuples = VAR_15.indtuples;

 return VAR_13;
}
