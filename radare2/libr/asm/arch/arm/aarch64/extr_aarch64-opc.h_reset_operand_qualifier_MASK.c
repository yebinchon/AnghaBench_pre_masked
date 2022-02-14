
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* operands; int opcode; } ;
typedef TYPE_2__ aarch64_inst ;
struct TYPE_4__ {int qualifier; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2 (aarch64_inst *VAR_1, int VAR_2)
{
  FUNC_1 (VAR_2 >=0 && VAR_2 < FUNC_0 (VAR_1->opcode));
  VAR_1->operands[VAR_2].qualifier = VAR_0;
}
