
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const ItemPointerData *VAR_2 = (const ItemPointerData *) VAR_0;
 const ItemPointerData *VAR_3 = (const ItemPointerData *) VAR_1;
 BlockNumber VAR_4 = FUNC_0(VAR_2);
 BlockNumber VAR_5 = FUNC_0(VAR_3);
 OffsetNumber VAR_6 = FUNC_1(VAR_2);
 OffsetNumber VAR_7 = FUNC_1(VAR_3);

 if (VAR_4 < VAR_5)
  return -1;
 if (VAR_4 > VAR_5)
  return 1;
 if (VAR_6 < VAR_7)
  return -1;
 if (VAR_6 > VAR_7)
  return 1;
 return 0;
}
