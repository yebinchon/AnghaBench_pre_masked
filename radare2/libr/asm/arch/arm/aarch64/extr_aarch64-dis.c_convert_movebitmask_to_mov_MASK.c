
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {TYPE_3__* operands; } ;
typedef TYPE_4__ aarch64_inst ;
struct TYPE_8__ {int regno; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_9__ {scalar_t__ qualifier; int type; TYPE_2__ reg; TYPE_1__ imm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int,int) ;

__attribute__((used)) static int
FUNC_3 (aarch64_inst *VAR_3)
{
  int VAR_4;
  uint64_t VAR_5;


  FUNC_1 (VAR_3->operands[1].reg.regno == 0x1f);
  FUNC_2 (VAR_3, 1, 2);
  VAR_4 = VAR_3->operands[0].qualifier == VAR_2;
  VAR_3->operands[1].type = VAR_0;
  VAR_5 = VAR_3->operands[1].imm.value;


  if (VAR_3->operands[0].reg.regno != 0x1f
      && (FUNC_0 (VAR_5, VAR_4, ((void*)0))
   || FUNC_0 (~VAR_5, VAR_4, ((void*)0))))
    return 0;

  VAR_3->operands[2].type = VAR_1;
  return 1;
}
