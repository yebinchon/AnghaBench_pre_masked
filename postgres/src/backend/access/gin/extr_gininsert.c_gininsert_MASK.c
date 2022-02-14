
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* origTupdesc; } ;
struct TYPE_10__ {void* ii_AmCache; int ii_Context; } ;
struct TYPE_9__ {int natts; } ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef int MemoryContext ;
typedef int ItemPointer ;
typedef int IndexUniqueCheck ;
typedef TYPE_2__ IndexInfo ;
typedef int GinTupleCollector ;
typedef TYPE_3__ GinState ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int) ;

bool
FUNC_10(Relation VAR_2, Datum *VAR_3, bool *VAR_4,
    ItemPointer VAR_5, Relation VAR_6,
    IndexUniqueCheck VAR_7,
    IndexInfo *VAR_8)
{
 GinState *VAR_9 = (GinState *) VAR_8->ii_AmCache;
 MemoryContext VAR_10;
 MemoryContext VAR_11;
 int VAR_12;


 if (VAR_9 == ((void*)0))
 {
  VAR_10 = FUNC_3(VAR_8->ii_Context);
  VAR_9 = (GinState *) FUNC_9(sizeof(GinState));
  FUNC_7(VAR_9, VAR_2);
  VAR_8->ii_AmCache = (void *) VAR_9;
  FUNC_3(VAR_10);
 }

 VAR_11 = FUNC_0(VAR_1,
           "Gin insert temporary context",
           VAR_0);

 VAR_10 = FUNC_3(VAR_11);

 if (FUNC_1(VAR_2))
 {
  GinTupleCollector VAR_13;

  FUNC_8(&VAR_13, 0, sizeof(GinTupleCollector));

  for (VAR_12 = 0; VAR_12 < VAR_9->origTupdesc->natts; VAR_12++)
   FUNC_4(VAR_9, &VAR_13,
         (OffsetNumber) (VAR_12 + 1),
         VAR_3[VAR_12], VAR_4[VAR_12],
         VAR_5);

  FUNC_5(VAR_9, &VAR_13);
 }
 else
 {
  for (VAR_12 = 0; VAR_12 < VAR_9->origTupdesc->natts; VAR_12++)
   FUNC_6(VAR_9, (OffsetNumber) (VAR_12 + 1),
          VAR_3[VAR_12], VAR_4[VAR_12],
          VAR_5);
 }

 FUNC_3(VAR_10);
 FUNC_2(VAR_11);

 return 0;
}
