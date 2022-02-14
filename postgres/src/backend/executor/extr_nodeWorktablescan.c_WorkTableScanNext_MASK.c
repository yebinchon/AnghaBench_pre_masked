
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_10__ {int * ss_ScanTupleSlot; TYPE_2__ ps; } ;
struct TYPE_11__ {TYPE_4__ ss; TYPE_3__* rustate; } ;
typedef TYPE_5__ WorkTableScanState ;
typedef int Tuplestorestate ;
typedef int TupleTableSlot ;
struct TYPE_9__ {int * working_table; } ;
struct TYPE_7__ {int es_direction; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_3(WorkTableScanState *VAR_0)
{
 TupleTableSlot *VAR_1;
 Tuplestorestate *VAR_2;
 FUNC_0(FUNC_1(VAR_0->ss.ps.state->es_direction));

 VAR_2 = VAR_0->rustate->working_table;




 VAR_1 = VAR_0->ss.ss_ScanTupleSlot;
 (void) FUNC_2(VAR_2, 1, 0, VAR_1);
 return VAR_1;
}
