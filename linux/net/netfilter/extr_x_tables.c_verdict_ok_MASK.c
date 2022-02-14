
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(int VAR_1)
{
 if (VAR_1 > 0)
  return 1;

 if (VAR_1 < 0) {
  int VAR_2 = -VAR_1 - 1;

  if (VAR_1 == VAR_0)
   return 1;

  switch (VAR_2) {
  case 130: return 1;
  case 129: return 1;
  case 128: return 1;
  default:
   break;
  }

  return 0;
 }

 return 0;
}
