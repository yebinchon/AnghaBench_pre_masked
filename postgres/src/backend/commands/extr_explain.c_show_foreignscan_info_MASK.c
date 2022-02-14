
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int (* ExplainForeignScan ) (TYPE_3__*,int *) ;int (* ExplainDirectModify ) (TYPE_3__*,int *) ;} ;
struct TYPE_12__ {scalar_t__ operation; } ;
struct TYPE_9__ {scalar_t__ plan; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_11__ {TYPE_2__ ss; TYPE_5__* fdwroutine; } ;
typedef TYPE_3__ ForeignScanState ;
typedef TYPE_4__ ForeignScan ;
typedef TYPE_5__ FdwRoutine ;
typedef int ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_2(ForeignScanState *VAR_1, ExplainState *VAR_2)
{
 FdwRoutine *VAR_3 = VAR_1->fdwroutine;


 if (((ForeignScan *) VAR_1->ss.ps.plan)->operation != VAR_0)
 {
  if (VAR_3->ExplainDirectModify != ((void*)0))
   VAR_3->ExplainDirectModify(VAR_1, VAR_2);
 }
 else
 {
  if (VAR_3->ExplainForeignScan != ((void*)0))
   VAR_3->ExplainForeignScan(VAR_1, VAR_2);
 }
}
