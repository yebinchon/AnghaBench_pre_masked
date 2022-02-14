
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_9__ {TYPE_1__* operands; } ;
struct TYPE_8__ {int bits; } ;
struct TYPE_7__ {int type; int reg_size; int reg; int immediate; int* regs; scalar_t__ extended; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_6, ut8 *VAR_7, const Opcode *VAR_8) {
 FUNC_1 (VAR_8);
 int VAR_9 = 0;
 if (!VAR_8->operands[0].type || !VAR_8->operands[1].type) {
  FUNC_0 ("Error: Invalid operands\n");
  return -1;
 }
 if (VAR_6->bits == 64) {
  if (VAR_8->operands[0].type & VAR_3 &&
   VAR_8->operands[0].reg_size & VAR_2) {
   VAR_7[VAR_9++] = 0x67;
  }
  if (VAR_8->operands[0].type & VAR_4) {
   if (VAR_8->operands[0].extended &&
    VAR_8->operands[1].extended) {
    VAR_7[VAR_9++] = 0x4d;
   } else {
    VAR_7[VAR_9++] = 0x48;
   }
  }
 }

 if (VAR_8->operands[1].type & VAR_1) {
  if (VAR_8->operands[0].type & VAR_0) {
   VAR_7[VAR_9++] = 0xf6;
  } else {
   if (VAR_8->operands[0].type & VAR_5 && VAR_6->bits != 16) {
    VAR_7[VAR_9++] = 0x66;
   }
   VAR_7[VAR_9++] = 0xf7;
  }
  if (VAR_8->operands[0].type & VAR_3) {
   VAR_7[VAR_9++] = 0x00 | VAR_8->operands[0].reg;
  } else {
   VAR_7[VAR_9++] = 0xc0 | VAR_8->operands[0].reg;
  }
  VAR_7[VAR_9++] = VAR_8->operands[1].immediate >> 0;
  if (VAR_8->operands[0].type & VAR_0) {
   return VAR_9;
  }
  VAR_7[VAR_9++] = VAR_8->operands[1].immediate >> 8;
  if (VAR_8->operands[0].type & VAR_5) {
   return VAR_9;
  }
  VAR_7[VAR_9++] = VAR_8->operands[1].immediate >> 16;
  VAR_7[VAR_9++] = VAR_8->operands[1].immediate >> 24;
  return VAR_9;
 }
 if (VAR_8->operands[0].type & VAR_0 ||
  VAR_8->operands[1].type & VAR_0) {
  VAR_7[VAR_9++] = 0x84;
 } else {
  VAR_7[VAR_9++] = 0x85;
 }
 if (VAR_8->operands[0].type & VAR_3) {
  VAR_7[VAR_9++] = 0x00 | VAR_8->operands[1].reg << 3 | VAR_8->operands[0].regs[0];
 } else {
  if (VAR_8->operands[1].type & VAR_3) {
   VAR_7[VAR_9++] = 0x00 | VAR_8->operands[0].reg << 3 | VAR_8->operands[1].regs[0];
  } else {
   VAR_7[VAR_9++] = 0xc0 | VAR_8->operands[1].reg << 3 | VAR_8->operands[0].reg;
  }
 }
 return VAR_9;
}
