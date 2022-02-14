
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int indtuples; int heapRel; scalar_t__ spool; } ;
struct TYPE_6__ {int t_tid; } ;
typedef int Relation ;
typedef int * ItemPointer ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ HashBuildState ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,int *,int*) ;
 int FUNC_2 (int ,int *,int*,int *,int*) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_0,
      ItemPointer VAR_1,
      Datum *VAR_2,
      bool *VAR_3,
      bool VAR_4,
      void *VAR_5)
{
 HashBuildState *VAR_6 = (HashBuildState *) VAR_5;
 Datum VAR_7[1];
 bool VAR_8[1];
 IndexTuple VAR_9;


 if (!FUNC_2(VAR_0,
        VAR_2, VAR_3,
        VAR_7, VAR_8))
  return;


 if (VAR_6->spool)
  FUNC_1(VAR_6->spool, VAR_1, VAR_7, VAR_8);
 else
 {

  VAR_9 = FUNC_4(FUNC_0(VAR_0),
        VAR_7, VAR_8);
  VAR_9->t_tid = *VAR_1;
  FUNC_3(VAR_0, VAR_9, VAR_6->heapRel);
  FUNC_5(VAR_9);
 }

 VAR_6->indtuples += 1;
}
