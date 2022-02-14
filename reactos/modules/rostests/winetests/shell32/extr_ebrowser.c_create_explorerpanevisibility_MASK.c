
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IExplorerPaneVisibility_iface; } ;
typedef TYPE_2__ IExplorerPaneVisibilityImpl ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static IExplorerPaneVisibilityImpl *FUNC_1(void)
{
    IExplorerPaneVisibilityImpl *VAR_1;

    VAR_1 = FUNC_0(sizeof(*VAR_1));
    VAR_1->IExplorerPaneVisibility_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;

    return VAR_1;
}
