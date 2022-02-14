
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_17__ {int LowPart; } ;
struct TYPE_18__ {scalar_t__ QuadPart; TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_21__ {scalar_t__ bigBlockSize; } ;
struct TYPE_20__ {scalar_t__ data; scalar_t__ read; int sector; } ;
struct TYPE_19__ {TYPE_6__* parentStorage; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ BlockChainStream ;
typedef TYPE_4__ BlockChainBlock ;
typedef int BYTE ;


 int FUNC_0 (TYPE_3__*,scalar_t__,TYPE_4__**,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__) ;
 TYPE_2__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__) ;
 int FUNC_5 (TYPE_6__*,TYPE_2__,int *,scalar_t__,scalar_t__*) ;
 int FUNC_6 (TYPE_6__*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_7 (char*,TYPE_3__*,int ,void*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

HRESULT FUNC_10(BlockChainStream* VAR_3,
  ULARGE_INTEGER VAR_4,
  ULONG VAR_5,
  void* VAR_6,
  ULONG* VAR_7)
{
  ULONG VAR_8 = VAR_4.QuadPart / VAR_3->parentStorage->bigBlockSize;
  ULONG VAR_9 = VAR_4.QuadPart % VAR_3->parentStorage->bigBlockSize;
  ULONG VAR_10;
  ULONG VAR_11;
  BYTE* VAR_12;
  ULARGE_INTEGER VAR_13;
  HRESULT VAR_14;
  BlockChainBlock *VAR_15;

  FUNC_7("(%p)-> %i %p %i %p\n",VAR_3, VAR_4.u.LowPart, VAR_6, VAR_5, VAR_7);




  VAR_11 = FUNC_1(VAR_3, VAR_8);

  *VAR_7 = 0;

  VAR_13 = FUNC_2(VAR_3);
  if (VAR_13.QuadPart > VAR_4.QuadPart)
    VAR_5 = FUNC_9(VAR_13.QuadPart - VAR_4.QuadPart, VAR_5);
  else
    return VAR_1;




  VAR_12 = VAR_6;

  while (VAR_5 > 0)
  {
    ULARGE_INTEGER VAR_16;
    DWORD VAR_17;




    VAR_10 =
      FUNC_9(VAR_3->parentStorage->bigBlockSize - VAR_9, VAR_5);

    VAR_14 = FUNC_0(VAR_3, VAR_8, &VAR_15, &VAR_11, VAR_5 == VAR_10);

    if (FUNC_3(VAR_14))
      return VAR_14;

    if (!VAR_15)
    {

      VAR_16.QuadPart = FUNC_4(VAR_3->parentStorage, VAR_11) +
                               VAR_9;

      FUNC_5(VAR_3->parentStorage,
           VAR_16,
           VAR_12,
           VAR_10,
           &VAR_17);
    }
    else
    {
      if (!VAR_15->read)
      {
        ULONG VAR_18;
        if (FUNC_3(FUNC_6(VAR_3->parentStorage, VAR_15->sector, VAR_15->data, &VAR_18)) && !VAR_18)
          return VAR_0;

        VAR_15->read = VAR_2;
      }

      FUNC_8(VAR_12, VAR_15->data+VAR_9, VAR_10);
      VAR_17 = VAR_10;
    }

    VAR_8++;
    VAR_12 += VAR_17;
    VAR_5 -= VAR_17;
    *VAR_7 += VAR_17;
    VAR_9 = 0;

    if (VAR_10 != VAR_17)
        break;
  }

  return VAR_1;
}
