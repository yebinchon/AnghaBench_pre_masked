
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ verbose; } ;
struct TYPE_12__ {int * fdw_private; } ;
struct TYPE_9__ {scalar_t__ plan; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_11__ {TYPE_2__ ss; } ;
typedef int List ;
typedef TYPE_3__ ForeignScanState ;
typedef TYPE_4__ ForeignScan ;
typedef TYPE_5__ ExplainState ;


 int FUNC_0 (char*,char*,TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ForeignScanState *VAR_1, ExplainState *VAR_2)
{
 List *VAR_3;
 char *VAR_4;

 if (VAR_2->verbose)
 {
  VAR_3 = ((ForeignScan *) VAR_1->ss.ps.plan)->fdw_private;
  VAR_4 = FUNC_2(FUNC_1(VAR_3, VAR_0));
  FUNC_0("Remote SQL", VAR_4, VAR_2);
 }
}
