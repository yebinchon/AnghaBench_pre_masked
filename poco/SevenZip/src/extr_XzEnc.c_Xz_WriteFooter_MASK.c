
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int UInt64 ;
typedef int UInt32 ;
struct TYPE_5__ {size_t totalSize; size_t unpackSize; } ;
struct TYPE_4__ {size_t numBlocks; int flags; TYPE_2__* blocks; } ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef TYPE_1__ CXzStream ;
typedef TYPE_2__ CXzBlockSizes ;
typedef scalar_t__ Byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (int *,scalar_t__*,int) ;
 int FUNC_5 (int *,scalar_t__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_6 (scalar_t__*,size_t) ;
 int FUNC_7 (scalar_t__*,int ,int ) ;

SRes FUNC_8(CXzStream *VAR_3, ISeqOutStream *VAR_4)
{
  Byte VAR_5[32];
  UInt64 VAR_6;
  {
    UInt32 VAR_7 = VAR_0;
    unsigned VAR_8 = 1 + FUNC_6(VAR_5 + 1, VAR_3->numBlocks);
    size_t VAR_9;

    VAR_6 = VAR_8;
    VAR_5[0] = 0;
    FUNC_2(FUNC_5(VAR_4, VAR_5, VAR_8, &VAR_7));
    for (VAR_9 = 0; VAR_9 < VAR_3->numBlocks; VAR_9++)
    {
      const CXzBlockSizes *VAR_10 = &VAR_3->blocks[VAR_9];
      VAR_8 = FUNC_6(VAR_5, VAR_10->totalSize);
      VAR_8 += FUNC_6(VAR_5 + VAR_8, VAR_10->unpackSize);
      VAR_6 += VAR_8;
      FUNC_2(FUNC_5(VAR_4, VAR_5, VAR_8, &VAR_7));
    }
    VAR_8 = ((unsigned)VAR_6 & 3);
    if (VAR_8 != 0)
    {
      VAR_5[0] = VAR_5[1] = VAR_5[2] = 0;
      FUNC_2(FUNC_5(VAR_4, VAR_5, 4 - VAR_8, &VAR_7));
      VAR_6 += 4 - VAR_8;
    }
    {
      FUNC_3(VAR_5, FUNC_0(VAR_7));
      FUNC_2(FUNC_4(VAR_4, VAR_5, 4));
      VAR_6 += 4;
    }
  }

  {
    UInt32 VAR_11 = (UInt32)((VAR_6 >> 2) - 1);
    FUNC_3(VAR_5 + 4, VAR_11);
    VAR_5[8] = (Byte)(VAR_3->flags >> 8);
    VAR_5[9] = (Byte)(VAR_3->flags & 0xFF);
    FUNC_3(VAR_5, FUNC_1(VAR_5 + 4, 6));
    FUNC_7(VAR_5 + 10, VAR_1, VAR_2);
    return FUNC_4(VAR_4, VAR_5, 12);
  }
}
