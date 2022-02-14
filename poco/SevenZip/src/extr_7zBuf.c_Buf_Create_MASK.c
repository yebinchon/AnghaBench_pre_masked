
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t size; int * data; } ;
struct TYPE_6__ {scalar_t__ (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CBuf ;
typedef int Byte ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;

int FUNC_1(CBuf *VAR_0, size_t VAR_1, ISzAlloc *VAR_2)
{
  VAR_0->size = 0;
  if (VAR_1 == 0)
  {
    VAR_0->data = 0;
    return 1;
  }
  VAR_0->data = (Byte *)VAR_2->Alloc(VAR_2, VAR_1);
  if (VAR_0->data != 0)
  {
    VAR_0->size = VAR_1;
    return 1;
  }
  return 0;
}
