
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_11__ {TYPE_1__* origTupdesc; } ;
struct TYPE_10__ {long allocatedMemory; } ;
struct TYPE_9__ {TYPE_3__ accum; int tmpCtx; int buildStats; TYPE_6__ ginstate; } ;
struct TYPE_8__ {int natts; } ;
typedef long Size ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef int MemoryContext ;
typedef int ItemPointerData ;
typedef int ItemPointer ;
typedef int GinNullCategory ;
typedef TYPE_2__ GinBuildState ;
typedef int Datum ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_6__*,int ,int ,int ,int *,int ,int *) ;
 int * FUNC_5 (TYPE_3__*,int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_8(Relation VAR_1, ItemPointer VAR_2, Datum *VAR_3,
     bool *VAR_4, bool VAR_5, void *VAR_6)
{
 GinBuildState *VAR_7 = (GinBuildState *) VAR_6;
 MemoryContext VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7->tmpCtx);

 for (VAR_9 = 0; VAR_9 < VAR_7->ginstate.origTupdesc->natts; VAR_9++)
  FUNC_6(VAR_7, (OffsetNumber) (VAR_9 + 1),
          VAR_3[VAR_9], VAR_4[VAR_9], VAR_2);


 if (VAR_7->accum.allocatedMemory >= (Size) VAR_0 * 1024L)
 {
  ItemPointerData *VAR_10;
  Datum VAR_11;
  GinNullCategory VAR_12;
  uint32 VAR_13;
  OffsetNumber VAR_14;

  FUNC_3(&VAR_7->accum);
  while ((VAR_10 = FUNC_5(&VAR_7->accum,
          &VAR_14, &VAR_11, &VAR_12, &VAR_13)) != ((void*)0))
  {

   FUNC_0();
   FUNC_4(&VAR_7->ginstate, VAR_14, VAR_11, VAR_12,
         VAR_10, VAR_13, &VAR_7->buildStats);
  }

  FUNC_1(VAR_7->tmpCtx);
  FUNC_7(&VAR_7->accum);
 }

 FUNC_2(VAR_8);
}
