
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_5__ {int numThreads; int dictSize; } ;
struct TYPE_6__ {int numBlockThreads; int numTotalThreads; scalar_t__ blockSize; TYPE_1__ lzmaProps; } ;
typedef TYPE_1__ CLzmaEncProps ;
typedef TYPE_2__ CLzma2EncProps ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(CLzma2EncProps *VAR_1)
{
  int VAR_2, VAR_3, VAR_4, VAR_5;
  {
    CLzmaEncProps VAR_6 = VAR_1->lzmaProps;
    FUNC_0(&VAR_6);
    VAR_3 = VAR_6.numThreads;
  }

  VAR_2 = VAR_1->lzmaProps.numThreads;
  VAR_4 = VAR_1->numBlockThreads;
  VAR_5 = VAR_1->numTotalThreads;

  if (VAR_4 > VAR_0)
    VAR_4 = VAR_0;

  if (VAR_5 <= 0)
  {
    if (VAR_4 <= 0)
      VAR_4 = 1;
    VAR_5 = VAR_3 * VAR_4;
  }
  else if (VAR_4 <= 0)
  {
    VAR_4 = VAR_5 / VAR_3;
    if (VAR_4 == 0)
    {
      VAR_2 = 1;
      VAR_4 = VAR_5;
    }
    if (VAR_4 > VAR_0)
      VAR_4 = VAR_0;
  }
  else if (VAR_2 <= 0)
  {
    VAR_2 = VAR_5 / VAR_4;
    if (VAR_2 == 0)
      VAR_2 = 1;
  }
  else
    VAR_5 = VAR_3 * VAR_4;

  VAR_1->lzmaProps.numThreads = VAR_2;
  VAR_1->numBlockThreads = VAR_4;
  VAR_1->numTotalThreads = VAR_5;
  FUNC_0(&VAR_1->lzmaProps);

  if (VAR_1->blockSize == 0)
  {
    UInt32 VAR_7 = VAR_1->lzmaProps.dictSize;
    UInt64 VAR_8 = (UInt64)VAR_7 << 2;
    const UInt32 VAR_9 = (UInt32)1 << 20;
    const UInt32 VAR_10 = (UInt32)1 << 28;
    if (VAR_8 < VAR_9) VAR_8 = VAR_9;
    if (VAR_8 > VAR_10) VAR_8 = VAR_10;
    if (VAR_8 < VAR_7) VAR_8 = VAR_7;
    VAR_1->blockSize = (size_t)VAR_8;
  }
}
