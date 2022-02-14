
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_12__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_14__ {scalar_t__ QuadPart; TYPE_1__ u; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_15__ {TYPE_2__* parentStorage; } ;
struct TYPE_13__ {scalar_t__ smallBlockSize; int smallBlockRootChain; } ;
typedef TYPE_4__ SmallBlockChainStream ;
typedef int HRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_3__,scalar_t__,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 TYPE_3__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

HRESULT FUNC_7(
  SmallBlockChainStream* VAR_3,
  ULARGE_INTEGER VAR_4,
  ULONG VAR_5,
  void* VAR_6,
  ULONG* VAR_7)
{
  HRESULT VAR_8 = VAR_2;
  ULARGE_INTEGER VAR_9;
  ULONG VAR_10 =
    VAR_4.u.LowPart / VAR_3->parentStorage->smallBlockSize;

  ULONG VAR_11 = VAR_4.u.LowPart % VAR_3->parentStorage->smallBlockSize;
  ULONG VAR_12;
  ULONG VAR_13;
  ULONG VAR_14;
  BYTE* VAR_15;
  ULARGE_INTEGER VAR_16;




  FUNC_5(VAR_4.u.HighPart==0);

  *VAR_7 = 0;

  VAR_16 = FUNC_4(VAR_3);
  if (VAR_16.QuadPart > VAR_4.QuadPart)
    VAR_5 = FUNC_6(VAR_16.QuadPart - VAR_4.QuadPart, VAR_5);
  else
    return VAR_2;




  VAR_13 = FUNC_2(VAR_3);

  while ( (VAR_10 > 0) && (VAR_13 != VAR_0))
  {
    VAR_8 = FUNC_3(VAR_3, VAR_13, &VAR_13);
    if(FUNC_1(VAR_8))
      return VAR_8;
    VAR_10--;
  }




  VAR_15 = VAR_6;

  while ( (VAR_5 > 0) && (VAR_13 != VAR_0) )
  {



    VAR_12 =
      FUNC_6(VAR_3->parentStorage->smallBlockSize - VAR_11, VAR_5);




    VAR_9.QuadPart =
      (ULONGLONG)VAR_13 * VAR_3->parentStorage->smallBlockSize;

    VAR_9.QuadPart += VAR_11;






    VAR_8 = FUNC_0(VAR_3->parentStorage->smallBlockRootChain,
      VAR_9,
      VAR_12,
      VAR_15,
      &VAR_14);

    if (FUNC_1(VAR_8))
      return VAR_8;

    if (!VAR_14)
      return VAR_1;




    VAR_8 = FUNC_3(VAR_3, VAR_13, &VAR_13);
    if(FUNC_1(VAR_8))
      return VAR_1;

    VAR_15 += VAR_14;
    VAR_5 -= VAR_14;
    *VAR_7 += VAR_14;
    VAR_11 = (VAR_11 + VAR_14) % VAR_3->parentStorage->smallBlockSize;
  }

  return VAR_2;
}
