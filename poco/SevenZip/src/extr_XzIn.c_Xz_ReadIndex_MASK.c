
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_6__ {int (* Free ) (TYPE_1__*,int *) ;int * (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef int ILookInStream ;
typedef int CXzStream ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int *,int *,size_t,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,size_t,TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static SRes FUNC_4(CXzStream *VAR_3, ILookInStream *VAR_4, UInt64 VAR_5, ISzAlloc *VAR_6)
{
  SRes VAR_7;
  size_t VAR_8;
  Byte *VAR_9;
  if (VAR_5 > ((UInt32)1 << 31))
    return VAR_1;
  VAR_8 = (size_t)VAR_5;
  if (VAR_8 != VAR_5)
    return VAR_1;
  VAR_9 = VAR_6->Alloc(VAR_6, VAR_8);
  if (VAR_9 == 0)
    return VAR_0;
  VAR_7 = FUNC_0(VAR_4, VAR_9, VAR_8, VAR_1);
  if (VAR_7 == VAR_2)
    VAR_7 = FUNC_1(VAR_3, VAR_9, VAR_8, VAR_6);
  VAR_6->Free(VAR_6, VAR_9);
  return VAR_7;
}
