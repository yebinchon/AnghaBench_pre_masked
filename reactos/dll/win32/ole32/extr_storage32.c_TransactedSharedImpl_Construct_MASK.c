
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


struct TYPE_19__ {int storageDirEntry; } ;
struct TYPE_24__ {TYPE_14__ base; } ;
typedef TYPE_5__ TransactedSnapshotImpl ;
struct TYPE_21__ {int lpVtbl; } ;
struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_23__ {int ref; int storageDirEntry; int openFlags; int storageHead; int strmHead; int * baseVtbl; TYPE_2__ IPropertySetStorage_iface; TYPE_1__ IStorage_iface; } ;
struct TYPE_25__ {TYPE_7__* transactedParent; TYPE_5__* scratch; TYPE_4__ base; int lastTransactionSig; } ;
typedef TYPE_6__ TransactedSharedImpl ;
struct TYPE_27__ {int usVersion; int ulSectorSize; int * pwcsTemplateFile; scalar_t__ reserved; } ;
struct TYPE_22__ {int lpVtbl; } ;
struct TYPE_26__ {int storageDirEntry; int openFlags; TYPE_3__ IPropertySetStorage_iface; } ;
typedef TYPE_7__ StorageBaseImpl ;
typedef TYPE_8__ STGOPTIONS ;
typedef int IStorage ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_6__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int ,int ,TYPE_8__*,int *,int *,void**) ;
 int FUNC_8 (TYPE_14__*,int ,TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_7__*,int *,int ) ;
 int FUNC_10 (TYPE_7__*,int ) ;
 int FUNC_11 (TYPE_7__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static HRESULT FUNC_14(StorageBaseImpl *VAR_13,
  TransactedSharedImpl** VAR_14)
{
  HRESULT VAR_15;

  *VAR_14 = FUNC_2(FUNC_1(), VAR_2, sizeof(TransactedSharedImpl));
  if (*VAR_14)
  {
    IStorage *VAR_16;

    (*VAR_14)->base.IStorage_iface.lpVtbl = &VAR_12;


    (*VAR_14)->base.IPropertySetStorage_iface.lpVtbl = VAR_13->IPropertySetStorage_iface.lpVtbl;
    (*VAR_14)->base.baseVtbl = &VAR_11;

    FUNC_13(&(*VAR_14)->base.strmHead);

    FUNC_13(&(*VAR_14)->base.storageHead);

    (*VAR_14)->base.ref = 1;

    (*VAR_14)->base.openFlags = VAR_13->openFlags;

    VAR_15 = FUNC_10(VAR_13, VAR_1);

    if (FUNC_6(VAR_15))
    {
      STGOPTIONS VAR_17;


      FUNC_9(VAR_13, &(*VAR_14)->lastTransactionSig, VAR_1);

      VAR_17.usVersion = 1;
      VAR_17.reserved = 0;
      VAR_17.ulSectorSize = 4096;
      VAR_17.pwcsTemplateFile = ((void*)0);


      VAR_15 = FUNC_7(((void*)0), VAR_8|VAR_9|VAR_6|VAR_7|VAR_10,
          VAR_5, 0, &VAR_17, ((void*)0), &VAR_3, (void**)&VAR_16);
      (*VAR_14)->scratch = (TransactedSnapshotImpl*)FUNC_12(VAR_16);

      if (FUNC_6(VAR_15))
      {
        VAR_15 = FUNC_8(&(*VAR_14)->scratch->base, (*VAR_14)->scratch->base.storageDirEntry,
          VAR_13, VAR_13->storageDirEntry);

        if (FUNC_6(VAR_15))
        {
          VAR_15 = FUNC_4(VAR_16, VAR_4);

          (*VAR_14)->base.storageDirEntry = (*VAR_14)->scratch->base.storageDirEntry;
          (*VAR_14)->transactedParent = VAR_13;
        }

        if (FUNC_0(VAR_15))
          FUNC_5(VAR_16);
      }

      FUNC_11(VAR_13, VAR_1);
    }

    if (FUNC_0(VAR_15)) FUNC_3(FUNC_1(), 0, *VAR_14);

    return VAR_15;
  }
  else
    return VAR_0;
}
