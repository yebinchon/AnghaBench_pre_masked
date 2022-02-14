
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {int ps; TYPE_1__* ss_ScanTupleSlot; } ;
struct TYPE_4__ {int tts_tupleDescriptor; } ;
typedef TYPE_2__ ScanState ;
typedef int Index ;


 int FUNC_0 (int *,int ,int ) ;

void
FUNC_1(ScanState *VAR_0, Index VAR_1)
{
 TupleDesc VAR_2 = VAR_0->ss_ScanTupleSlot->tts_tupleDescriptor;

 FUNC_0(&VAR_0->ps, VAR_2, VAR_1);
}
