
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int bistate; int ti_options; int output_cid; int transientrel; } ;
typedef int DestReceiver ;
typedef TYPE_1__ DR_transientrel ;


 int FUNC_0 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 DR_transientrel *VAR_2 = (DR_transientrel *) VAR_1;
 FUNC_0(VAR_2->transientrel,
        VAR_0,
        VAR_2->output_cid,
        VAR_2->ti_options,
        VAR_2->bistate);



 return 1;
}
