
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int ItemPointerData ;
typedef int ItemPointer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

bool
FUNC_3(ItemPointer VAR_0, ItemPointer VAR_1)
{




 FUNC_2(sizeof(ItemPointerData) == 3 * sizeof(uint16),
      "ItemPointerData struct is improperly padded");

 if (FUNC_0(VAR_0) ==
  FUNC_0(VAR_1) &&
  FUNC_1(VAR_0) ==
  FUNC_1(VAR_1))
  return 1;
 else
  return 0;
}
