
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct mrb_insn_data {int insn; int b; int a; } ;
struct TYPE_9__ {int lastpc; int pc; int nlocals; } ;
typedef TYPE_1__ codegen_scope ;
 int VAR_0 ;

 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ) ;
 struct mrb_insn_data FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(codegen_scope *VAR_1, uint16_t VAR_2, uint16_t VAR_3, int VAR_4)
{
  if (FUNC_4(VAR_1)) {
  normal:
    FUNC_2(VAR_1, 129, VAR_2, VAR_3);
    if (FUNC_5(VAR_1)) {
      FUNC_0(VAR_1, VAR_0);
    }
    return;
  }
  else {
    struct mrb_insn_data VAR_5 = FUNC_3(VAR_1);

    switch (VAR_5.insn) {
    case 129:
      if (VAR_2 == VAR_3) return;
      if (VAR_5.b == VAR_2 && VAR_5.a == VAR_3)
        return;
      goto normal;
    case 134: case 133: case 131: case 147:
    case 136:
    case 144: case 143: case 142: case 141:
    case 140: case 139: case 138: case 137:
      if (VAR_4 || VAR_5.a != VAR_3 || VAR_5.a < VAR_1->nlocals) goto normal;
      VAR_1->pc = VAR_1->lastpc;
      FUNC_1(VAR_1, VAR_5.insn, VAR_2);
      break;
    case 146: case 145: case 135: case 132:
    case 151: case 149: case 150: case 152:
    case 153: case 128:
    case 148: case 154: case 130: case 155:
      if (VAR_4 || VAR_5.a != VAR_3 || VAR_5.a < VAR_1->nlocals) goto normal;
      VAR_1->pc = VAR_1->lastpc;
      FUNC_2(VAR_1, VAR_5.insn, VAR_2, VAR_5.b);
      break;
    default:
      goto normal;
    }
  }
}
