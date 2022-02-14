
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IFileDialogEvents_iface; } ;
typedef TYPE_1__ IFileDialogEventsImpl ;
typedef TYPE_2__ IFileDialogEvents ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static IFileDialogEvents *FUNC_2(void)
{
    IFileDialogEventsImpl *VAR_2;

    VAR_2 = FUNC_1(FUNC_0(), VAR_0, sizeof(IFileDialogEventsImpl));
    VAR_2->IFileDialogEvents_iface.lpVtbl = &VAR_1;
    VAR_2->ref = 1;

    return &VAR_2->IFileDialogEvents_iface;
}
