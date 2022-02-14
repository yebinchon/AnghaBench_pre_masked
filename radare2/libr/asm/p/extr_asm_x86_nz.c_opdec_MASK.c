
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
struct TYPE_7__ {int type; int dest_size; int reg; int* regs; int offset; int offset_sign; int * scale; scalar_t__ extended; scalar_t__ explicit_size; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_18, ut8 *VAR_19, const Opcode *VAR_20) {
 if (VAR_20->operands[1].type) {
  FUNC_0 ("Error: Invalid operands\n");
  return -1;
 }
 FUNC_2 (VAR_20);
 int VAR_21 = 0;
 int VAR_22 = VAR_20->operands[0].type & VAR_0;
 if (VAR_20->operands[0].explicit_size) {
  VAR_22 = VAR_20->operands[0].dest_size;
 }

 if (VAR_22 & VAR_12) {
  VAR_19[VAR_21++] = 0x66;
 }


 int VAR_23 = 1 << 6;
 bool VAR_24 = 0;
 if (VAR_22 & VAR_11) {
  VAR_24 = 1;
  VAR_23 |= 1 << 3;
 }
 if (VAR_20->operands[0].extended) {
  VAR_24 = 1;
  VAR_23 |= 1;
 }


 int VAR_25;
 if (VAR_22 & VAR_8) {
  VAR_25 = 0xfe;
 } else {
  VAR_25 = 0xff;
 }

 if (!(VAR_20->operands[0].type & VAR_10)) {
  if (VAR_24) {
   VAR_19[VAR_21++] = VAR_23;
  }
  if (VAR_18->bits > 32 || VAR_22 & VAR_8) {
   VAR_19[VAR_21++] = VAR_25;
  }
  if (VAR_18->bits == 32 && VAR_22 & (VAR_9 | VAR_12)) {
   VAR_19[VAR_21++] = 0x48 | VAR_20->operands[0].reg;
  } else {
   VAR_19[VAR_21++] = 0xc8 | VAR_20->operands[0].reg;
  }
  return VAR_21;
 }


 bool VAR_26 = VAR_20->operands[0].regs[0] == VAR_16;
 int VAR_27 = VAR_20->operands[0].offset * VAR_20->operands[0].offset_sign;
 int VAR_28 = 0;
 int VAR_29;
 int VAR_30 = 0;
 int VAR_31;
 bool VAR_32 = 0;
 int VAR_33 = 0;

 if (VAR_27 == 0) {
  VAR_29 = 0;
 } else if (VAR_27 < 128 && VAR_27 > -129) {
  VAR_29 = 1;
 } else {
  VAR_29 = 2;
 }

 if (VAR_20->operands[0].regs[0] & VAR_12) {
  if (VAR_20->operands[0].regs[0] == VAR_14 && VAR_20->operands[0].regs[1] == VAR_17) {
   VAR_31 = VAR_1;
  } else if (VAR_20->operands[0].regs[0] == VAR_14 && VAR_20->operands[0].regs[1] == VAR_15) {
   VAR_31 = VAR_2;
  } else if (VAR_20->operands[0].regs[0] == VAR_13 && VAR_20->operands[0].regs[1] == VAR_17) {
   VAR_31 = VAR_3;
  } else if (VAR_20->operands[0].regs[0] == VAR_13 && VAR_20->operands[0].regs[1] == VAR_15) {
   VAR_31 = VAR_4;
  } else if (VAR_20->operands[0].regs[0] == VAR_17 && VAR_20->operands[0].regs[1] == -1) {
   VAR_31 = VAR_5;
  } else if (VAR_20->operands[0].regs[0] == VAR_15 && VAR_20->operands[0].regs[1] == -1) {
   VAR_31 = VAR_6;
  } else if (VAR_20->operands[0].regs[0] == VAR_14 && VAR_20->operands[0].regs[1] == -1) {
   VAR_31 = VAR_7;
  } else {

   return -1;
  }
  VAR_28 = (VAR_29 << 6) | (VAR_30 << 3) | VAR_31;
 } else {

  if (VAR_20->operands[0].extended) {
   VAR_31 = VAR_20->operands[0].reg;
  } else {
   VAR_31 = VAR_20->operands[0].regs[0];
  }

  if (VAR_31 == 5 && VAR_29 == 0) {
   VAR_29 = 1;
  }


  int VAR_34 = VAR_20->operands[0].regs[1];
  int VAR_35 = FUNC_1(VAR_20->operands[0].scale[1]);
  if (VAR_34 != -1) {
   VAR_32 = 1;
   VAR_33 = (VAR_35 << 6) | (VAR_34 << 3) | VAR_31;
  } else if (VAR_31 == 4) {
   VAR_32 = 1;
   VAR_33 = 0x24;
  }
  if (VAR_32) {
   VAR_31 = VAR_5;
  }
  if (VAR_26) {
   VAR_28 = (VAR_1 << 6) | (VAR_30 << 3) | VAR_6;
   VAR_33 = (VAR_35 << 6) | (VAR_5 << 3) | VAR_6;
  } else {
   VAR_28 = (VAR_29 << 6) | (VAR_30 << 3) | VAR_31;
  }
  VAR_28 |= 1<<3;
 }

 if (VAR_24) {
  VAR_19[VAR_21++] = VAR_23;
 }
 VAR_19[VAR_21++] = VAR_25;
 VAR_19[VAR_21++] = VAR_28;
 if (VAR_32) {
  VAR_19[VAR_21++] = VAR_33;
 }

 if (VAR_29 == 1) {
  VAR_19[VAR_21++] = VAR_27;
 } else if (VAR_20->operands[0].regs[0] & VAR_12 && VAR_29 == 2) {
  VAR_19[VAR_21++] = VAR_27;
  VAR_19[VAR_21++] = VAR_27 >> 8;
 } else if (VAR_29 == 2 || VAR_26) {
  VAR_19[VAR_21++] = VAR_27;
  VAR_19[VAR_21++] = VAR_27 >> 8;
  VAR_19[VAR_21++] = VAR_27 >> 16;
  VAR_19[VAR_21++] = VAR_27 >> 24;
 }

 return VAR_21;
}
