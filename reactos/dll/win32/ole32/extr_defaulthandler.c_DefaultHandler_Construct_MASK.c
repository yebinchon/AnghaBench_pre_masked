
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_21__ {int inproc_server; int ref; int * pCFObject; int object_state; int * pDataDelegate; int * pOleDelegate; int * pPSDelegate; int clsid; int storage_state; int * storage; scalar_t__ dwAdvConn; scalar_t__ in_call; int * containerObj; int * containerApp; int * dataAdviseHolder; int * oleAdviseHolder; int * clientSite; TYPE_6__* dataCache; TYPE_6__* outerUnknown; int dataCache_PersistStg; TYPE_6__ IUnknown_iface; TYPE_5__ IPersistStorage_iface; TYPE_4__ IAdviseSink_iface; TYPE_3__ IRunnableObject_iface; TYPE_2__ IDataObject_iface; TYPE_1__ IOleObject_iface; } ;
typedef int * REFCLSID ;
typedef TYPE_6__* LPUNKNOWN ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef TYPE_7__ DefaultHandler ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (TYPE_6__*,int *,int *,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_7__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_7__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,void**) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (TYPE_6__*,int *,void**) ;
 int FUNC_11 (TYPE_6__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static DefaultHandler* FUNC_14(
  REFCLSID VAR_16,
  LPUNKNOWN VAR_17,
  DWORD VAR_18,
  IClassFactory *VAR_19)
{
  DefaultHandler* VAR_20 = ((void*)0);
  HRESULT VAR_21;

  VAR_20 = FUNC_5(FUNC_4(), 0, sizeof(DefaultHandler));

  if (!VAR_20)
    return VAR_20;

  VAR_20->IOleObject_iface.lpVtbl = &VAR_3;
  VAR_20->IUnknown_iface.lpVtbl = &VAR_6;
  VAR_20->IDataObject_iface.lpVtbl = &VAR_2;
  VAR_20->IRunnableObject_iface.lpVtbl = &VAR_5;
  VAR_20->IAdviseSink_iface.lpVtbl = &VAR_1;
  VAR_20->IPersistStorage_iface.lpVtbl = &VAR_4;

  VAR_20->inproc_server = (VAR_18 & VAR_8) != 0;





  VAR_20->ref = 1;







  if (!VAR_17)
    VAR_17 = &VAR_20->IUnknown_iface;

  VAR_20->outerUnknown = VAR_17;






  VAR_21 = FUNC_1(VAR_20->outerUnknown,
                       VAR_16,
                       &VAR_12,
                       (void**)&VAR_20->dataCache);
  if(FUNC_12(VAR_21))
  {
    VAR_21 = FUNC_10(VAR_20->dataCache, &VAR_11, (void**)&VAR_20->dataCache_PersistStg);


    if (FUNC_12(VAR_21))
        FUNC_11(VAR_20->outerUnknown);
    else
        FUNC_11(VAR_20->dataCache);
  }
  if(FUNC_3(VAR_21))
  {
    FUNC_2("Unexpected error creating data cache\n");
    FUNC_6(FUNC_4(), 0, VAR_20);
    return ((void*)0);
  }

  VAR_20->clsid = *VAR_16;
  VAR_20->clientSite = ((void*)0);
  VAR_20->oleAdviseHolder = ((void*)0);
  VAR_20->dataAdviseHolder = ((void*)0);
  VAR_20->containerApp = ((void*)0);
  VAR_20->containerObj = ((void*)0);
  VAR_20->pOleDelegate = ((void*)0);
  VAR_20->pPSDelegate = ((void*)0);
  VAR_20->pDataDelegate = ((void*)0);
  VAR_20->object_state = VAR_13;
  VAR_20->in_call = 0;

  VAR_20->dwAdvConn = 0;
  VAR_20->storage = ((void*)0);
  VAR_20->storage_state = VAR_15;

  if (VAR_20->inproc_server && !(VAR_18 & VAR_7))
  {
    HRESULT VAR_22;
    VAR_20->pCFObject = ((void*)0);
    if (VAR_19)
      VAR_22 = FUNC_8(VAR_19, ((void*)0), &VAR_10, (void **)&VAR_20->pOleDelegate);
    else
      VAR_22 = FUNC_0(&VAR_20->clsid, ((void*)0), VAR_0,
                            &VAR_10, (void **)&VAR_20->pOleDelegate);
    if (FUNC_12(VAR_22))
      VAR_22 = FUNC_9(VAR_20->pOleDelegate, &VAR_11, (void **)&VAR_20->pPSDelegate);
    if (FUNC_12(VAR_22))
      VAR_22 = FUNC_9(VAR_20->pOleDelegate, &VAR_9, (void **)&VAR_20->pDataDelegate);
    if (FUNC_12(VAR_22))
      VAR_20->object_state = VAR_14;
    if (FUNC_3(VAR_22))
      FUNC_13("object creation failed with error %08x\n", VAR_22);
  }
  else
  {
    VAR_20->pCFObject = VAR_19;
    if (VAR_19) FUNC_7(VAR_19);
  }

  return VAR_20;
}
