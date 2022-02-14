
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_14__ {scalar_t__ dicBufSize; scalar_t__ dicPos; int * dic; } ;
struct TYPE_17__ {TYPE_2__ decoder; } ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_16__ {TYPE_1__ Props; } ;
struct TYPE_15__ {scalar_t__ (* Skip ) (void*,scalar_t__) ;scalar_t__ (* Look ) (void*,void const**,size_t*) ;} ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef TYPE_3__ ILookInStream ;
typedef scalar_t__ ELzmaStatus ;
typedef TYPE_4__ CSzCoderInfo ;
typedef TYPE_5__ CLzma2Dec ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int *) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,scalar_t__,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (void*,void const**,size_t*) ;
 scalar_t__ FUNC_7 (void*,scalar_t__) ;

__attribute__((used)) static SRes FUNC_8(CSzCoderInfo *VAR_4, UInt64 VAR_5, ILookInStream *VAR_6,
    Byte *VAR_7, SizeT VAR_8, ISzAlloc *VAR_9)
{
  CLzma2Dec VAR_10;
  SRes VAR_11 = VAR_3;

  FUNC_1(&VAR_10);
  if (VAR_4->Props.size != 1)
    return VAR_2;
  FUNC_5(FUNC_0(&VAR_10, VAR_4->Props.data[0], VAR_9));
  VAR_10.decoder.dic = VAR_7;
  VAR_10.decoder.dicBufSize = VAR_8;
  FUNC_4(&VAR_10);

  for (;;)
  {
    Byte *VAR_12 = ((void*)0);
    size_t VAR_13 = (1 << 18);
    if (VAR_13 > VAR_5)
      VAR_13 = (size_t)VAR_5;
    VAR_11 = VAR_6->Look((void *)VAR_6, (const void **)&VAR_12, &VAR_13);
    if (VAR_11 != VAR_3)
      break;

    {
      SizeT VAR_14 = (SizeT)VAR_13, VAR_15 = VAR_10.decoder.dicPos;
      ELzmaStatus VAR_16;
      VAR_11 = FUNC_2(&VAR_10, VAR_8, VAR_12, &VAR_14, VAR_0, &VAR_16);
      VAR_13 -= VAR_14;
      VAR_5 -= VAR_14;
      if (VAR_11 != VAR_3)
        break;
      if (VAR_10.decoder.dicPos == VAR_10.decoder.dicBufSize || (VAR_14 == 0 && VAR_15 == VAR_10.decoder.dicPos))
      {
        if (VAR_10.decoder.dicBufSize != VAR_8 || VAR_13 != 0 ||
            (VAR_16 != VAR_1))
          VAR_11 = VAR_2;
        break;
      }
      VAR_11 = VAR_6->Skip((void *)VAR_6, VAR_14);
      if (VAR_11 != VAR_3)
        break;
    }
  }

  FUNC_3(&VAR_10, VAR_9);
  return VAR_11;
}
