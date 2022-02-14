
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* ShutdownForeignScan ) (TYPE_1__*) ;} ;
struct TYPE_5__ {TYPE_2__* fdwroutine; } ;
typedef TYPE_1__ ForeignScanState ;
typedef TYPE_2__ FdwRoutine ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(ForeignScanState *VAR_0)
{
 FdwRoutine *VAR_1 = VAR_0->fdwroutine;

 if (VAR_1->ShutdownForeignScan)
  VAR_1->ShutdownForeignScan(VAR_0);
}
