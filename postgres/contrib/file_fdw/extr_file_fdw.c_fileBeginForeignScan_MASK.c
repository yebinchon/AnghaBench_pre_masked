
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {char* filename; int is_program; int cstate; int * options; } ;
struct TYPE_10__ {int fdw_private; } ;
struct TYPE_7__ {scalar_t__ plan; } ;
struct TYPE_8__ {int ss_currentRelation; TYPE_1__ ps; } ;
struct TYPE_9__ {void* fdw_state; TYPE_2__ ss; } ;
typedef int List ;
typedef TYPE_3__ ForeignScanState ;
typedef TYPE_4__ ForeignScan ;
typedef TYPE_5__ FileFdwExecutionState ;
typedef int CopyState ;


 int FUNC_0 (int *,int ,char*,int,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char**,int*,int **) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(ForeignScanState *VAR_2, int VAR_3)
{
 ForeignScan *VAR_4 = (ForeignScan *) VAR_2->ss.ps.plan;
 char *VAR_5;
 bool VAR_6;
 List *VAR_7;
 CopyState VAR_8;
 FileFdwExecutionState *VAR_9;




 if (VAR_3 & VAR_0)
  return;


 FUNC_2(FUNC_1(VAR_2->ss.ss_currentRelation),
       &VAR_5, &VAR_6, &VAR_7);


 VAR_7 = FUNC_3(VAR_7, VAR_4->fdw_private);





 VAR_8 = FUNC_0(((void*)0),
         VAR_2->ss.ss_currentRelation,
         VAR_5,
         VAR_6,
         ((void*)0),
         VAR_1,
         VAR_7);





 VAR_9 = (FileFdwExecutionState *) FUNC_4(sizeof(FileFdwExecutionState));
 VAR_9->filename = VAR_5;
 VAR_9->is_program = VAR_6;
 VAR_9->options = VAR_7;
 VAR_9->cstate = VAR_8;

 VAR_2->fdw_state = (void *) VAR_9;
}
