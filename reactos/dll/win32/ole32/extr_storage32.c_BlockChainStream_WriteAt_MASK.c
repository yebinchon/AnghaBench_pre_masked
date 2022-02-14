
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_12__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_15__ {scalar_t__ bigBlockSize; } ;
struct TYPE_14__ {scalar_t__ data; void* dirty; void* read; int sector; } ;
struct TYPE_13__ {TYPE_4__* parentStorage; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ BlockChainStream ;
typedef TYPE_3__ BlockChainBlock ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,scalar_t__,TYPE_3__**,scalar_t__*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_1__,int const*,scalar_t__,scalar_t__*) ;
 void* VAR_3 ;
 int FUNC_6 (scalar_t__,int const*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

HRESULT FUNC_8(BlockChainStream* VAR_4,
  ULARGE_INTEGER VAR_5,
  ULONG VAR_6,
  const void* VAR_7,
  ULONG* VAR_8)
{
  ULONG VAR_9 = VAR_5.QuadPart / VAR_4->parentStorage->bigBlockSize;
  ULONG VAR_10 = VAR_5.QuadPart % VAR_4->parentStorage->bigBlockSize;
  ULONG VAR_11;
  ULONG VAR_12;
  const BYTE* VAR_13;
  HRESULT VAR_14;
  BlockChainBlock *VAR_15;

  *VAR_8 = 0;
  VAR_13 = VAR_7;

  while (VAR_6 > 0)
  {
    ULARGE_INTEGER VAR_16;
    DWORD VAR_17;




    VAR_11 =
      FUNC_7(VAR_4->parentStorage->bigBlockSize - VAR_10, VAR_6);

    VAR_14 = FUNC_0(VAR_4, VAR_9, &VAR_15, &VAR_12, VAR_6 == VAR_11);



    if (FUNC_2(VAR_14))
    {
      FUNC_1("not enough blocks in chain to write data\n");
      return VAR_14;
    }

    if (!VAR_15)
    {

      VAR_16.QuadPart = FUNC_3(VAR_4->parentStorage, VAR_12) +
                               VAR_10;

      FUNC_5(VAR_4->parentStorage,
           VAR_16,
           VAR_13,
           VAR_11,
           &VAR_17);
    }
    else
    {
      if (!VAR_15->read && VAR_11 != VAR_4->parentStorage->bigBlockSize)
      {
        ULONG VAR_18;
        if (FUNC_2(FUNC_4(VAR_4->parentStorage, VAR_15->sector, VAR_15->data, &VAR_18)) && !VAR_18)
          return VAR_0;
      }

      FUNC_6(VAR_15->data+VAR_10, VAR_13, VAR_11);
      VAR_17 = VAR_11;
      VAR_15->read = VAR_3;
      VAR_15->dirty = VAR_3;
    }

    VAR_9++;
    VAR_13 += VAR_17;
    VAR_6 -= VAR_17;
    *VAR_8 += VAR_17;
    VAR_10 = 0;

    if (VAR_17 != VAR_11)
      break;
  }

  return (VAR_6 == 0) ? VAR_2 : VAR_1;
}
