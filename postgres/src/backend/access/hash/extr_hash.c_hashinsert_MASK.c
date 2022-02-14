
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_tid; } ;
typedef int Relation ;
typedef int * ItemPointer ;
typedef int IndexUniqueCheck ;
typedef TYPE_1__* IndexTuple ;
typedef int IndexInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int*,int *,int*) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (TYPE_1__*) ;

bool
FUNC_5(Relation VAR_0, Datum *VAR_1, bool *VAR_2,
     ItemPointer VAR_3, Relation VAR_4,
     IndexUniqueCheck VAR_5,
     IndexInfo *VAR_6)
{
 Datum VAR_7[1];
 bool VAR_8[1];
 IndexTuple VAR_9;


 if (!FUNC_1(VAR_0,
        VAR_1, VAR_2,
        VAR_7, VAR_8))
  return 0;


 VAR_9 = FUNC_3(FUNC_0(VAR_0), VAR_7, VAR_8);
 VAR_9->t_tid = *VAR_3;

 FUNC_2(VAR_0, VAR_9, VAR_4);

 FUNC_4(VAR_9);

 return 0;
}
