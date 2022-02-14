
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_8__ {int size; } ;
typedef TYPE_2__ cs_insn ;
struct TYPE_7__ {int disp; int scale; int index; int base; int segment; } ;
struct TYPE_10__ {int type; int imm; TYPE_1__ mem; int size; } ;
struct TYPE_9__ {int ptr; int disp; int stackptr; int val; int stackop; int type; int refptr; int cycles; } ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 TYPE_6__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_9, cs_insn *VAR_10, ut64 VAR_11, int VAR_12) {
 VAR_9->ptr = VAR_3;
 switch (FUNC_0(0).type) {
 case 129:
  VAR_9->cycles = VAR_0;
  VAR_9->disp = FUNC_0(0).mem.disp;
  if (!VAR_9->disp) {
   VAR_9->disp = VAR_3;
  }
  VAR_9->refptr = FUNC_0(0).size;
  if (FUNC_0(0).mem.base == VAR_8) {
   VAR_9->ptr = VAR_11 + VAR_10->size + VAR_9->disp;
  } else if (FUNC_0(0).mem.base == VAR_7 || FUNC_0(0).mem.base == VAR_5) {
   VAR_9->type |= VAR_1;
   VAR_9->stackop = VAR_2;
   VAR_9->stackptr = VAR_12;
  } else if (FUNC_0(0).mem.segment == VAR_6 && FUNC_0(0).mem.base == VAR_6
      && FUNC_0(0).mem.index == VAR_6 && FUNC_0(0).mem.scale == 1) {
   VAR_9->ptr = VAR_9->disp;
   if (VAR_9->ptr < 0x1000) {
    VAR_9->ptr = VAR_3;
   }
  }
  if (FUNC_0(1).type == VAR_4) {
   VAR_9->val = FUNC_0(1).imm;
  }
  break;
 case 128:
  if (FUNC_0(1).type == VAR_4) {

   VAR_9->val = FUNC_0(1).imm;
  }
  break;
 default:
  break;
 }
}
