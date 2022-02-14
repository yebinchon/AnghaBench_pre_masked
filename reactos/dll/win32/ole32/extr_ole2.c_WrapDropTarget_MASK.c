
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int refs; TYPE_1__ IDropTarget_iface; int hwnd; } ;
typedef TYPE_1__ IDropTarget ;
typedef int HWND ;
typedef TYPE_2__ DropTargetWrapper ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static IDropTarget* FUNC_2( HWND VAR_1 )
{
    DropTargetWrapper* VAR_2 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_2));

    if (VAR_2)
    {
        VAR_2->IDropTarget_iface.lpVtbl = &VAR_0;
        VAR_2->hwnd = VAR_1;
        VAR_2->refs = 1;
    }
    return &VAR_2->IDropTarget_iface;
}
