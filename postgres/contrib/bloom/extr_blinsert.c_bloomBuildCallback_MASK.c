
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
struct TYPE_6__ {int indtuples; int tmpCtx; int count; TYPE_1__ data; int blstate; } ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int ItemPointer ;
typedef int Datum ;
typedef int BloomTuple ;
typedef TYPE_2__ BloomBuildState ;


 int * FUNC_0 (int *,int ,int *,int*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(Relation VAR_1, ItemPointer VAR_2, Datum *VAR_3,
       bool *VAR_4, bool VAR_5, void *VAR_6)
{
 BloomBuildState *VAR_7 = (BloomBuildState *) VAR_6;
 MemoryContext VAR_8;
 BloomTuple *VAR_9;

 VAR_8 = FUNC_4(VAR_7->tmpCtx);

 VAR_9 = FUNC_0(&VAR_7->blstate, VAR_2, VAR_3, VAR_4);


 if (FUNC_1(&VAR_7->blstate, VAR_7->data.data, VAR_9))
 {

  VAR_7->count++;
 }
 else
 {

  FUNC_6(VAR_1, VAR_7);

  FUNC_2();

  FUNC_7(VAR_7);

  if (!FUNC_1(&VAR_7->blstate, VAR_7->data.data, VAR_9))
  {

   FUNC_5(VAR_0, "could not add new bloom tuple to empty page");
  }


  VAR_7->count++;
 }


 VAR_7->indtuples += 1;

 FUNC_4(VAR_8);
 FUNC_3(VAR_7->tmpCtx);
}
