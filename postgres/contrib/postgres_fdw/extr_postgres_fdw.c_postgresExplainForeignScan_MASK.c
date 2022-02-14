
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
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(ForeignScanState *VAR_2, ExplainState *VAR_3)
{
 List *VAR_4;
 char *VAR_5;
 char *VAR_6;

 VAR_4 = ((ForeignScan *) VAR_2->ss.ps.plan)->fdw_private;





 if (FUNC_1(VAR_4) > VAR_0)
 {
  VAR_6 = FUNC_3(FUNC_2(VAR_4, VAR_0));
  FUNC_0("Relations", VAR_6, VAR_3);
 }




 if (VAR_3->verbose)
 {
  VAR_5 = FUNC_3(FUNC_2(VAR_4, VAR_1));
  FUNC_0("Remote SQL", VAR_5, VAR_3);
 }
}
