
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum aarch64_opnd { ____Placeholder_aarch64_opnd } aarch64_opnd ;
struct TYPE_3__ {int* operands; } ;
typedef TYPE_1__ aarch64_opcode ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1 (const aarch64_opcode *VAR_2)
{
  int VAR_3 = 0;
  const enum aarch64_opnd *VAR_4 = VAR_2->operands;
  while (VAR_4[VAR_3++] != VAR_1)
    ;
  --VAR_3;
  FUNC_0 (VAR_3 >= 0 && VAR_3 <= VAR_0);
  return VAR_3;
}
