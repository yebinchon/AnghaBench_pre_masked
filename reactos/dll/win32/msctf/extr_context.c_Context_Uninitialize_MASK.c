
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * manager; int connected; int ITextStoreACPSink_iface; scalar_t__ pITextStoreACP; } ;
typedef int IUnknown ;
typedef int ITfContext ;
typedef int HRESULT ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;

HRESULT FUNC_2(ITfContext *VAR_2)
{
    Context *VAR_3 = FUNC_1(VAR_2);

    if (VAR_3->pITextStoreACP)
        FUNC_0(VAR_3->pITextStoreACP, (IUnknown*)&VAR_3->ITextStoreACPSink_iface);
    VAR_3->connected = VAR_0;
    VAR_3->manager = ((void*)0);
    return VAR_1;
}
