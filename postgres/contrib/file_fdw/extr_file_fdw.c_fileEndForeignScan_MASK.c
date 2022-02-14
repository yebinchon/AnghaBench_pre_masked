
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cstate; } ;
struct TYPE_4__ {scalar_t__ fdw_state; } ;
typedef TYPE_1__ ForeignScanState ;
typedef TYPE_2__ FileFdwExecutionState ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(ForeignScanState *VAR_0)
{
 FileFdwExecutionState *VAR_1 = (FileFdwExecutionState *) VAR_0->fdw_state;


 if (VAR_1)
  FUNC_0(VAR_1->cstate);
}
