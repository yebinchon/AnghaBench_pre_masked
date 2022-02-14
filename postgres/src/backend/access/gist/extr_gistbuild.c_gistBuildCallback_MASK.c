
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int tempCxt; } ;
struct TYPE_20__ {scalar_t__ bufferingMode; int indtuples; TYPE_1__* gfbb; TYPE_7__* giststate; int indtuplesSize; int heaprel; int freespace; } ;
struct TYPE_19__ {int t_tid; } ;
struct TYPE_18__ {int rd_smgr; } ;
struct TYPE_17__ {int levelStep; int pagesPerBuffer; } ;
typedef TYPE_2__* Relation ;
typedef int MemoryContext ;
typedef int * ItemPointer ;
typedef TYPE_3__* IndexTuple ;
typedef TYPE_4__ GISTBuildState ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_7__*,TYPE_2__*,int *,int*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int ,TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_7,
      ItemPointer VAR_8,
      Datum *VAR_9,
      bool *VAR_10,
      bool VAR_11,
      void *VAR_12)
{
 GISTBuildState *VAR_13 = (GISTBuildState *) VAR_12;
 IndexTuple VAR_14;
 MemoryContext VAR_15;

 VAR_15 = FUNC_2(VAR_13->giststate->tempCxt);


 VAR_14 = FUNC_5(VAR_13->giststate, VAR_7, VAR_9, VAR_10, 1);
 VAR_14->t_tid = *VAR_8;

 if (VAR_13->bufferingMode == VAR_2)
 {

  FUNC_4(VAR_13, VAR_14);
 }
 else
 {




  FUNC_7(VAR_7, VAR_14, VAR_13->freespace,
      VAR_13->giststate, VAR_13->heaprel, 1);
 }


 VAR_13->indtuples += 1;
 VAR_13->indtuplesSize += FUNC_0(VAR_14);

 FUNC_2(VAR_15);
 FUNC_1(VAR_13->giststate->tempCxt);

 if (VAR_13->bufferingMode == VAR_2 &&
  VAR_13->indtuples % VAR_1 == 0)
 {

  VAR_13->gfbb->pagesPerBuffer =
   FUNC_3(VAR_13, VAR_13->gfbb->levelStep);
 }
 if ((VAR_13->bufferingMode == VAR_3 &&
   VAR_13->indtuples % VAR_0 == 0 &&
   VAR_6 < FUNC_8(VAR_7->rd_smgr, VAR_5)) ||
  (VAR_13->bufferingMode == VAR_4 &&
   VAR_13->indtuples >= VAR_1))
 {




  FUNC_6(VAR_13);
 }
}
