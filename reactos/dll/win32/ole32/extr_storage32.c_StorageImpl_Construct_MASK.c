
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int ULONG ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_18__ {int openFlags; int ref; TYPE_10__ IStorage_iface; int reverted; int lockingrole; int create; int * baseVtbl; TYPE_2__ IDirectWriterLock_iface; TYPE_1__ IPropertySetStorage_iface; int storageHead; int strmHead; } ;
struct TYPE_17__ {int grfLocksSupported; } ;
struct TYPE_16__ {TYPE_8__ base; int locks_supported; int * lockBytes; int smallBlockSize; int bigBlockSize; } ;
typedef TYPE_3__ StorageImpl ;
typedef TYPE_4__ STATSTG ;
typedef int LPCOLESTR ;
typedef int ILockBytes ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int,int ,int **) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_4__*,int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_10__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static HRESULT FUNC_14(
  HANDLE VAR_21,
  LPCOLESTR VAR_22,
  ILockBytes* VAR_23,
  DWORD VAR_24,
  BOOL VAR_25,
  BOOL VAR_26,
  ULONG VAR_27,
  StorageImpl** VAR_28)
{
  StorageImpl* VAR_29;
  HRESULT VAR_30 = VAR_16;
  STATSTG VAR_31;

  if ( FUNC_0( FUNC_13(VAR_24) ))
    return VAR_12;

  VAR_29 = FUNC_3(FUNC_2(), 0, sizeof(StorageImpl));
  if (!VAR_29)
    return VAR_2;

  FUNC_12(VAR_29, 0, sizeof(StorageImpl));

  FUNC_11(&VAR_29->base.strmHead);

  FUNC_11(&VAR_29->base.storageHead);

  VAR_29->base.IStorage_iface.lpVtbl = &VAR_18;
  VAR_29->base.IPropertySetStorage_iface.lpVtbl = &VAR_4;
  VAR_29->base.IDirectWriterLock_iface.lpVtbl = &VAR_1;
  VAR_29->base.baseVtbl = &VAR_17;
  VAR_29->base.openFlags = (VAR_24 & ~VAR_6);
  VAR_29->base.ref = 1;
  VAR_29->base.create = VAR_26;

  if (VAR_24 == (VAR_7|VAR_9|VAR_11))
    VAR_29->base.lockingrole = VAR_15;
  else if (VAR_24 == (VAR_7|VAR_8|VAR_10))
    VAR_29->base.lockingrole = VAR_14;
  else
    VAR_29->base.lockingrole = VAR_13;

  VAR_29->base.reverted = VAR_3;




  VAR_29->bigBlockSize = VAR_27;
  VAR_29->smallBlockSize = VAR_0;
  if (VAR_21)
    VAR_30 = FUNC_1(VAR_21, VAR_24, VAR_22, &VAR_29->lockBytes);
  else
  {
    VAR_29->lockBytes = VAR_23;
    FUNC_4(VAR_23);
  }

  if (FUNC_7(VAR_30))
    VAR_30 = FUNC_5(VAR_29->lockBytes, &VAR_31, VAR_5);

  if (FUNC_7(VAR_30))
  {
    VAR_29->locks_supported = VAR_31.grfLocksSupported;
    if (!VAR_21)

        VAR_29->locks_supported &= ~VAR_20;

    VAR_30 = FUNC_9(VAR_29, VAR_24);
  }

  if (FUNC_7(VAR_30))
    VAR_30 = FUNC_10(VAR_29, VAR_19, VAR_26);

  if (FUNC_0(VAR_30))
  {
    FUNC_6(&VAR_29->base.IStorage_iface);
    *VAR_28 = ((void*)0);
  }
  else
  {
    FUNC_8(&VAR_29->base);
    *VAR_28 = VAR_29;
  }

  return VAR_30;
}
