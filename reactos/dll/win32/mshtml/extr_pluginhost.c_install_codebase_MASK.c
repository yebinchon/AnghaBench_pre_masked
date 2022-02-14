
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_4__ IBindStatusCallback_iface; TYPE_1__ IWindowForBindingUI_iface; } ;
typedef TYPE_2__ InstallCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int *,int ,int ,int const*,int *,int *,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int *,int **) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(const WCHAR *VAR_2)
{
    InstallCallback *VAR_3;
    IBindCtx *VAR_4;
    HRESULT VAR_5;

    VAR_3 = FUNC_6(sizeof(*VAR_3));
    if(!VAR_3)
        return;

    VAR_3->IBindStatusCallback_iface.lpVtbl = &VAR_0;
    VAR_3->IWindowForBindingUI_iface.lpVtbl = &VAR_1;
    VAR_3->ref = 1;

    VAR_5 = FUNC_1(0, &VAR_3->IBindStatusCallback_iface, ((void*)0), &VAR_4);
    FUNC_4(&VAR_3->IBindStatusCallback_iface);
    if(FUNC_2(VAR_5))
        return;

    VAR_5 = FUNC_0(((void*)0), ((void*)0), ((void*)0), 0, 0, VAR_2, VAR_4, ((void*)0), 0);
    FUNC_3(VAR_4);
    if(FUNC_2(VAR_5))
        FUNC_5("FAILED: %08x\n", VAR_5);
}
