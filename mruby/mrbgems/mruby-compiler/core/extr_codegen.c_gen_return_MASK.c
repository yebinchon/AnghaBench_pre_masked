
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct mrb_insn_data {scalar_t__ insn; scalar_t__ a; scalar_t__ b; } ;
struct TYPE_6__ {int lastpc; int pc; } ;
typedef TYPE_1__ codegen_scope ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 struct mrb_insn_data FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(codegen_scope *VAR_2, uint8_t VAR_3, uint16_t VAR_4)
{
  if (FUNC_2(VAR_2)) {
    FUNC_0(VAR_2, VAR_3, VAR_4);
  }
  else {
    struct mrb_insn_data VAR_5 = FUNC_1(VAR_2);

    if (VAR_5.insn == VAR_0 && VAR_4 == VAR_5.a) {
      VAR_2->pc = VAR_2->lastpc;
      FUNC_0(VAR_2, VAR_3, VAR_5.b);
    }
    else if (VAR_5.insn != VAR_1) {
      FUNC_0(VAR_2, VAR_3, VAR_4);
    }
  }
}
