
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_10__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_12__ {int QuadPart; TYPE_1__ u; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_13__ {TYPE_2__* parentStorage; } ;
struct TYPE_11__ {scalar_t__ smallBlockSize; int smallBlockRootChain; } ;
typedef TYPE_4__ SmallBlockChainStream ;
typedef int HRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_3__,scalar_t__,int const*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

HRESULT FUNC_6(
  SmallBlockChainStream* VAR_4,
  ULARGE_INTEGER VAR_5,
  ULONG VAR_6,
  const void* VAR_7,
  ULONG* VAR_8)
{
  ULARGE_INTEGER VAR_9;
  ULONG VAR_10 =
    VAR_5.u.LowPart / VAR_4->parentStorage->smallBlockSize;

  ULONG VAR_11 = VAR_5.u.LowPart % VAR_4->parentStorage->smallBlockSize;
  ULONG VAR_12;
  ULONG VAR_13;
  ULONG VAR_14;
  const BYTE* VAR_15;
  HRESULT VAR_16;




  FUNC_4(VAR_5.u.HighPart==0);




  VAR_13 = FUNC_2(VAR_4);

  while ( (VAR_10 > 0) && (VAR_13 != VAR_0))
  {
    if(FUNC_1(FUNC_3(VAR_4, VAR_13, &VAR_13)))
      return VAR_1;
    VAR_10--;
  }




  *VAR_8 = 0;
  VAR_15 = VAR_7;
  while ( (VAR_6 > 0) && (VAR_13 != VAR_0) )
  {



    VAR_12 =
      FUNC_5(VAR_4->parentStorage->smallBlockSize - VAR_11, VAR_6);




    VAR_9.QuadPart =
      (ULONGLONG)VAR_13 * VAR_4->parentStorage->smallBlockSize;

    VAR_9.QuadPart += VAR_11;




    VAR_16 = FUNC_0(
      VAR_4->parentStorage->smallBlockRootChain,
      VAR_9,
      VAR_12,
      VAR_15,
      &VAR_14);
    if (FUNC_1(VAR_16))
      return VAR_16;




    VAR_16 = FUNC_3(VAR_4, VAR_13, &VAR_13);
    if (FUNC_1(VAR_16))
      return VAR_16;
    VAR_15 += VAR_14;
    VAR_6 -= VAR_14;
    *VAR_8 += VAR_14;
    VAR_11 = (VAR_11 + VAR_14) % VAR_4->parentStorage->smallBlockSize;
  }

  return (VAR_6 == 0) ? VAR_3 : VAR_2;
}
