
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int site; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_1__ IServiceProvider_iface; int * sp; } ;
typedef int IUnknown ;
typedef int IServiceProvider ;
typedef int HRESULT ;
typedef TYPE_3__ AXSite ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,void**) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 TYPE_3__* FUNC_4 (int) ;

IUnknown *FUNC_5(script_ctx_t *VAR_2)
{
    IServiceProvider *VAR_3 = ((void*)0);
    AXSite *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_2->site, &VAR_1, (void**)&VAR_3);
    if(FUNC_0(VAR_5)) {
        FUNC_3("Could not get IServiceProvider iface: %08x\n", VAR_5);
    }

    VAR_4 = FUNC_4(sizeof(AXSite));
    if(!VAR_4) {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    VAR_4->IServiceProvider_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->sp = VAR_3;

    return (IUnknown*)&VAR_4->IServiceProvider_iface;
}
