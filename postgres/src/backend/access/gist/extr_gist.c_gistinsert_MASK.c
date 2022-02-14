
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int tempCxt; } ;
struct TYPE_11__ {void* ii_AmCache; int ii_Context; } ;
struct TYPE_10__ {int t_tid; } ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int * ItemPointer ;
typedef int IndexUniqueCheck ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ IndexInfo ;
typedef TYPE_3__ GISTSTATE ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (TYPE_3__*,int ,int *,int*,int) ;
 int FUNC_4 (int ,TYPE_1__*,int ,TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_5 (int ) ;

bool
FUNC_6(Relation VAR_0, Datum *VAR_1, bool *VAR_2,
     ItemPointer VAR_3, Relation VAR_4,
     IndexUniqueCheck VAR_5,
     IndexInfo *VAR_6)
{
 GISTSTATE *VAR_7 = (GISTSTATE *) VAR_6->ii_AmCache;
 IndexTuple VAR_8;
 MemoryContext VAR_9;


 if (VAR_7 == ((void*)0))
 {
  VAR_9 = FUNC_1(VAR_6->ii_Context);
  VAR_7 = FUNC_5(VAR_0);
  VAR_7->tempCxt = FUNC_2();
  VAR_6->ii_AmCache = (void *) VAR_7;
  FUNC_1(VAR_9);
 }

 VAR_9 = FUNC_1(VAR_7->tempCxt);

 VAR_8 = FUNC_3(VAR_7, VAR_0,
       VAR_1, VAR_2, 1 );
 VAR_8->t_tid = *VAR_3;

 FUNC_4(VAR_0, VAR_8, 0, VAR_7, VAR_4, 0);


 FUNC_1(VAR_9);
 FUNC_0(VAR_7->tempCxt);

 return 0;
}
