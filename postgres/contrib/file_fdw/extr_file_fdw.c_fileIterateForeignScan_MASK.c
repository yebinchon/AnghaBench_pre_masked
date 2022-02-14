
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int tts_isnull; int tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_15__ {struct TYPE_15__* previous; void* arg; int callback; } ;
struct TYPE_14__ {scalar_t__ cstate; } ;
struct TYPE_11__ {TYPE_2__* ss_ScanTupleSlot; } ;
struct TYPE_13__ {TYPE_1__ ss; scalar_t__ fdw_state; } ;
typedef TYPE_3__ ForeignScanState ;
typedef TYPE_4__ FileFdwExecutionState ;
typedef TYPE_5__ ErrorContextCallback ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int *,int ,int ) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static TupleTableSlot *
FUNC_3(ForeignScanState *VAR_2)
{
 FileFdwExecutionState *VAR_3 = (FileFdwExecutionState *) VAR_2->fdw_state;
 TupleTableSlot *VAR_4 = VAR_2->ss.ss_ScanTupleSlot;
 bool VAR_5;
 ErrorContextCallback VAR_6;


 VAR_6.callback = VAR_0;
 VAR_6.arg = (void *) VAR_3->cstate;
 VAR_6.previous = VAR_1;
 VAR_1 = &VAR_6;
 FUNC_0(VAR_4);
 VAR_5 = FUNC_2(VAR_3->cstate, ((void*)0),
       VAR_4->tts_values, VAR_4->tts_isnull);
 if (VAR_5)
  FUNC_1(VAR_4);


 VAR_1 = VAR_6.previous;

 return VAR_4;
}
