
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IOleUndoManager_iface; } ;
typedef TYPE_1__ UndoManager ;
typedef TYPE_2__ IOleUndoManager ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static IOleUndoManager *FUNC_1(void)
{
    UndoManager *VAR_1 = FUNC_0(sizeof(UndoManager));

    if (!VAR_1) return ((void*)0);

    VAR_1->IOleUndoManager_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;

    return &VAR_1->IOleUndoManager_iface;
}
