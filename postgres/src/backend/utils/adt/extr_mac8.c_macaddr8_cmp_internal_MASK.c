
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int macaddr8 ;
typedef int int32 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int32
FUNC_2(macaddr8 *VAR_0, macaddr8 *VAR_1)
{
 if (FUNC_0(VAR_0) < FUNC_0(VAR_1))
  return -1;
 else if (FUNC_0(VAR_0) > FUNC_0(VAR_1))
  return 1;
 else if (FUNC_1(VAR_0) < FUNC_1(VAR_1))
  return -1;
 else if (FUNC_1(VAR_0) > FUNC_1(VAR_1))
  return 1;
 else
  return 0;
}
