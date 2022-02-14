
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_6__ {int epqParam; int * relsubs_done; int * relsubs_rowmark; int * recheckplanstate; int * recheckestate; int * origslot; int * arowMarks; int * plan; int ** relsubs_slot; int tuple_table; TYPE_1__* parentestate; } ;
struct TYPE_5__ {int es_range_table_size; } ;
typedef int Plan ;
typedef int List ;
typedef int Index ;
typedef TYPE_1__ EState ;
typedef TYPE_2__ EPQState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(EPQState *VAR_1, EState *VAR_2,
     Plan *VAR_3, List *VAR_4, int VAR_5)
{
 Index VAR_6 = VAR_2->es_range_table_size;


 VAR_1->parentestate = VAR_2;
 VAR_1->epqParam = VAR_5;
 VAR_1->tuple_table = VAR_0;
 VAR_1->relsubs_slot = (TupleTableSlot **)
  FUNC_0(VAR_6 * sizeof(TupleTableSlot *));


 VAR_1->plan = VAR_3;
 VAR_1->arowMarks = VAR_4;


 VAR_1->origslot = ((void*)0);
 VAR_1->recheckestate = ((void*)0);
 VAR_1->recheckplanstate = ((void*)0);
 VAR_1->relsubs_rowmark = ((void*)0);
 VAR_1->relsubs_done = ((void*)0);
}
