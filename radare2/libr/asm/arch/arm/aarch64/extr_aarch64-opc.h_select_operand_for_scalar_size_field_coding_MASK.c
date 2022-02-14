
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** qualifiers_list; int * operands; } ;
typedef TYPE_1__ aarch64_opcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int
FUNC_4 (const aarch64_opcode *VAR_1)
{
  int VAR_2 = 0, VAR_3 = 0;
  if (FUNC_0 (VAR_1->operands[0])
      == VAR_0)
    VAR_3 = FUNC_1 (VAR_1->qualifiers_list[0][0]);
  if (FUNC_0 (VAR_1->operands[1])
      == VAR_0)
    VAR_2 = FUNC_1 (VAR_1->qualifiers_list[0][1]);
  if (VAR_2 == VAR_3 && VAR_2 == 0)
    { FUNC_3 (0); FUNC_2 (); }

  if (VAR_3 == 0 || VAR_3 == VAR_2 << 1)
    return 1;
  else
    return 0;
}
