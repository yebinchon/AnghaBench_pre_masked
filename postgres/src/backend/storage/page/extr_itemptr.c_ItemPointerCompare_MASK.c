
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ItemPointer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int32
FUNC_2(ItemPointer VAR_0, ItemPointer VAR_1)
{




 BlockNumber VAR_2 = FUNC_0(VAR_0);
 BlockNumber VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 else if (FUNC_1(VAR_0) <
    FUNC_1(VAR_1))
  return -1;
 else if (FUNC_1(VAR_0) >
    FUNC_1(VAR_1))
  return 1;
 else
  return 0;
}
