
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_13__ {int lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_15__ {int ref; int storageDirEntry; int openFlags; int storageHead; int strmHead; int * baseVtbl; TYPE_2__ IPropertySetStorage_iface; TYPE_1__ IStorage_iface; } ;
struct TYPE_16__ {int entries_size; TYPE_4__ base; TYPE_6__* transactedParent; void* entries; scalar_t__ firstFreeEntry; int scratch; int lastTransactionSig; } ;
typedef TYPE_5__ TransactedSnapshotImpl ;
typedef int TransactedDirEntry ;
struct TYPE_14__ {int lpVtbl; } ;
struct TYPE_17__ {int storageDirEntry; TYPE_4__* transactedChild; int openFlags; TYPE_3__ IPropertySetStorage_iface; } ;
typedef TYPE_6__ StorageBaseImpl ;
typedef int IStorage ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ,int **) ;
 int FUNC_7 (TYPE_6__*,int *,int ) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static HRESULT FUNC_11(StorageBaseImpl *VAR_9,
  TransactedSnapshotImpl** VAR_10)
{
  HRESULT VAR_11;

  *VAR_10 = FUNC_2(FUNC_1(), VAR_2, sizeof(TransactedSnapshotImpl));
  if (*VAR_10)
  {
    IStorage *VAR_12;

    (*VAR_10)->base.IStorage_iface.lpVtbl = &VAR_8;


    (*VAR_10)->base.IPropertySetStorage_iface.lpVtbl = VAR_9->IPropertySetStorage_iface.lpVtbl;
    (*VAR_10)->base.baseVtbl = &VAR_7;

    FUNC_10(&(*VAR_10)->base.strmHead);

    FUNC_10(&(*VAR_10)->base.storageHead);

    (*VAR_10)->base.ref = 1;

    (*VAR_10)->base.openFlags = VAR_9->openFlags;


    FUNC_7(VAR_9, &(*VAR_10)->lastTransactionSig, VAR_1);


    VAR_11 = FUNC_6(((void*)0), VAR_5|VAR_6|VAR_3|VAR_4,
        0, &VAR_12);
    (*VAR_10)->scratch = FUNC_9(VAR_12);

    if (FUNC_5(VAR_11))
    {
        ULONG VAR_13 = 20;

        (*VAR_10)->entries = FUNC_2(FUNC_1(), VAR_2, sizeof(TransactedDirEntry) * VAR_13);
        (*VAR_10)->entries_size = VAR_13;
        (*VAR_10)->firstFreeEntry = 0;

        if ((*VAR_10)->entries)
        {

            (*VAR_10)->transactedParent = VAR_9;

            VAR_9->transactedChild = &(*VAR_10)->base;

            (*VAR_10)->base.storageDirEntry = FUNC_8(*VAR_10, VAR_9->storageDirEntry);
        }
        else
        {
            FUNC_4(VAR_12);

            VAR_11 = VAR_0;
        }
    }

    if (FUNC_0(VAR_11)) FUNC_3(FUNC_1(), 0, *VAR_10);

    return VAR_11;
  }
  else
    return VAR_0;
}
