
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int pidlAbsCurrent; } ;
struct TYPE_16__ {TYPE_3__ ShellInfos; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_5__ IShellBrowser_iface; TYPE_2__ IServiceProvider_iface; TYPE_1__ ICommDlgBrowser_iface; int hwndOwner; } ;
typedef TYPE_4__ IShellBrowserImpl ;
typedef TYPE_5__ IShellBrowser ;
typedef int HWND ;
typedef TYPE_6__ FileOpenDlgInfos ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*,TYPE_4__*) ;
 TYPE_6__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int) ;

IShellBrowser * FUNC_4(HWND VAR_4)
{
    FileOpenDlgInfos *VAR_5 = FUNC_2(VAR_4);
    IShellBrowserImpl *VAR_6;

    VAR_6 = FUNC_3(sizeof(*VAR_6));


    VAR_6->ref=1;
    VAR_6->hwndOwner = VAR_4;


    VAR_6->IShellBrowser_iface.lpVtbl = &VAR_3;
    VAR_6->ICommDlgBrowser_iface.lpVtbl = &VAR_1;
    VAR_6->IServiceProvider_iface.lpVtbl = &VAR_2;
    FUNC_0(VAR_4, VAR_0,
                               &VAR_5->ShellInfos.pidlAbsCurrent);

    FUNC_1("%p\n", VAR_6);

    return &VAR_6->IShellBrowser_iface;
}
