
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_14__ {int piid; } ;
struct TYPE_18__ {TYPE_3__ header; scalar_t__ Vtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int TableVersion; scalar_t__* pDelegatedIIDs; TYPE_2__** pStubVtblList; TYPE_7__** pProxyVtblList; int * pNamesArray; } ;
struct TYPE_15__ {int RefCount; int * base_object; int * base_proxy; scalar_t__ PVtbl; TYPE_6__ IRpcProxyBuffer_iface; int * pChannel; int pPSFactory; int name; int * pUnkOuter; int piid; } ;
struct TYPE_12__ {int DispatchTableCount; } ;
struct TYPE_13__ {TYPE_1__ header; } ;
typedef TYPE_4__ StdProxyImpl ;
typedef int REFIID ;
typedef TYPE_5__ ProxyFileInfo ;
typedef int PCInterfaceName ;
typedef scalar_t__* LPVOID ;
typedef int * LPUNKNOWN ;
typedef TYPE_6__* LPRPCPROXYBUFFER ;
typedef int LPPSFACTORYBUFFER ;
typedef int IUnknownVtbl ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_7__ CInterfaceProxyVtbl ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_4__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (scalar_t__,int *,int **,void**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;

HRESULT FUNC_12(REFIID VAR_5,
                           LPUNKNOWN VAR_6,
                           const ProxyFileInfo *VAR_7,
                           int VAR_8,
                           LPPSFACTORYBUFFER VAR_9,
                           LPRPCPROXYBUFFER *VAR_10,
                           LPVOID *VAR_11)
{
  StdProxyImpl *VAR_12;
  PCInterfaceName VAR_13 = VAR_7->pNamesArray[VAR_8];
  CInterfaceProxyVtbl *VAR_14 = VAR_7->pProxyVtblList[VAR_8];

  FUNC_8("(%p,%p,%p,%p,%p) %s\n", *VAR_6, VAR_14, VAR_9, VAR_10, VAR_11, VAR_13);


  if (VAR_7->TableVersion > 1) {
    ULONG VAR_15 = VAR_7->pStubVtblList[VAR_8]->header.DispatchTableCount;
    VAR_14 = (CInterfaceProxyVtbl *)((const void **)VAR_14 + 1);
    FUNC_8("stubless vtbl %p: count=%d\n", VAR_14->Vtbl, VAR_15 );
    FUNC_11( (IUnknownVtbl *)VAR_14->Vtbl, VAR_15 );
  }

  if (!FUNC_7(VAR_14->header.piid, VAR_5)) {
    FUNC_0("IID mismatch during proxy creation\n");
    return VAR_2;
  }

  VAR_12 = FUNC_3(FUNC_2(),VAR_1,sizeof(StdProxyImpl));
  if (!VAR_12) return VAR_0;

  if (!VAR_6) VAR_6 = (IUnknown *)VAR_12;
  VAR_12->IRpcProxyBuffer_iface.lpVtbl = &VAR_4;
  VAR_12->PVtbl = VAR_14->Vtbl;

  VAR_12->RefCount = 1;
  VAR_12->piid = VAR_14->header.piid;
  VAR_12->base_object = ((void*)0);
  VAR_12->base_proxy = ((void*)0);
  VAR_12->pUnkOuter = VAR_6;
  VAR_12->name = VAR_13;
  VAR_12->pPSFactory = VAR_9;
  VAR_12->pChannel = ((void*)0);

  if(VAR_7->pDelegatedIIDs && VAR_7->pDelegatedIIDs[VAR_8])
  {
      HRESULT VAR_16 = FUNC_9( VAR_7->pDelegatedIIDs[VAR_8], ((void*)0),
                                &VAR_12->base_proxy, (void **)&VAR_12->base_object );
      if (FUNC_1(VAR_16))
      {
          FUNC_4( FUNC_2(), 0, VAR_12 );
          return VAR_16;
      }
  }

  *VAR_10 = &VAR_12->IRpcProxyBuffer_iface;
  *VAR_11 = &VAR_12->PVtbl;
  FUNC_6((IUnknown *)*VAR_11);
  FUNC_5(VAR_9);

  FUNC_8( "iid=%s this %p proxy %p obj %p vtbl %p base proxy %p base obj %p\n",
         FUNC_10(VAR_5), VAR_12, *VAR_10, *VAR_11, VAR_12->PVtbl, VAR_12->base_proxy, VAR_12->base_object );
  return VAR_3;
}
