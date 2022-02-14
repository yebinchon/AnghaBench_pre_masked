
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
 int FUNC_0 (int) ;

__attribute__((used)) static ut32 FUNC_1(ArmOp *VAR_3, int VAR_4) {
 ut32 VAR_5 = VAR_2;

 if (VAR_3->operands[1].reg_type & VAR_1) {
  return VAR_5;
 }
 if (VAR_3->operands[0].reg_type & VAR_1) {
  VAR_4 -= 0x40;
 }
 if (VAR_3->operands[2].type & VAR_0) {
  VAR_4 += 0x00682000;
  VAR_5 = VAR_4 | VAR_3->operands[0].reg << 24 | VAR_3->operands[1].reg << 29 | (VAR_3->operands[1].reg & 56) << 13;
  VAR_5 |= VAR_3->operands[2].reg << 8;
 } else {
  int VAR_6 = VAR_3->operands[2].immediate;
  if (VAR_6 > 0x100 || VAR_6 < -0x100) {
   return VAR_2;
  }

  if (VAR_6 == 0 || (VAR_6 > 0 && FUNC_0(VAR_6) >= 4)) {
   VAR_4 ++;
  }
  VAR_5 = VAR_4 | VAR_3->operands[0].reg << 24 | VAR_3->operands[1].reg << 29 | (VAR_3->operands[1].reg & 56) << 13;

  if (VAR_6 < 0) {
   VAR_6 *= -1;
   VAR_5 |= ( 0xf & (0xf - (VAR_6 - 1)) ) << 20;
   if (FUNC_0(VAR_6) > 3) {
    VAR_5 |= (0x1f - ((VAR_6 >> 4) - 1)) << 8;
   } else {
    VAR_5 |= (0x1f - (VAR_6 >> 4)) << 8;
   }
  } else {
   if (VAR_3->operands[0].reg_type & VAR_1) {
    if (FUNC_0(VAR_6) < 2) {
     VAR_5 |= (0xf & (VAR_6 & 63)) << 20;
     VAR_5 |= (VAR_6 >> 4) << 8;
    } else {
      VAR_5++;
      VAR_5 |= (0xff & VAR_6) << 16;
    }
    VAR_5 |= (VAR_6 >> 8) << 8;
   } else {
    VAR_5 |= (0xf & (VAR_6 & 63)) << 20;
    if (FUNC_0(VAR_6) < 4) {
     VAR_5 |= (VAR_6 >> 4) << 8;
    } else {
     VAR_5 |= (0xff & VAR_6) << 15;
    }
    VAR_5 |= (VAR_6 >> 8) << 23;
   }
  }
 }
 return VAR_5;
}
