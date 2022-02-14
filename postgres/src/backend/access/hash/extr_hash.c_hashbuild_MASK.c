
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_20__ {scalar_t__ indtuples; int * spool; TYPE_2__* heapRel; } ;
struct TYPE_19__ {double heap_tuples; scalar_t__ index_tuples; } ;
struct TYPE_18__ {TYPE_1__* rd_rel; } ;
struct TYPE_17__ {scalar_t__ relpersistence; } ;
typedef TYPE_2__* Relation ;
typedef int IndexInfo ;
typedef TYPE_3__ IndexBuildResult ;
typedef TYPE_4__ HashBuildState ;
typedef int BlockNumber ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (long,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,double,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (TYPE_2__*,int *,int *,double*,double*) ;
 int VAR_7 ;
 long VAR_8 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,scalar_t__) ;
 double FUNC_11 (TYPE_2__*,TYPE_2__*,int *,int,int,int ,void*,int *) ;

IndexBuildResult *
FUNC_12(Relation VAR_9, Relation VAR_10, IndexInfo *VAR_11)
{
 IndexBuildResult *VAR_12;
 BlockNumber VAR_13;
 double VAR_14;
 double VAR_15;
 uint32 VAR_16;
 long VAR_17;
 HashBuildState VAR_18;





 if (FUNC_1(VAR_10) != 0)
  FUNC_7(VAR_1, "index \"%s\" already contains data",
    FUNC_2(VAR_10));


 FUNC_8(VAR_9, ((void*)0), &VAR_13, &VAR_14, &VAR_15);


 VAR_16 = FUNC_6(VAR_10, VAR_14, VAR_2);
 VAR_17 = (VAR_8 * 1024L) / VAR_0;
 if (VAR_10->rd_rel->relpersistence != VAR_6)
  VAR_17 = FUNC_0(VAR_17, VAR_3);
 else
  VAR_17 = FUNC_0(VAR_17, VAR_4);

 if (VAR_16 >= (uint32) VAR_17)
  VAR_18.spool = FUNC_5(VAR_9, VAR_10, VAR_16);
 else
  VAR_18.spool = ((void*)0);


 VAR_18.indtuples = 0;
 VAR_18.heapRel = VAR_9;


 VAR_14 = FUNC_11(VAR_9, VAR_10, VAR_11, 1, 1,
            VAR_7,
            (void *) &VAR_18, ((void*)0));
 FUNC_10(VAR_5,
         VAR_18.indtuples);

 if (VAR_18.spool)
 {

  FUNC_3(VAR_18.spool, VAR_18.heapRel);
  FUNC_4(VAR_18.spool);
 }




 VAR_12 = (IndexBuildResult *) FUNC_9(sizeof(IndexBuildResult));

 VAR_12->heap_tuples = VAR_14;
 VAR_12->index_tuples = VAR_18.indtuples;

 return VAR_12;
}
