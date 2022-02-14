
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int options; int is_program; int filename; int cstate; } ;
struct TYPE_5__ {int ss_currentRelation; } ;
struct TYPE_6__ {TYPE_1__ ss; scalar_t__ fdw_state; } ;
typedef TYPE_2__ ForeignScanState ;
typedef TYPE_3__ FileFdwExecutionState ;


 int FUNC_0 (int *,int ,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(ForeignScanState *VAR_1)
{
 FileFdwExecutionState *VAR_2 = (FileFdwExecutionState *) VAR_1->fdw_state;

 FUNC_1(VAR_2->cstate);

 VAR_2->cstate = FUNC_0(((void*)0),
         VAR_1->ss.ss_currentRelation,
         VAR_2->filename,
         VAR_2->is_program,
         ((void*)0),
         VAR_0,
         VAR_2->options);
}
