
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_21__ {int * lpVtbl; } ;
struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_22__ {int refCount; TYPE_11__ ITfThreadMgrEx_iface; int InputProcessorProfileActivationSink; int UIElementSink; int ThreadMgrEventSink; int ThreadFocusSink; int PreservedKeyNotifySink; int KeyTraceEventSink; int DisplayAttributeNotifySink; int ActiveLanguageProfileNotifySink; int AssociatedFocusWindows; int CreatedDocumentMgrs; int CurrentPreservedKeys; int CompartmentMgr; TYPE_7__ ITfSourceSingle_iface; TYPE_6__ ITfUIElementMgr_iface; TYPE_5__ ITfThreadMgrEventSink_iface; TYPE_4__ ITfClientId_iface; TYPE_3__ ITfMessagePump_iface; TYPE_2__ ITfKeystrokeMgr_iface; TYPE_1__ ITfSource_iface; } ;
typedef TYPE_8__ ThreadMgr ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int **) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_8__* FUNC_2 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,TYPE_8__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_11__*) ;
 TYPE_8__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_8__*) ;
 int FUNC_7 (int *) ;
 int VAR_13 ;

HRESULT FUNC_8(IUnknown *VAR_14, IUnknown **VAR_15)
{
    ThreadMgr *VAR_16;
    if (VAR_14)
        return VAR_0;


    VAR_16 = FUNC_5(VAR_13);
    if (VAR_16)
    {
        FUNC_4(&VAR_16->ITfThreadMgrEx_iface);
        *VAR_15 = (IUnknown*)&VAR_16->ITfThreadMgrEx_iface;
        return VAR_7;
    }

    VAR_16 = FUNC_2(FUNC_1(),VAR_3,sizeof(ThreadMgr));
    if (VAR_16 == ((void*)0))
        return VAR_2;

    VAR_16->ITfThreadMgrEx_iface.lpVtbl = &VAR_10;
    VAR_16->ITfSource_iface.lpVtbl = &VAR_11;
    VAR_16->ITfKeystrokeMgr_iface.lpVtbl = &VAR_5;
    VAR_16->ITfMessagePump_iface.lpVtbl = &VAR_6;
    VAR_16->ITfClientId_iface.lpVtbl = &VAR_1;
    VAR_16->ITfThreadMgrEventSink_iface.lpVtbl = &VAR_9;
    VAR_16->ITfUIElementMgr_iface.lpVtbl = &VAR_12;
    VAR_16->ITfSourceSingle_iface.lpVtbl = &VAR_8;
    VAR_16->refCount = 1;
    FUNC_6(VAR_13,VAR_16);

    FUNC_0((IUnknown*)&VAR_16->ITfThreadMgrEx_iface, &VAR_4, (IUnknown**)&VAR_16->CompartmentMgr);

    FUNC_7(&VAR_16->CurrentPreservedKeys);
    FUNC_7(&VAR_16->CreatedDocumentMgrs);
    FUNC_7(&VAR_16->AssociatedFocusWindows);

    FUNC_7(&VAR_16->ActiveLanguageProfileNotifySink);
    FUNC_7(&VAR_16->DisplayAttributeNotifySink);
    FUNC_7(&VAR_16->KeyTraceEventSink);
    FUNC_7(&VAR_16->PreservedKeyNotifySink);
    FUNC_7(&VAR_16->ThreadFocusSink);
    FUNC_7(&VAR_16->ThreadMgrEventSink);
    FUNC_7(&VAR_16->UIElementSink);
    FUNC_7(&VAR_16->InputProcessorProfileActivationSink);

    FUNC_3("returning %p\n", VAR_16);
    *VAR_15 = (IUnknown *)&VAR_16->ITfThreadMgrEx_iface;
    return VAR_7;
}
