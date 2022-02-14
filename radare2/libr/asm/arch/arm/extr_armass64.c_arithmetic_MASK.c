
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int reg; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ut32 FUNC_0 (ArmOp *VAR_2, int VAR_3) {
 ut32 VAR_4 = VAR_1;
 if (VAR_2->operands_count < 3) {
  return VAR_4;
 }

 if (!(VAR_2->operands[0].type & VAR_0 &&
       VAR_2->operands[1].type & VAR_0)) {
  return VAR_4;
 }
 if (VAR_2->operands[2].type & VAR_0) {
  VAR_3 -= 6;
 }

 VAR_4 = VAR_3;
 VAR_4 += VAR_2->operands[0].reg << 24;
 VAR_4 += (VAR_2->operands[1].reg & 7) << (24 + 5);
 VAR_4 += (VAR_2->operands[1].reg >> 3) << 16;
 if (VAR_2->operands[2].type & VAR_0) {
  VAR_4 += VAR_2->operands[2].reg << 8;
 } else {
  VAR_4 += (VAR_2->operands[2].reg & 0x3f) << 18;
  VAR_4 += (VAR_2->operands[2].reg >> 6) << 8;
 }
 return VAR_4;
}
