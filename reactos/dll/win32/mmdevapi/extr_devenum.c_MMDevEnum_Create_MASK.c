
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_3__ IMMDeviceEnumerator_iface; } ;
typedef int REFIID ;
typedef TYPE_1__ MMDevEnumImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,void**) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

HRESULT FUNC_5(REFIID VAR_5, void **VAR_6)
{
    MMDevEnumImpl *VAR_7 = VAR_2;

    if (!VAR_7)
    {
        VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_7));
        *VAR_6 = ((void*)0);
        if (!VAR_7)
            return VAR_0;
        VAR_7->ref = 1;
        VAR_7->IMMDeviceEnumerator_iface.lpVtbl = &VAR_1;
        VAR_2 = VAR_7;

        FUNC_3();
        FUNC_4(VAR_4);
        FUNC_4(VAR_3);
    }
    return FUNC_2(&VAR_7->IMMDeviceEnumerator_iface, VAR_5, VAR_6);
}
