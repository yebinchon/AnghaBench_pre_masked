
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * manager; int connected; int ITextStoreACPSink_iface; scalar_t__ pITextStoreACP; } ;
typedef int IUnknown ;
typedef int ITfDocumentMgr ;
typedef int ITfContext ;
typedef int HRESULT ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;

HRESULT FUNC_2(ITfContext *VAR_4, ITfDocumentMgr *VAR_5)
{
    Context *VAR_6 = FUNC_1(VAR_4);

    if (VAR_6->pITextStoreACP)
        FUNC_0(VAR_6->pITextStoreACP, &VAR_0,
            (IUnknown*)&VAR_6->ITextStoreACPSink_iface, VAR_3);
    VAR_6->connected = VAR_2;
    VAR_6->manager = VAR_5;
    return VAR_1;
}
