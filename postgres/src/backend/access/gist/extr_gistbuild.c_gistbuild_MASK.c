
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {int tempCxt; } ;
struct TYPE_22__ {scalar_t__ bufferingMode; int freespace; scalar_t__ indtuples; TYPE_8__* giststate; int gfbb; scalar_t__ indtuplesSize; TYPE_1__* heaprel; TYPE_1__* indexrel; } ;
struct TYPE_21__ {scalar_t__ buffering_mode; int fillfactor; } ;
struct TYPE_20__ {double heap_tuples; double index_tuples; } ;
struct TYPE_19__ {scalar_t__ rd_options; } ;
typedef TYPE_1__* Relation ;
typedef int Page ;
typedef int MemoryContext ;
typedef int IndexInfo ;
typedef TYPE_2__ IndexBuildResult ;
typedef TYPE_3__ GiSTOptions ;
typedef TYPE_4__ GISTBuildState ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (TYPE_8__*) ;
 int VAR_15 ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_8__* FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_22 (int) ;
 double FUNC_23 (TYPE_1__*,TYPE_1__*,int *,int,int,int ,void*,int *) ;

IndexBuildResult *
FUNC_24(Relation VAR_16, Relation VAR_17, IndexInfo *VAR_18)
{
 IndexBuildResult *VAR_19;
 double VAR_20;
 GISTBuildState VAR_21;
 Buffer VAR_22;
 Page VAR_23;
 MemoryContext VAR_24 = VAR_1;
 int VAR_25;

 VAR_21.indexrel = VAR_17;
 VAR_21.heaprel = VAR_16;

 if (VAR_17->rd_options)
 {

  GiSTOptions *VAR_26 = (GiSTOptions *) VAR_17->rd_options;

  if (VAR_26->buffering_mode == VAR_11)
   VAR_21.bufferingMode = VAR_8;
  else if (VAR_26->buffering_mode == VAR_10)
   VAR_21.bufferingMode = VAR_7;
  else
   VAR_21.bufferingMode = VAR_6;

  VAR_25 = VAR_26->fillfactor;
 }
 else
 {




  VAR_21.bufferingMode = VAR_6;
  VAR_25 = VAR_9;
 }

 VAR_21.freespace = VAR_0 * (100 - VAR_25) / 100;





 if (FUNC_9(VAR_17) != 0)
  FUNC_15(VAR_3, "index \"%s\" already contains data",
    FUNC_10(VAR_17));


 VAR_21.giststate = FUNC_20(VAR_17);






 VAR_21.giststate->tempCxt = FUNC_14();


 VAR_22 = FUNC_19(VAR_17);
 FUNC_0(FUNC_1(VAR_22) == VAR_12);
 VAR_23 = FUNC_2(VAR_22);

 FUNC_12();

 FUNC_4(VAR_22, VAR_4);

 FUNC_5(VAR_22);
 FUNC_8(VAR_23, VAR_13);

 FUNC_13(VAR_22);

 FUNC_3();


 VAR_21.indtuples = 0;
 VAR_21.indtuplesSize = 0;




 VAR_20 = FUNC_23(VAR_16, VAR_17, VAR_18, 1, 1,
            VAR_15,
            (void *) &VAR_21, ((void*)0));





 if (VAR_21.bufferingMode == VAR_5)
 {
  FUNC_15(VAR_2, "all tuples processed, emptying buffers");
  FUNC_17(&VAR_21);
  FUNC_18(VAR_21.gfbb);
 }


 FUNC_7(VAR_24);
 FUNC_6(VAR_21.giststate->tempCxt);

 FUNC_16(VAR_21.giststate);





 if (FUNC_11(VAR_17))
 {
  FUNC_21(VAR_17, VAR_14,
        0, FUNC_9(VAR_17),
        1);
 }




 VAR_19 = (IndexBuildResult *) FUNC_22(sizeof(IndexBuildResult));

 VAR_19->heap_tuples = VAR_20;
 VAR_19->index_tuples = (double) VAR_21.indtuples;

 return VAR_19;
}
