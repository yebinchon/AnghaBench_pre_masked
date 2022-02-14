
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_8__ {scalar_t__ size; } ;
typedef TYPE_2__ cs_insn ;
struct TYPE_7__ {scalar_t__ disp; int scale; int index; int base; int segment; } ;
struct TYPE_10__ {int type; int size; int imm; int reg; TYPE_1__ mem; } ;
struct TYPE_9__ {int refptr; scalar_t__ ptr; scalar_t__ disp; int stackptr; int stackop; } ;
typedef TYPE_3__ RAnalOp ;


 TYPE_6__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_8, cs_insn *VAR_9, ut64 VAR_10, int VAR_11) {
 if (VAR_8->refptr < 1 || VAR_8->ptr == VAR_1) {
  switch (FUNC_0(1).type) {
  case 128:
   VAR_8->disp = FUNC_0(1).mem.disp;
   VAR_8->refptr = FUNC_0(1).size;
   if (FUNC_0(1).mem.base == VAR_6) {
    VAR_8->ptr = VAR_10 + VAR_9->size + VAR_8->disp;
   } else if (FUNC_0(1).mem.base == VAR_5 || FUNC_0(1).mem.base == VAR_2) {
    VAR_8->stackop = VAR_0;
    VAR_8->stackptr = VAR_11;
   } else if (FUNC_0(1).mem.segment == VAR_4 && FUNC_0(1).mem.base == VAR_4
              && FUNC_0(1).mem.index == VAR_4 && FUNC_0(1).mem.scale == 1) {
    VAR_8->ptr = VAR_8->disp;
   }
   break;
  case 129:
   if ((FUNC_0 (1).imm > 10) &&
    (FUNC_0(0).reg != VAR_7) && (FUNC_0(0).reg != VAR_3)) {
    VAR_8->ptr = FUNC_0 (1).imm;
   }
   break;
  default:
   break;
  }
 }
}
