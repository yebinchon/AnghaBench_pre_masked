
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t_self; } ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__* HeapTuple ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 HeapTuple VAR_2 = *(const HeapTuple *) VAR_0;
 HeapTuple VAR_3 = *(const HeapTuple *) VAR_1;
 BlockNumber VAR_4 = FUNC_0(&VAR_2->t_self);
 OffsetNumber VAR_5 = FUNC_1(&VAR_2->t_self);
 BlockNumber VAR_6 = FUNC_0(&VAR_3->t_self);
 OffsetNumber VAR_7 = FUNC_1(&VAR_3->t_self);

 if (VAR_4 < VAR_6)
  return -1;
 if (VAR_4 > VAR_6)
  return 1;
 if (VAR_5 < VAR_7)
  return -1;
 if (VAR_5 > VAR_7)
  return 1;
 return 0;
}
