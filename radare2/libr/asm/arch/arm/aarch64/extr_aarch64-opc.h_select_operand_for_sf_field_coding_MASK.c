
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * operands; } ;
typedef TYPE_1__ aarch64_opcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int
FUNC_3 (const aarch64_opcode *VAR_1)
{
  int VAR_2 = -1;
  if (FUNC_0 (VAR_1->operands[0])
      == VAR_0)

    VAR_2 = 0;
  else if (FUNC_0 (VAR_1->operands[1])
    == VAR_0)

    VAR_2 = 1;
  else
    { FUNC_2 (0); FUNC_1 (); }
  return VAR_2;
}
