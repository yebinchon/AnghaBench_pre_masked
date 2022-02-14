
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum aarch64_opnd { ____Placeholder_aarch64_opnd } aarch64_opnd ;


 int VAR_0 ;
 int const VAR_1 ;

int
FUNC_0 (const enum aarch64_opnd *VAR_2, enum aarch64_opnd VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    if (VAR_2[VAR_4] == VAR_3)
      return VAR_4;
    else if (VAR_2[VAR_4] == VAR_1)
      break;
  return -1;
}
