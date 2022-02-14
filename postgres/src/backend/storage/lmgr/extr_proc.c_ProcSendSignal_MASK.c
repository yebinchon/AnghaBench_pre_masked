
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int startupProcPid; TYPE_1__* startupProc; } ;
struct TYPE_4__ {int procLatch; } ;
typedef TYPE_1__ PGPROC ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(int VAR_2)
{
 PGPROC *VAR_3 = ((void*)0);

 if (FUNC_1())
 {
  FUNC_3(VAR_1);
  if (VAR_2 == VAR_0->startupProcPid)
   VAR_3 = VAR_0->startupProc;

  FUNC_4(VAR_1);
 }

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 != ((void*)0))
 {
  FUNC_2(&VAR_3->procLatch);
 }
}
