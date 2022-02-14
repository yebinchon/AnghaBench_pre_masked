
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int immediate; int reg; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;

__attribute__((used)) static ut32 FUNC_0(ArmOp *VAR_1, int VAR_2) {
 ut32 VAR_3 = VAR_0;

 if (VAR_1->operands[3].immediate & 0x7) {
  return VAR_3;
 }
 if (VAR_2 == 0x000040a9 && (VAR_1->operands[0].reg == VAR_1->operands[1].reg)) {
  return VAR_3;
 }

 VAR_3 = VAR_2;
 VAR_3 += VAR_1->operands[0].reg << 24;
 VAR_3 += VAR_1->operands[1].reg << 18;
 VAR_3 += (VAR_1->operands[2].reg & 0x7) << 29;
 VAR_3 += (VAR_1->operands[2].reg >> 3) << 16;
 VAR_3 += (VAR_1->operands[3].immediate & 0x8) << 20;
 VAR_3 += (VAR_1->operands[3].immediate >> 4) << 8;
 return VAR_3;
}
