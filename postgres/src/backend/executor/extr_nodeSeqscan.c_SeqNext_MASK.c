
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int * TableScanDesc ;
struct TYPE_9__ {int es_snapshot; int es_direction; } ;
struct TYPE_6__ {TYPE_4__* state; } ;
struct TYPE_7__ {int * ss_currentScanDesc; int ss_currentRelation; int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_8__ {TYPE_2__ ss; } ;
typedef TYPE_3__ SeqScanState ;
typedef int ScanDirection ;
typedef TYPE_4__ EState ;


 int * FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_2(SeqScanState *VAR_0)
{
 TableScanDesc VAR_1;
 EState *VAR_2;
 ScanDirection VAR_3;
 TupleTableSlot *VAR_4;




 VAR_1 = VAR_0->ss.ss_currentScanDesc;
 VAR_2 = VAR_0->ss.ps.state;
 VAR_3 = VAR_2->es_direction;
 VAR_4 = VAR_0->ss.ss_ScanTupleSlot;

 if (VAR_1 == ((void*)0))
 {




  VAR_1 = FUNC_0(VAR_0->ss.ss_currentRelation,
           VAR_2->es_snapshot,
           0, ((void*)0));
  VAR_0->ss.ss_currentScanDesc = VAR_1;
 }




 if (FUNC_1(VAR_1, VAR_3, VAR_4))
  return VAR_4;
 return ((void*)0);
}
