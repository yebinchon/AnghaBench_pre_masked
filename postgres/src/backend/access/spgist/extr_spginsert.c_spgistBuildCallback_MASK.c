
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int indtuples; int tmpCtx; int spgstate; } ;
typedef TYPE_1__ SpGistBuildState ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int ItemPointer ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(Relation VAR_0, ItemPointer VAR_1, Datum *VAR_2,
     bool *VAR_3, bool VAR_4, void *VAR_5)
{
 SpGistBuildState *VAR_6 = (SpGistBuildState *) VAR_5;
 MemoryContext VAR_7;


 VAR_7 = FUNC_1(VAR_6->tmpCtx);







 while (!FUNC_2(VAR_0, &VAR_6->spgstate, VAR_1,
      *VAR_2, *VAR_3))
 {
  FUNC_0(VAR_6->tmpCtx);
 }


 VAR_6->indtuples += 1;

 FUNC_1(VAR_7);
 FUNC_0(VAR_6->tmpCtx);
}
