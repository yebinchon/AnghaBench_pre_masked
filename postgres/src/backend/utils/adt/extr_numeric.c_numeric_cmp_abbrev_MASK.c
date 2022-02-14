
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortSupport ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(Datum VAR_0, Datum VAR_1, SortSupport VAR_2)
{




 if (FUNC_0(VAR_0) < FUNC_0(VAR_1))
  return 1;
 if (FUNC_0(VAR_0) > FUNC_0(VAR_1))
  return -1;
 return 0;
}
