
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef int UInt32 ;
struct TYPE_8__ {scalar_t__ flags; scalar_t__ packSize; scalar_t__ unpackSize; TYPE_1__* filters; } ;
struct TYPE_7__ {scalar_t__ id; int propsSize; int* props; } ;
typedef int SRes ;
typedef TYPE_1__ CXzFilter ;
typedef TYPE_2__ CXzBlock ;
typedef scalar_t__ Byte ;


 scalar_t__ FUNC_0 (scalar_t__ const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*,unsigned int,int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int*,scalar_t__ const*,size_t) ;
 int FUNC_7 (char*,int,...) ;

SRes FUNC_8(CXzBlock *VAR_3, const Byte *VAR_4)
{
  unsigned VAR_5;
  int VAR_6, VAR_7;
  UInt32 VAR_8 = (UInt32)VAR_4[0] << 2;

  if (FUNC_0(VAR_4, VAR_8) != FUNC_1(VAR_4 + VAR_8))
    return VAR_0;

  VAR_5 = 1;
  if (VAR_5 == VAR_8)
    return VAR_0;
  VAR_3->flags = VAR_4[VAR_5++];

  if (FUNC_4(VAR_3))
  {
    FUNC_2(VAR_4, VAR_5, VAR_8, &VAR_3->packSize);
    if (VAR_3->packSize == 0 || VAR_3->packSize + VAR_8 >= (UInt64)1 << 63)
      return VAR_0;
  }

  if (FUNC_5(VAR_3))
    FUNC_2(VAR_4, VAR_5, VAR_8, &VAR_3->unpackSize);

  VAR_6 = FUNC_3(VAR_3);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  {
    CXzFilter *VAR_9 = VAR_3->filters + VAR_7;
    UInt64 VAR_10;
    FUNC_2(VAR_4, VAR_5, VAR_8, &VAR_9->id);
    FUNC_2(VAR_4, VAR_5, VAR_8, &VAR_10);
    if (VAR_10 > VAR_8 - VAR_5 || VAR_10 > VAR_2)
      return VAR_0;
    VAR_9->propsSize = (UInt32)VAR_10;
    FUNC_6(VAR_9->props, VAR_4 + VAR_5, (size_t)VAR_10);
    VAR_5 += (unsigned)VAR_10;
  }

  while (VAR_5 < VAR_8)
    if (VAR_4[VAR_5++] != 0)
      return VAR_0;
  return VAR_1;
}
