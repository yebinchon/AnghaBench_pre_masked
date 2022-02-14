
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_9__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_8__ {int bits; } ;
struct TYPE_7__ {int type; int reg; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_2, ut8 *VAR_3, const Opcode *VAR_4) {
 FUNC_0 (VAR_4);
 int VAR_5 = 0;
 if (VAR_4->operands_count < 2 ) {
  return -1;
 }
 if (VAR_2->bits == 64) {
  VAR_3[VAR_5++] = 0x48;
 };
 VAR_3[VAR_5++] = 0x0f;
 if (VAR_4->operands[0].type & VAR_0 &&
    VAR_4->operands[1].type & VAR_0) {
  VAR_3[VAR_5++] = 0xc0;
 } else {
  VAR_3[VAR_5++] = 0xc1;
 }
 if (VAR_4->operands[0].type & VAR_1 &&
       VAR_4->operands[1].type & VAR_1) {
  VAR_3[VAR_5] |= 0xc0;
  VAR_3[VAR_5] |= (VAR_4->operands[1].reg << 3);
  VAR_3[VAR_5++] |= VAR_4->operands[0].reg;
 }
 return VAR_5;
}
