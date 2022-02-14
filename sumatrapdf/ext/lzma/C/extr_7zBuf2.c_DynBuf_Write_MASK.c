
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t size; size_t pos; int const* data; } ;
struct TYPE_7__ {int (* Free ) (TYPE_1__*,int const*) ;scalar_t__ (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CDynBuf ;
typedef int const Byte ;


 int FUNC_0 (int const*,int const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

int FUNC_3(CDynBuf *VAR_0, const Byte *VAR_1, size_t VAR_2, ISzAlloc *VAR_3)
{
  if (VAR_2 > VAR_0->size - VAR_0->pos)
  {
    size_t VAR_4 = VAR_0->pos + VAR_2;
    Byte *VAR_5;
    VAR_4 += VAR_4 / 4;
    VAR_5 = (Byte *)VAR_3->Alloc(VAR_3, VAR_4);
    if (VAR_5 == 0)
      return 0;
    VAR_0->size = VAR_4;
    FUNC_0(VAR_5, VAR_0->data, VAR_0->pos);
    VAR_3->Free(VAR_3, VAR_0->data);
    VAR_0->data = VAR_5;
  }
  FUNC_0(VAR_0->data + VAR_0->pos, VAR_1, VAR_2);
  VAR_0->pos += VAR_2;
  return 1;
}
