
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IMMDeviceCollection_iface; int state; int flow; } ;
typedef TYPE_1__ MMDevColImpl ;
typedef TYPE_2__ IMMDeviceCollection ;
typedef int HRESULT ;
typedef int EDataFlow ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_2(IMMDeviceCollection **VAR_3, EDataFlow VAR_4, DWORD VAR_5)
{
    MMDevColImpl *VAR_6;

    VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_6));
    *VAR_3 = ((void*)0);
    if (!VAR_6)
        return VAR_0;
    VAR_6->IMMDeviceCollection_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;
    VAR_6->flow = VAR_4;
    VAR_6->state = VAR_5;
    *VAR_3 = &VAR_6->IMMDeviceCollection_iface;
    return VAR_2;
}
