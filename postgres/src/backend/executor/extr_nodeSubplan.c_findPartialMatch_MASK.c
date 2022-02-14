
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef TYPE_1__* TupleHashTable ;
typedef int TupleHashIterator ;
typedef TYPE_2__* TupleHashEntry ;
struct TYPE_8__ {int firstTuple; } ;
struct TYPE_7__ {int numCols; int tempcxt; int tab_collations; int tableslot; int * keyColIdx; } ;
typedef int FmgrInfo ;
typedef int AttrNumber ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int *,int *,int ,int ) ;

__attribute__((used)) static bool
FUNC_6(TupleHashTable VAR_0, TupleTableSlot *VAR_1,
     FmgrInfo *VAR_2)
{
 int VAR_3 = VAR_0->numCols;
 AttrNumber *VAR_4 = VAR_0->keyColIdx;
 TupleHashIterator VAR_5;
 TupleHashEntry VAR_6;

 FUNC_2(VAR_0, &VAR_5);
 while ((VAR_6 = FUNC_3(VAR_0, &VAR_5)) != ((void*)0))
 {
  FUNC_0();

  FUNC_1(VAR_6->firstTuple, VAR_0->tableslot, 0);
  if (!FUNC_5(VAR_1, VAR_0->tableslot,
          VAR_3, VAR_4,
          VAR_2,
          VAR_0->tab_collations,
          VAR_0->tempcxt))
  {
   FUNC_4(&VAR_5);
   return 1;
  }
 }

 return 0;
}
