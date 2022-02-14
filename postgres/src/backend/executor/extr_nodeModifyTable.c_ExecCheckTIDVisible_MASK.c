
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int ri_RelationDesc; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int Relation ;
typedef int ItemPointer ;
typedef int EState ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(EState *VAR_2,
     ResultRelInfo *VAR_3,
     ItemPointer VAR_4,
     TupleTableSlot *VAR_5)
{
 Relation VAR_6 = VAR_3->ri_RelationDesc;


 if (!FUNC_2())
  return;

 if (!FUNC_4(VAR_6, VAR_4, VAR_1, VAR_5))
  FUNC_3(VAR_0, "failed to fetch conflicting tuple for ON CONFLICT");
 FUNC_0(VAR_2, VAR_6, VAR_5);
 FUNC_1(VAR_5);
}
