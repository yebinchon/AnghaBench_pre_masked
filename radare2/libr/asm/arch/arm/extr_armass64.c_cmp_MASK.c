
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int reg_type; int shift_amount; int reg; int shift; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ut32 FUNC_0(ArmOp *VAR_4) {
 ut32 VAR_5 = VAR_3;
 int VAR_6 = 0;
 if (VAR_4->operands[0].reg_type & VAR_2 && VAR_4->operands[1].reg_type & VAR_2) {
  VAR_6 = 0x1f0000eb;
 } else if (VAR_4->operands[0].reg_type & VAR_1 && VAR_4->operands[1].reg_type & VAR_1) {
  if (VAR_4->operands[2].shift_amount > 31) {
   return VAR_3;
  }
  VAR_6 = 0x1f00006b;
 } else {
  return VAR_3;
 }

 VAR_5 = VAR_6 | (VAR_4->operands[0].reg & 0x18) << 13 | VAR_4->operands[0].reg << 29 | VAR_4->operands[1].reg << 8;

 if (VAR_4->operands[2].shift != VAR_0) {
  VAR_5 |= VAR_4->operands[2].shift_amount << 18 | VAR_4->operands[2].shift << 14;
 }
 return VAR_5;
}
