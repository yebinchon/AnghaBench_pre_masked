
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {TYPE_1__* operands; } ;
struct TYPE_7__ {int bits; } ;
struct TYPE_6__ {int type; int immediate; int sign; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_3, ut8 *VAR_4, const Opcode *VAR_5) {
 int VAR_6 = 0;
 int VAR_7 = 0;
 if (VAR_3->bits == 16) {
  VAR_4[VAR_6++] = 0xc3;
  return VAR_6;
 }
 if (VAR_5->operands[0].type == VAR_1) {
  VAR_4[VAR_6++] = 0xc3;
 } else if (VAR_5->operands[0].type & (VAR_0 | VAR_2)) {
  VAR_4[VAR_6++] = 0xc2;
  VAR_7 = VAR_5->operands[0].immediate * VAR_5->operands[0].sign;
  VAR_4[VAR_6++] = VAR_7;
  VAR_4[VAR_6++] = VAR_7 << 8;
 }
 return VAR_6;
}
