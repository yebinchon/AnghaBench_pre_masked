
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int refCount; TYPE_2__ ITfDocumentMgr_iface; int CompartmentMgr; int TransitoryExtensionSink; int * ThreadMgrSink; TYPE_1__ ITfSource_iface; } ;
typedef int IUnknown ;
typedef int ITfThreadMgrEventSink ;
typedef TYPE_2__ ITfDocumentMgr ;
typedef int HRESULT ;
typedef TYPE_3__ DocumentMgr ;


 int FUNC_0 (int *,int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (int *) ;

HRESULT FUNC_5(ITfThreadMgrEventSink *VAR_6, ITfDocumentMgr **VAR_7)
{
    DocumentMgr *VAR_8;

    VAR_8 = FUNC_2(FUNC_1(),VAR_3,sizeof(DocumentMgr));
    if (VAR_8 == ((void*)0))
        return VAR_2;

    VAR_8->ITfDocumentMgr_iface.lpVtbl = &VAR_1;
    VAR_8->ITfSource_iface.lpVtbl = &VAR_0;
    VAR_8->refCount = 1;
    VAR_8->ThreadMgrSink = VAR_6;
    FUNC_4(&VAR_8->TransitoryExtensionSink);

    FUNC_0((IUnknown*)&VAR_8->ITfDocumentMgr_iface, &VAR_4, (IUnknown**)&VAR_8->CompartmentMgr);

    *VAR_7 = &VAR_8->ITfDocumentMgr_iface;
    FUNC_3("returning %p\n", *VAR_7);
    return VAR_5;
}
