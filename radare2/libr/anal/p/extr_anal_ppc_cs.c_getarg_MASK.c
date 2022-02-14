
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct Getarg {int * insn; } ;
struct TYPE_4__ {scalar_t__ base; scalar_t__ disp; } ;
struct TYPE_5__ {int type; int imm; TYPE_1__ mem; scalar_t__ reg; } ;
typedef TYPE_2__ cs_ppc_op ;
typedef int cs_insn ;


 TYPE_2__ FUNC_0 (int) ;






__attribute__((used)) static ut64 FUNC_1(struct Getarg *VAR_0, int VAR_1) {
 ut64 VAR_2 = 0;
 cs_insn *VAR_3 = VAR_0->insn;
 cs_ppc_op VAR_4;

 if (VAR_1 < 0 || VAR_1 >= 8) {
  return 0;
 }

 VAR_4 = FUNC_0 (VAR_1);
 switch (VAR_4.type) {
 case 130:
  break;
 case 128:
  VAR_2 = VAR_4.reg;
  break;
 case 131:
  VAR_2 = (ut64) VAR_4.imm;
  break;
 case 129:
  VAR_2 = VAR_4.mem.disp + VAR_4.mem.base;
  break;
 case 132:
  VAR_2 = (ut64) VAR_4.imm;
  break;
 }
 return VAR_2;
}
