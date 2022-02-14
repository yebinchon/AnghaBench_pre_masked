
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int csh ;
typedef int cs_insn ;
struct TYPE_5__ {int segment; int disp; int scale; } ;
struct TYPE_7__ {int type; int imm; int size; TYPE_1__ mem; } ;
struct TYPE_6__ {int * reg; int imm; int * regdelta; int memref; int sel; int delta; int mul; } ;
typedef TYPE_2__ RAnalValue ;


 TYPE_4__ FUNC_0 (int) ;



 int * VAR_0 ;
 int FUNC_1 (int *,int *,int *,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(RAnalValue *VAR_2, csh *VAR_3, cs_insn *VAR_4, int VAR_5) {
 FUNC_1 (&VAR_0[VAR_5], &VAR_1[VAR_5], VAR_3, VAR_4, VAR_5);
 switch (FUNC_0 (VAR_5).type) {
 case 129:
  VAR_2->mul = FUNC_0 (VAR_5).mem.scale;
  VAR_2->delta = FUNC_0 (VAR_5).mem.disp;
  VAR_2->sel = FUNC_0 (VAR_5).mem.segment;
  VAR_2->memref = FUNC_0 (VAR_5).size;
  VAR_2->regdelta = &VAR_1[VAR_5];
  break;
 case 128:
  break;
 case 130:
  VAR_2->imm = FUNC_0 (VAR_5).imm;
  break;
 default:
  break;
 }
 VAR_2->reg = &VAR_0[VAR_5];
}
