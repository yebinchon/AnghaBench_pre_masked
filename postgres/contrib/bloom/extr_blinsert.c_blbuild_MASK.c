
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buildstate ;
struct TYPE_8__ {scalar_t__ count; int indtuples; int tmpCtx; int blstate; } ;
struct TYPE_7__ {double heap_tuples; int index_tuples; } ;
typedef int Relation ;
typedef int IndexInfo ;
typedef TYPE_1__ IndexBuildResult ;
typedef TYPE_2__ BloomBuildState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_10 (int) ;
 double FUNC_11 (int ,int ,int *,int,int,int ,void*,int *) ;

IndexBuildResult *
FUNC_12(Relation VAR_4, Relation VAR_5, IndexInfo *VAR_6)
{
 IndexBuildResult *VAR_7;
 double VAR_8;
 BloomBuildState VAR_9;

 if (FUNC_3(VAR_5) != 0)
  FUNC_5(VAR_2, "index \"%s\" already contains data",
    FUNC_4(VAR_5));


 FUNC_1(VAR_5);


 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 FUNC_7(&VAR_9.blstate, VAR_5);
 VAR_9.tmpCtx = FUNC_0(VAR_1,
             "Bloom build temporary context",
             VAR_0);
 FUNC_8(&VAR_9);


 VAR_8 = FUNC_11(VAR_4, VAR_5, VAR_6, 1, 1,
            VAR_3, (void *) &VAR_9,
            ((void*)0));


 if (VAR_9.count > 0)
  FUNC_6(VAR_5, &VAR_9);

 FUNC_2(VAR_9.tmpCtx);

 VAR_7 = (IndexBuildResult *) FUNC_10(sizeof(IndexBuildResult));
 VAR_7->heap_tuples = VAR_8;
 VAR_7->index_tuples = VAR_9.indtuples;

 return VAR_7;
}
