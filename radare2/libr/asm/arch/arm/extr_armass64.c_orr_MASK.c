
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int reg_type; int reg; int immediate; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static ut32 FUNC_1(ArmOp *VAR_4, int VAR_5) {
 ut32 VAR_6 = VAR_3;

 if (VAR_4->operands[2].type & VAR_1) {

  if (!(VAR_4->operands[0].reg_type == VAR_4->operands[1].reg_type &&
       VAR_4->operands[1].reg_type == VAR_4->operands[2].reg_type)) {
       return VAR_6;
  }
  if (VAR_4->operands[0].reg_type & VAR_2) {
   VAR_6 = 0x000000aa;
  } else {
   VAR_6 = 0x0000002a;
  }
  VAR_6 += VAR_4->operands[0].reg << 24;
  VAR_6 += VAR_4->operands[1].reg << 29;
  VAR_6 += (VAR_4->operands[1].reg >> 3) << 16;
  VAR_6 += VAR_4->operands[2].reg << 8;
 } else if (VAR_4->operands[2].type & VAR_0) {

  if (!(VAR_4->operands[0].reg_type == VAR_4->operands[1].reg_type)) {
   return VAR_6;
  }
  if (VAR_4->operands[0].reg_type & VAR_2) {
   VAR_6 = 0x000040b2;
  } else {
   VAR_6 = 0x00000032;
  }

  VAR_6 += VAR_4->operands[0].reg << 24;
  VAR_6 += VAR_4->operands[1].reg << 29;
  VAR_6 += (VAR_4->operands[1].reg >> 3) << 16;

  ut32 VAR_7 = FUNC_0 (VAR_4->operands[2].immediate);
  if (VAR_7 == -1) {
   return VAR_7;
  }
  int VAR_8 = VAR_7 & 0xF;
  if (VAR_4->operands[0].reg_type & VAR_2) {
   VAR_7 = ((VAR_7 >> 6) | 0x78);
   if (VAR_7 > 120) {
    VAR_6 |= VAR_7 << 8;
   }
  } else {
   VAR_7 = ((VAR_7 >> 2));
   if (VAR_7 > 120) {
    VAR_6 |= VAR_7 << 4;
   }
  }
  VAR_6 |= (4 * VAR_8) << 16;
 }
 return VAR_6;
}
