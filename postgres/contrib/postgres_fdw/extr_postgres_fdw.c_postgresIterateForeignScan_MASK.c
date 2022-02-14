
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {int * ss_ScanTupleSlot; } ;
struct TYPE_9__ {TYPE_1__ ss; scalar_t__ fdw_state; } ;
struct TYPE_8__ {scalar_t__ next_tuple; scalar_t__ num_tuples; int * tuples; int eof_reached; int cursor_exists; } ;
typedef TYPE_2__ PgFdwScanState ;
typedef TYPE_3__ ForeignScanState ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_4(ForeignScanState *VAR_0)
{
 PgFdwScanState *VAR_1 = (PgFdwScanState *) VAR_0->fdw_state;
 TupleTableSlot *VAR_2 = VAR_0->ss.ss_ScanTupleSlot;





 if (!VAR_1->cursor_exists)
  FUNC_2(VAR_0);




 if (VAR_1->next_tuple >= VAR_1->num_tuples)
 {

  if (!VAR_1->eof_reached)
   FUNC_3(VAR_0);

  if (VAR_1->next_tuple >= VAR_1->num_tuples)
   return FUNC_0(VAR_2);
 }




 FUNC_1(VAR_1->tuples[VAR_1->next_tuple++],
        VAR_2,
        0);

 return VAR_2;
}
