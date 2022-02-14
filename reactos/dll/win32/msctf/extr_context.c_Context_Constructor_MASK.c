
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int TfEditCookie ;
typedef int TfClientId ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_21__ {int refCount; TYPE_7__ ITfContext_iface; int pTextLayoutSink; int pTextEditSink; int pStatusSink; int pEditTransactionSink; int pContextKeyEventSink; int defaultCookie; int pITfContextOwnerCompositionSink; int pITextStoreACP; int CompartmentMgr; int * manager; int connected; int tidOwner; TYPE_6__ ITextStoreACPServices_iface; TYPE_5__ ITextStoreACPSink_iface; TYPE_4__ ITfSourceSingle_iface; TYPE_3__ ITfInsertAtSelection_iface; TYPE_2__ ITfContextOwnerCompositionServices_iface; TYPE_1__ ITfSource_iface; } ;
struct TYPE_20__ {TYPE_9__* pOwningContext; int lockType; } ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int ITfDocumentMgr ;
typedef TYPE_7__ ITfContext ;
typedef int HRESULT ;
typedef TYPE_8__ EditCookie ;
typedef TYPE_9__ Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_7 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_9__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,TYPE_8__*) ;
 int FUNC_8 (int *) ;

HRESULT FUNC_9(TfClientId VAR_16, IUnknown *VAR_17, ITfDocumentMgr *VAR_18, ITfContext **VAR_19, TfEditCookie *VAR_20)
{
    Context *VAR_21;
    EditCookie *VAR_22;

    VAR_21 = FUNC_3(FUNC_2(),VAR_7,sizeof(Context));
    if (VAR_21 == ((void*)0))
        return VAR_5;

    VAR_22 = FUNC_3(FUNC_2(),0,sizeof(EditCookie));
    if (VAR_22 == ((void*)0))
    {
        FUNC_4(FUNC_2(),0,VAR_21);
        return VAR_5;
    }

    FUNC_6("(%p) %x %p %p %p\n",VAR_21, VAR_16, VAR_17, VAR_19, VAR_20);

    VAR_21->ITfContext_iface.lpVtbl= &VAR_4;
    VAR_21->ITfSource_iface.lpVtbl = &VAR_3;
    VAR_21->ITfContextOwnerCompositionServices_iface.lpVtbl = &VAR_1;
    VAR_21->ITfInsertAtSelection_iface.lpVtbl = &VAR_11;
    VAR_21->ITfSourceSingle_iface.lpVtbl = &VAR_2;
    VAR_21->ITextStoreACPSink_iface.lpVtbl = &VAR_15;
    VAR_21->ITextStoreACPServices_iface.lpVtbl = &VAR_14;
    VAR_21->refCount = 1;
    VAR_21->tidOwner = VAR_16;
    VAR_21->connected = VAR_6;
    VAR_21->manager = VAR_18;

    FUNC_0((IUnknown*)&VAR_21->ITfContext_iface, &VAR_10, (IUnknown**)&VAR_21->CompartmentMgr);

    VAR_22->lockType = VAR_13;
    VAR_22->pOwningContext = VAR_21;

    if (VAR_17)
    {
        FUNC_5(VAR_17, &VAR_8,
                          (LPVOID*)&VAR_21->pITextStoreACP);

        FUNC_5(VAR_17, &VAR_9,
                                (LPVOID*)&VAR_21->pITfContextOwnerCompositionSink);

        if (!VAR_21->pITextStoreACP && !VAR_21->pITfContextOwnerCompositionSink)
            FUNC_1("Unhandled pUnk\n");
    }

    VAR_21->defaultCookie = FUNC_7(VAR_0,VAR_22);
    *VAR_20 = VAR_21->defaultCookie;

    FUNC_8(&VAR_21->pContextKeyEventSink);
    FUNC_8(&VAR_21->pEditTransactionSink);
    FUNC_8(&VAR_21->pStatusSink);
    FUNC_8(&VAR_21->pTextEditSink);
    FUNC_8(&VAR_21->pTextLayoutSink);

    *VAR_19 = &VAR_21->ITfContext_iface;
    FUNC_6("returning %p\n", *VAR_19);

    return VAR_12;
}
