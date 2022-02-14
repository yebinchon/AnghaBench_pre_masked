
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_2__ ITfCompartmentMgr_iface; int values; int * pUnkOuter; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_1__ CompartmentMgr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ,void**) ;
 int FUNC_5 (int ,int *) ;
 int VAR_6 ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (int *) ;

HRESULT FUNC_8(IUnknown *VAR_7, REFIID VAR_8, IUnknown **VAR_9)
{
    CompartmentMgr *VAR_10;

    if (!VAR_9)
        return VAR_3;

    if (VAR_7 && !FUNC_5 (VAR_8, &VAR_5))
        return VAR_0;

    VAR_10 = FUNC_2(FUNC_1(),VAR_4,sizeof(CompartmentMgr));
    if (VAR_10 == ((void*)0))
        return VAR_2;

    VAR_10->ITfCompartmentMgr_iface.lpVtbl = &VAR_1;
    VAR_10->pUnkOuter = VAR_7;
    FUNC_7(&VAR_10->values);

    if (VAR_7)
    {
        *VAR_9 = (IUnknown*)&VAR_10->ITfCompartmentMgr_iface;
        FUNC_6("returning %p\n", *VAR_9);
        return VAR_6;
    }
    else
    {
        HRESULT VAR_11;
        VAR_11 = FUNC_4(&VAR_10->ITfCompartmentMgr_iface, VAR_8, (void**)VAR_9);
        if (FUNC_0(VAR_11))
            FUNC_3(FUNC_1(),0,VAR_10);
        return VAR_11;
    }
}
