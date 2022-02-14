
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * bufBase; int * bufLim; } ;
struct TYPE_6__ {scalar_t__ (* Alloc ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CRangeEnc ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(CRangeEnc *VAR_1, ISzAlloc *VAR_2)
{
  if (VAR_1->bufBase == 0)
  {
    VAR_1->bufBase = (Byte *)VAR_2->Alloc(VAR_2, VAR_0);
    if (VAR_1->bufBase == 0)
      return 0;
    VAR_1->bufLim = VAR_1->bufBase + VAR_0;
  }
  return 1;
}
