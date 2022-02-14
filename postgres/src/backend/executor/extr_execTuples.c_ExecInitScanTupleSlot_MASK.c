
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlotOps ;
typedef int * TupleDesc ;
struct TYPE_8__ {int es_tupleTable; } ;
struct TYPE_6__ {int scanopsset; int const* scanops; int scanopsfixed; int * scandesc; } ;
struct TYPE_7__ {TYPE_1__ ps; int ss_ScanTupleSlot; } ;
typedef TYPE_2__ ScanState ;
typedef TYPE_3__ EState ;


 int FUNC_0 (int *,int *,int const*) ;

void
FUNC_1(EState *VAR_0, ScanState *VAR_1,
       TupleDesc VAR_2, const TupleTableSlotOps *VAR_3)
{
 VAR_1->ss_ScanTupleSlot = FUNC_0(&VAR_0->es_tupleTable,
              VAR_2, VAR_3);
 VAR_1->ps.scandesc = VAR_2;
 VAR_1->ps.scanopsfixed = VAR_2 != ((void*)0);
 VAR_1->ps.scanops = VAR_3;
 VAR_1->ps.scanopsset = 1;
}
