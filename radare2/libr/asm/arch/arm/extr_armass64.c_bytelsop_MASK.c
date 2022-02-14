
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int reg_type; int type; int reg; int immediate; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static ut32 FUNC_1(ArmOp *VAR_4, int VAR_5) {
 ut32 VAR_6 = VAR_3;

 if (VAR_4->operands[0].reg_type & VAR_2) {
  return VAR_6;
 }
 if (VAR_4->operands[1].reg_type & VAR_1) {
  return VAR_6;
 }
 if (VAR_4->operands[2].type & VAR_0) {
  if ((VAR_5 & 0xf) != 8) {
   VAR_5--;
  }
  VAR_5 += 0x00682000;
  VAR_6 = VAR_5 | VAR_4->operands[0].reg << 24 | VAR_4->operands[1].reg << 29 | (VAR_4->operands[1].reg & 56) << 13;
  VAR_6 |= VAR_4->operands[2].reg << 8;
  return VAR_6;
 }

 int VAR_7 = VAR_4->operands[2].immediate;
 if (VAR_7 > 0xfff || VAR_7 < -0x100) {
  return VAR_3;
 }

 int VAR_8 = 0;
 if ((VAR_5 & 0xf) == 8) {
  VAR_8 = 1;
  if (VAR_7 == 0 || (FUNC_0(VAR_7) && VAR_7 > 0)) {
   VAR_5++;
  }
 } else {
  if (VAR_7 < 0) {
   VAR_5--;
  }
 }

 VAR_6 = VAR_5 | VAR_4->operands[0].reg << 24 | VAR_4->operands[1].reg << 29 | (VAR_4->operands[1].reg & 56) << 13;

 int VAR_9 = VAR_7;
 int VAR_10 = 20;
 int VAR_11 = 8;
 int VAR_12 = 10;
 if (VAR_7 < 0) {
  VAR_9 = 0xfff + (VAR_7 + 1);
 }
 if (VAR_8) {
  if (VAR_9 & 0x1 || VAR_7 < 0) {
   VAR_6 |= (0xf & VAR_9) << VAR_10 ;
   VAR_6 |= (0x7 & (VAR_9 >> 4)) << VAR_11;
   VAR_6 |= (0x7 & (VAR_9 >> 6)) << VAR_12;
  } else {
   VAR_6 |= (0xf & VAR_9) << (VAR_10 - 3);
   VAR_6 |= (0x7 & (VAR_9 >> 4)) << (VAR_11 + 13);
   VAR_6 |= (0x7 & (VAR_9 >> 7)) << (VAR_12 - 2);
  }
 } else {
  if (VAR_7 < 0) {
   VAR_6 |= (0xf & VAR_9) << 20;
   VAR_6 |= (0x1f & (VAR_9 >> 4)) << 8;
  } else {
   VAR_6 |= (0xf & VAR_9) << 18;
   VAR_6 |= (0x3 & (VAR_9 >> 4)) << 22;
   VAR_6 |= (0x7 & (VAR_9 >> 6)) << 8;
  }
 }
 return VAR_6;
}
