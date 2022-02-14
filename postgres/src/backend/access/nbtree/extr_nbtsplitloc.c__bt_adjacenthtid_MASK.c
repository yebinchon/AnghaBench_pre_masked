
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ItemPointer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(ItemPointer VAR_1, ItemPointer VAR_2)
{
 BlockNumber VAR_3,
    VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_0(VAR_2);


 if (VAR_3 == VAR_4)
  return 1;


 if (VAR_3 + 1 == VAR_4 &&
  FUNC_1(VAR_2) == VAR_0)
  return 1;

 return 0;
}
