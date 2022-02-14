
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ active_count; scalar_t__ regd_count; } ;
struct TYPE_5__ {TYPE_3__* as_snap; struct TYPE_5__* as_next; } ;
typedef TYPE_1__ ActiveSnapshotElt ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int * VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void)
{
 ActiveSnapshotElt *VAR_2;

 VAR_2 = VAR_0->as_next;

 FUNC_0(VAR_0->as_snap->active_count > 0);

 VAR_0->as_snap->active_count--;

 if (VAR_0->as_snap->active_count == 0 &&
  VAR_0->as_snap->regd_count == 0)
  FUNC_1(VAR_0->as_snap);

 FUNC_3(VAR_0);
 VAR_0 = VAR_2;
 if (VAR_0 == ((void*)0))
  VAR_1 = ((void*)0);

 FUNC_2();
}
