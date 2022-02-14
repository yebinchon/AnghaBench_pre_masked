
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_15__ {scalar_t__ dicBufSize; scalar_t__ dicPos; int * dic; } ;
struct TYPE_12__ {scalar_t__ size; int data; } ;
struct TYPE_14__ {TYPE_1__ Props; } ;
struct TYPE_13__ {scalar_t__ (* Skip ) (void*,scalar_t__) ;scalar_t__ (* Look ) (void*,void const**,size_t*) ;} ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef TYPE_2__ ILookInStream ;
typedef scalar_t__ ELzmaStatus ;
typedef TYPE_3__ CSzCoderInfo ;
typedef TYPE_4__ CLzmaDec ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,unsigned int,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (void*,void const**,size_t*) ;
 scalar_t__ FUNC_7 (void*,scalar_t__) ;

__attribute__((used)) static SRes FUNC_8(CSzCoderInfo *VAR_5, UInt64 VAR_6, ILookInStream *VAR_7,
    Byte *VAR_8, SizeT VAR_9, ISzAlloc *VAR_10)
{
  CLzmaDec VAR_11;
  SRes VAR_12 = VAR_4;

  FUNC_1(&VAR_11);
  FUNC_5(FUNC_0(&VAR_11, VAR_5->Props.data, (unsigned)VAR_5->Props.size, VAR_10));
  VAR_11.dic = VAR_8;
  VAR_11.dicBufSize = VAR_9;
  FUNC_4(&VAR_11);

  for (;;)
  {
    Byte *VAR_13 = ((void*)0);
    size_t VAR_14 = (1 << 18);
    if (VAR_14 > VAR_6)
      VAR_14 = (size_t)VAR_6;
    VAR_12 = VAR_7->Look((void *)VAR_7, (const void **)&VAR_13, &VAR_14);
    if (VAR_12 != VAR_4)
      break;

    {
      SizeT VAR_15 = (SizeT)VAR_14, VAR_16 = VAR_11.dicPos;
      ELzmaStatus VAR_17;
      VAR_12 = FUNC_2(&VAR_11, VAR_9, VAR_13, &VAR_15, VAR_0, &VAR_17);
      VAR_14 -= VAR_15;
      VAR_6 -= VAR_15;
      if (VAR_12 != VAR_4)
        break;
      if (VAR_11.dicPos == VAR_11.dicBufSize || (VAR_15 == 0 && VAR_16 == VAR_11.dicPos))
      {
        if (VAR_11.dicBufSize != VAR_9 || VAR_14 != 0 ||
            (VAR_17 != VAR_1 &&
             VAR_17 != VAR_2))
          VAR_12 = VAR_3;
        break;
      }
      VAR_12 = VAR_7->Skip((void *)VAR_7, VAR_15);
      if (VAR_12 != VAR_4)
        break;
    }
  }

  FUNC_3(&VAR_11, VAR_10);
  return VAR_12;
}
