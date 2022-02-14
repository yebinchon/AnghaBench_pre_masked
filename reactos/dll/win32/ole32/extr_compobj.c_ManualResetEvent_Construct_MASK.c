
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_3__ ISynchronize_iface; int event; TYPE_1__ ISynchronizeHandle_iface; } ;
typedef int REFIID ;
typedef TYPE_2__ MREImpl ;
typedef int IUnknown ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,void**) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_6(IUnknown *VAR_5, REFIID VAR_6, void **VAR_7)
{
    MREImpl *VAR_8 = FUNC_3(FUNC_2(), VAR_1, sizeof(MREImpl));
    HRESULT VAR_9;

    if(VAR_5)
        FUNC_1("Aggregation not implemented.\n");

    VAR_8->ref = 1;
    VAR_8->ISynchronize_iface.lpVtbl = &VAR_4;
    VAR_8->ISynchronizeHandle_iface.lpVtbl = &VAR_2;
    VAR_8->event = FUNC_0(((void*)0), VAR_3, VAR_0, ((void*)0));

    VAR_9 = FUNC_4(&VAR_8->ISynchronize_iface, VAR_6, VAR_7);
    FUNC_5(&VAR_8->ISynchronize_iface);
    return VAR_9;
}
