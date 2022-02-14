
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_8__ {int firstTuple; scalar_t__ additional; } ;
typedef TYPE_2__ TupleHashEntryData ;
struct TYPE_7__ {int * ps_ResultTupleSlot; } ;
struct TYPE_9__ {int setop_done; scalar_t__ numOutput; int hashiter; int hashtable; TYPE_1__ ps; } ;
typedef int SetOpStatePerGroup ;
typedef TYPE_3__ SetOpState ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,int) ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_5(SetOpState *VAR_0)
{
 TupleHashEntryData *VAR_1;
 TupleTableSlot *VAR_2;




 VAR_2 = VAR_0->ps.ps_ResultTupleSlot;




 while (!VAR_0->setop_done)
 {
  FUNC_0();




  VAR_1 = FUNC_3(VAR_0->hashtable, &VAR_0->hashiter);
  if (VAR_1 == ((void*)0))
  {

   VAR_0->setop_done = 1;
   return ((void*)0);
  }





  FUNC_4(VAR_0, (SetOpStatePerGroup) VAR_1->additional);

  if (VAR_0->numOutput > 0)
  {
   VAR_0->numOutput--;
   return FUNC_2(VAR_1->firstTuple,
           VAR_2,
           0);
  }
 }


 FUNC_1(VAR_2);
 return ((void*)0);
}
