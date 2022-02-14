
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cs_insn ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ reg; int imm; } ;
struct TYPE_4__ {int stackptr; int stackop; } ;
typedef TYPE_1__ RAnalOp ;


 TYPE_3__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_5, cs_insn *VAR_6, bool VAR_7) {
 if (FUNC_0(0).type == VAR_2 && FUNC_0(1).type == VAR_1) {
  if (FUNC_0(0).reg == VAR_4 || FUNC_0(0).reg == VAR_3) {
   VAR_5->stackop = VAR_0;
   if (VAR_7) {
    VAR_5->stackptr = -FUNC_0(1).imm;
   } else {
    VAR_5->stackptr = FUNC_0(1).imm;
   }
  }
 }
}
