
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ dicSize; } ;
struct TYPE_17__ {scalar_t__ dicBufSize; TYPE_2__ prop; int * dic; } ;
struct TYPE_15__ {scalar_t__ (* Alloc ) (TYPE_1__*,scalar_t__) ;} ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CLzmaProps ;
typedef TYPE_3__ CLzmaDec ;
typedef int Byte ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int const*,unsigned int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;

SRes FUNC_6(CLzmaDec *VAR_2, const Byte *VAR_3, unsigned VAR_4, ISzAlloc *VAR_5)
{
  CLzmaProps VAR_6;
  SizeT VAR_7;
  FUNC_4(FUNC_3(&VAR_6, VAR_3, VAR_4));
  FUNC_4(FUNC_0(VAR_2, &VAR_6, VAR_5));
  VAR_7 = VAR_6.dicSize;
  if (VAR_2->dic == 0 || VAR_7 != VAR_2->dicBufSize)
  {
    FUNC_1(VAR_2, VAR_5);
    VAR_2->dic = (Byte *)VAR_5->Alloc(VAR_5, VAR_7);
    if (VAR_2->dic == 0)
    {
      FUNC_2(VAR_2, VAR_5);
      return VAR_0;
    }
  }
  VAR_2->dicBufSize = VAR_7;
  VAR_2->prop = VAR_6;
  return VAR_1;
}
