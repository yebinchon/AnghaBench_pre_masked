
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_7__ {scalar_t__ val; scalar_t__ name; } ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int reg_type; scalar_t__ type; scalar_t__ immediate; scalar_t__ sp_val; scalar_t__ reg; } ;
typedef TYPE_2__ ArmOp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static ut32 FUNC_0(ArmOp *VAR_5, int VAR_6) {
 ut32 VAR_7 = VAR_3;
 ut32 VAR_8 = VAR_3;
 int VAR_9 = 0;
 int VAR_10;
 ut32 VAR_11, VAR_12;

 if (VAR_6) {
  if (VAR_5->operands[1].reg_type != (VAR_1 | VAR_2)) {
   if (VAR_5->operands[1].type == VAR_0) {
    for (VAR_10 = 0; VAR_4[VAR_10].name; VAR_10++) {
     if (VAR_5->operands[1].immediate == VAR_4[VAR_10].val) {
      VAR_5->operands[1].sp_val = VAR_4[VAR_10].val;
      VAR_5->operands[1].reg = VAR_5->operands[1].immediate;
      break;
     }
    }
   } else {
    return VAR_7;
   }
  }
  VAR_11 = VAR_5->operands[0].reg;
  VAR_12 = VAR_5->operands[1].sp_val;
 } else {
  if (VAR_5->operands[0].reg_type != (VAR_1 | VAR_2)) {
   if (VAR_5->operands[0].type == VAR_0) {
    for (VAR_10 = 0; VAR_4[VAR_10].name; VAR_10++) {
     if (VAR_5->operands[0].immediate == VAR_4[VAR_10].val) {
      VAR_5->operands[0].sp_val = VAR_4[VAR_10].val;
      VAR_5->operands[0].reg = VAR_5->operands[0].immediate;
      break;
     }
    }
   } else {
    return VAR_7;
   }
  }
  VAR_11 = VAR_5->operands[1].reg;
  if ( VAR_5->operands[1].sp_val == 0xfffe ) {
   VAR_9 = 1;
   VAR_11 = VAR_5->operands[1].immediate;
  }
  VAR_12 = VAR_5->operands[0].sp_val;
 }
 VAR_7 = 0x00000000;

 if (VAR_9) {

  VAR_7 = 0xd500401f;
  if (VAR_12 == 0xc210) {
   VAR_12 = 0x05;
  }

  VAR_7 |= (VAR_12 & 0xf0) << 12;
  VAR_7 |= (VAR_12 & 0x0f) << 5;
  VAR_7 |= (VAR_11 & 0xf) << 8;

 } else {
  if (VAR_6) {

   VAR_7 |= 0xd5200000;
  } else {
   VAR_7 |= 0xd5000000;
  }
  VAR_7 |= VAR_12 << 5;
  VAR_7 |= VAR_11;
 }
 VAR_8 = 0x00000000;
 VAR_8 |= (VAR_7 & 0xff) << 8*3;
 VAR_8 |= (VAR_7 & 0xff00) << 8*1;
 VAR_8 |= (VAR_7 & 0xff0000) >> 8*1;
 VAR_8 |= (VAR_7 & 0xff000000) >> 8*3;





 return VAR_8;
}
