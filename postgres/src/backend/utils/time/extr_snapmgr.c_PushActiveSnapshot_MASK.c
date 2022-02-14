
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* as_snap; int as_level; void* as_next; } ;
struct TYPE_10__ {int active_count; int copied; } ;
typedef TYPE_1__* Snapshot ;
typedef TYPE_2__ ActiveSnapshotElt ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 TYPE_2__* FUNC_3 (int ,int) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void
FUNC_4(Snapshot VAR_6)
{
 ActiveSnapshotElt *VAR_7;

 FUNC_0(VAR_6 != VAR_2);

 VAR_7 = FUNC_3(VAR_5, sizeof(ActiveSnapshotElt));





 if (VAR_6 == VAR_1 || VAR_6 == VAR_4 || !VAR_6->copied)
  VAR_7->as_snap = FUNC_1(VAR_6);
 else
  VAR_7->as_snap = VAR_6;

 VAR_7->as_next = VAR_0;
 VAR_7->as_level = FUNC_2();

 VAR_7->as_snap->active_count++;

 VAR_0 = VAR_7;
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_0;
}
