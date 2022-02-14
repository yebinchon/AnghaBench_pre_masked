
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_25__ {scalar_t__ startOffset; } ;
struct TYPE_24__ {scalar_t__ num; scalar_t__ numAllocated; TYPE_5__* streams; } ;
struct TYPE_23__ {scalar_t__ (* Progress ) (TYPE_3__*,scalar_t__,int ) ;} ;
struct TYPE_22__ {scalar_t__ (* Seek ) (TYPE_2__*,scalar_t__*,int ) ;} ;
struct TYPE_21__ {int (* Free ) (TYPE_1__*,TYPE_5__*) ;scalar_t__ (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef scalar_t__ SRes ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ ILookInStream ;
typedef TYPE_3__ ICompressProgress ;
typedef TYPE_4__ CXzs ;
typedef TYPE_5__ CXzStream ;
typedef int Byte ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_2__*,scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,scalar_t__,int ) ;

SRes FUNC_9(CXzs *VAR_5, ILookInStream *VAR_6, Int64 *VAR_7, ICompressProgress *VAR_8, ISzAlloc *VAR_9)
{
  Int64 VAR_10 = 0;
  FUNC_0(VAR_6->Seek(VAR_6, &VAR_10, VAR_3));
  *VAR_7 = VAR_10;
  for (;;)
  {
    CXzStream VAR_11;
    SRes VAR_12;
    FUNC_1(&VAR_11);
    VAR_12 = FUNC_2(&VAR_11, VAR_6, VAR_7, VAR_9);
    VAR_11.startOffset = *VAR_7;
    FUNC_0(VAR_12);
    if (VAR_5->num == VAR_5->numAllocated)
    {
      size_t VAR_13 = VAR_5->num + VAR_5->num / 4 + 1;
      Byte *VAR_14 = (Byte *)VAR_9->Alloc(VAR_9, VAR_13 * sizeof(CXzStream));
      if (VAR_14 == 0)
        return VAR_0;
      VAR_5->numAllocated = VAR_13;
      FUNC_3(VAR_14, VAR_5->streams, VAR_5->num * sizeof(CXzStream));
      VAR_9->Free(VAR_9, VAR_5->streams);
      VAR_5->streams = (CXzStream *)VAR_14;
    }
    VAR_5->streams[VAR_5->num++] = VAR_11;
    if (*VAR_7 == 0)
      break;
    FUNC_0(VAR_6->Seek(VAR_6, VAR_7, VAR_4));
    if (VAR_8 && VAR_8->Progress(VAR_8, VAR_10 - *VAR_7, (UInt64)(Int64)-1) != VAR_2)
      return VAR_1;
  }
  return VAR_2;
}
