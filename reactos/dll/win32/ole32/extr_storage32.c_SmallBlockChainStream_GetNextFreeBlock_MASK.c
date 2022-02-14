
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_17__ {scalar_t__ HighPart; } ;
struct TYPE_19__ {int QuadPart; TYPE_1__ u; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_18__ {int storageDirEntry; } ;
struct TYPE_22__ {scalar_t__ firstFreeSmallBlock; int bigBlockSize; scalar_t__ smallBlockSize; TYPE_2__ base; int smallBlockRootChain; int smallBlockDepotChain; } ;
struct TYPE_21__ {TYPE_3__ size; } ;
struct TYPE_20__ {TYPE_6__* parentStorage; } ;
typedef TYPE_4__ SmallBlockChainStream ;
typedef int HRESULT ;
typedef TYPE_5__ DirEntry ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_3__) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__,int,int *,scalar_t__*) ;
 int FUNC_4 (int ,TYPE_3__) ;
 int FUNC_5 (int ,TYPE_3__,int,int *,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_5__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,int ,TYPE_5__*) ;
 int FUNC_10 (int *,int ,scalar_t__*) ;
 int FUNC_11 (int *,scalar_t__,int) ;

__attribute__((used)) static ULONG FUNC_12(
  SmallBlockChainStream* VAR_4)
{
  ULARGE_INTEGER VAR_5;
  DWORD VAR_6;
  ULONG VAR_7;
  ULONG VAR_8 = VAR_4->parentStorage->firstFreeSmallBlock;
  ULONG VAR_9 = VAR_0;
  HRESULT VAR_10 = VAR_3;
  ULONG VAR_11;
  DirEntry VAR_12;
  ULONG VAR_13;
  ULARGE_INTEGER VAR_14, VAR_15;

  VAR_5.u.HighPart = 0;




  while (VAR_9 != VAR_1)
  {
    VAR_5.QuadPart = (ULONGLONG)VAR_8 * sizeof(ULONG);

    VAR_10 = FUNC_3(
                VAR_4->parentStorage->smallBlockDepotChain,
                VAR_5,
                sizeof(DWORD),
                &VAR_6,
                &VAR_7);




    if (FUNC_6(VAR_10) && VAR_7 == sizeof(DWORD))
    {
      FUNC_10((BYTE *)&VAR_6, 0, &VAR_9);

      if (VAR_9 != VAR_1)
        VAR_8++;
    }
    else
    {
      ULONG VAR_16 =
        FUNC_1(VAR_4->parentStorage->smallBlockDepotChain);

      BYTE VAR_17[VAR_2];
      ULARGE_INTEGER VAR_18, VAR_19;
      ULONG VAR_20;

      VAR_18.QuadPart = (ULONGLONG)(VAR_16 + 1) * VAR_4->parentStorage->bigBlockSize;
      FUNC_0(VAR_4->parentStorage->smallBlockDepotChain, VAR_18);




      FUNC_11(VAR_17, VAR_1, VAR_4->parentStorage->bigBlockSize);
      VAR_19.QuadPart = (ULONGLONG)VAR_16 * VAR_4->parentStorage->bigBlockSize;
      FUNC_5(VAR_4->parentStorage->smallBlockDepotChain,
        VAR_19, VAR_4->parentStorage->bigBlockSize, VAR_17, &VAR_20);

      FUNC_8(VAR_4->parentStorage);
    }
  }

  VAR_4->parentStorage->firstFreeSmallBlock = VAR_8+1;

  VAR_11 =
    VAR_4->parentStorage->bigBlockSize / VAR_4->parentStorage->smallBlockSize;




  VAR_13 = (VAR_8 / VAR_11) + 1;

  VAR_15.QuadPart = (ULONGLONG)VAR_13 * VAR_4->parentStorage->bigBlockSize;

  VAR_14 = FUNC_2(VAR_4->parentStorage->smallBlockRootChain);

  if (VAR_15.QuadPart > VAR_14.QuadPart)
  {
    FUNC_4(
      VAR_4->parentStorage->smallBlockRootChain,
      VAR_15);

    FUNC_7(
      VAR_4->parentStorage,
      VAR_4->parentStorage->base.storageDirEntry,
      &VAR_12);

    VAR_12.size = VAR_15;

    FUNC_9(
      VAR_4->parentStorage,
      VAR_4->parentStorage->base.storageDirEntry,
      &VAR_12);
  }

  return VAR_8;
}
