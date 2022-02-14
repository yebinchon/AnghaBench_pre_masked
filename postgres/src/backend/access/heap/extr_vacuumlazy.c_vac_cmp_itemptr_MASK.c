
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OffsetNumber ;
typedef int ItemPointer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 BlockNumber VAR_2,
    VAR_3;
 OffsetNumber VAR_4,
    VAR_5;

 VAR_2 = FUNC_0((ItemPointer) VAR_0);
 VAR_3 = FUNC_0((ItemPointer) VAR_1);

 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;

 VAR_4 = FUNC_1((ItemPointer) VAR_0);
 VAR_5 = FUNC_1((ItemPointer) VAR_1);

 if (VAR_4 < VAR_5)
  return -1;
 if (VAR_4 > VAR_5)
  return 1;

 return 0;
}
