
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* as_snap; } ;
struct TYPE_3__ {int active_count; scalar_t__ regd_count; scalar_t__ curcid; } ;
typedef scalar_t__ CommandId ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(void)
{
 CommandId VAR_2,
    VAR_3;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_0->as_snap->active_count == 1);
 FUNC_0(VAR_0->as_snap->regd_count == 0);
 VAR_2 = VAR_0->as_snap->curcid;
 VAR_3 = FUNC_1(0);
 if (FUNC_2() && VAR_2 != VAR_3)
  FUNC_3(VAR_1, "cannot modify commandid in active snapshot during a parallel operation");
 VAR_0->as_snap->curcid = VAR_3;
}
