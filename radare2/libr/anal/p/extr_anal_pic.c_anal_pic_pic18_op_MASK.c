
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int dword_instr ;
struct TYPE_4__ {int size; int cycles; int jump; void* type; int esil; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int const*,char*) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static int FUNC_4(RAnal *VAR_22, RAnalOp *VAR_23, ut64 VAR_24, const ut8 *VAR_25, int VAR_26) {


 if (VAR_26 < 2) {
  VAR_23->size = VAR_26;
  goto beach;
 }
 VAR_23->size = 2;
 ut16 VAR_27 = *(ut16 *)VAR_25;
 ut32 VAR_28 = 0;
 FUNC_1 (&VAR_28, VAR_25, FUNC_0 (sizeof (VAR_28), VAR_26));
 switch (VAR_27 >> 9) {
 case 0x76:
  if (VAR_26 < 4) {
   goto beach;
  }
  if (VAR_28 >> 28 != 0xf) {
   goto beach;
  }
  VAR_23->size = 4;
  VAR_23->type = VAR_2;
  return VAR_23->size;
 };
 switch (VAR_27 >> 11) {
 case 0x1b:
  VAR_23->type = VAR_2;
  return VAR_23->size;
 case 0x1a:
  VAR_23->type = VAR_7;
  VAR_23->cycles = 2;
  VAR_23->jump = VAR_24 + 2 + 2 * (*(ut16 *)VAR_25 & 0x7ff);
  FUNC_3 (&VAR_23->esil, "0x%x,pc,=", VAR_23->jump);
  return VAR_23->size;
 }
 switch (VAR_27 >> 12) {
 case 0xf:
  VAR_23->type = VAR_11;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, ",");
  return VAR_23->size;
 case 0xc:
  if (VAR_26 < 4) {
   goto beach;
  }
  if (VAR_28 >> 28 != 0xf) {
   goto beach;
  }
  VAR_23->size = 4;
  VAR_23->type = VAR_9;
  return VAR_23->size;
 case 0xb:
 case 0xa:
  VAR_23->type = VAR_3;
  return VAR_23->size;
 case 0x9:
 case 0x8:
 case 0x7:
  VAR_23->type = VAR_20;
  return VAR_23->size;
 };

 switch (VAR_27 >> 8) {
 case 0xe0:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "z");
  return VAR_23->size;
 case 0xe1:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "z,!");
  return VAR_23->size;
 case 0xe3:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "c,!");
  return VAR_23->size;
 case 0xe4:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "ov");
  return VAR_23->size;
 case 0xe5:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "ov,!");
  return VAR_23->size;
 case 0xe6:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "n");
  return VAR_23->size;
 case 0xe7:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "n,!");
  return VAR_23->size;
 case 0xe2:
  FUNC_2 (VAR_23, VAR_24, VAR_25, "c");
  return VAR_23->size;
 case 0xef:
  if (VAR_26 < 4) {
   goto beach;
  }
  if (VAR_28 >> 28 != 0xf) {
   goto beach;
  }
  VAR_23->size = 4;
  VAR_23->cycles = 2;
  VAR_23->jump = ((VAR_28 & 0xff) | ((VAR_28 & 0xfff0000) >> 8)) * 2;
  FUNC_3 (&VAR_23->esil, "0x%x,pc,=", VAR_23->jump);
  VAR_23->type = VAR_7;
  return VAR_23->size;
 case 0xf:
  VAR_23->type = VAR_0;
  VAR_23->cycles = 1;

  FUNC_3 (&VAR_23->esil, "0x%x,wreg,+=,$z,z,:=,7,$s,n,:=,7,$c,c,:=,7,$o,ov,:=,", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 case 0xe:
  VAR_23->type = VAR_8;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, "0x%x,wreg,=,");
  return VAR_23->size;
 case 0xd:
  VAR_23->type = VAR_10;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, "0x%x,wreg,*,prod,=", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 case 0xc:
  VAR_23->type = VAR_15;
  VAR_23->cycles = 2;
  FUNC_3 (&VAR_23->esil, "0x%x,wreg,=,tos,pc,=,", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 case 0xb:
  VAR_23->type = VAR_1;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, "0x%x,wreg,&=,$z,z,:=,7,$s,n,:=,", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 case 0xa:
  VAR_23->type = VAR_21;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, "0x%x,wreg,^=,$z,z,:=,7,$s,n,:=,", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 case 0x9:
  VAR_23->type = VAR_12;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, "0x%x,wreg,^=,$z,z,:=,7,$s,n,:=,", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 case 0x8:
  VAR_23->type = VAR_19;
  VAR_23->cycles = 1;

  FUNC_3 (&VAR_23->esil, "wreg,0x%x,-,wreg,=,$z,z,:=,7,$s,n,:=,7,$c,c,:=,7,$o,ov,:=,", *(ut16 *)VAR_25 & 0xff);
  return VAR_23->size;
 };

 switch (VAR_27 >> 6) {
 case 0x3b8:
  if (VAR_26 < 4) {
   goto beach;
  }
  if (VAR_28 >> 28 != 0xf) {
   goto beach;
  }
  VAR_23->size = 4;
  VAR_23->type = VAR_8;
  return VAR_23->size;
 };
 switch (VAR_27 >> 10) {
 case 0x17:
 case 0x16:
 case 0x15:
 case 0x13:
 case 0xb:
 case 0x1:
  VAR_23->type = VAR_19;
  return VAR_23->size;
 case 0x14:
  VAR_23->type = VAR_9;
  return VAR_23->size;
 case 0x12:
 case 0xf:
 case 0xa:
 case 0x8:
  VAR_23->type = VAR_0;
  return VAR_23->size;
 case 0x9:
  VAR_23->cycles = 1;
  VAR_23->type = VAR_0;
  return VAR_23->size;
 case 0x11:
 case 0xd:
  VAR_23->type = VAR_16;
  return VAR_23->size;
 case 0x10:
 case 0xc:
  VAR_23->type = VAR_17;
  return VAR_23->size;
 case 0xe:
  VAR_23->type = VAR_20;
  return VAR_23->size;
 case 0x7:
  VAR_23->type = VAR_5;
  return VAR_23->size;
 case 0x6:
  VAR_23->type = VAR_21;
  return VAR_23->size;
 case 0x5:
  VAR_23->type = VAR_1;
  return VAR_23->size;
 case 0x4:
  VAR_23->type = VAR_12;
  return VAR_23->size;
 };
 switch (VAR_27 >> 9) {
 case 0x37:
  VAR_23->type = VAR_18;
  return VAR_23->size;
 case 0x36:
 case 0x35:
 case 0x34:
  VAR_23->type = VAR_20;
  return VAR_23->size;
 case 0x33:
  VAR_23->type = VAR_3;
  return VAR_23->size;
 case 0x32:
 case 0x31:
 case 0x30:
  VAR_23->type = VAR_4;
  return VAR_23->size;
 case 0x1:
  VAR_23->type = VAR_10;
  return VAR_23->size;
 };
 switch (VAR_27 >> 4) {
 case 0x10:
  VAR_23->type = VAR_8;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, "0x%x,bsr,=,", *(ut16 *)VAR_25 & 0xf);
  return VAR_23->size;
 };
 switch (VAR_27) {
 case 0xff:
 case 0x7:
 case 0x4:
 case 0x3:
  VAR_23->type = VAR_20;
  return VAR_23->size;
 case 0x13:
  VAR_23->type = VAR_15;
  VAR_23->cycles = 2;
  FUNC_3 (&VAR_23->esil, "tos,pc,=,");
  return VAR_23->size;
 case 0x12:
  VAR_23->type = VAR_15;
  VAR_23->cycles = 2;
  FUNC_3 (&VAR_23->esil, "tos,pc,=");
  return VAR_23->size;
 case 0x11:
 case 0x10:
  VAR_23->type = VAR_15;
  return VAR_23->size;
 case 0xf:
 case 0xe:
 case 0xd:
 case 0xc:
  VAR_23->type = VAR_8;
  return VAR_23->size;
 case 0xb:
 case 0xa:
 case 0x9:
 case 0x8:
  VAR_23->type = VAR_18;
  return VAR_23->size;
 case 0x6:
  VAR_23->type = VAR_13;
  return VAR_23->size;
 case 0x5:
  VAR_23->type = VAR_14;
  return VAR_23->size;
 case 0x0:
  VAR_23->type = VAR_11;
  VAR_23->cycles = 1;
  FUNC_3 (&VAR_23->esil, ",");
  return VAR_23->size;
 };
beach:
 VAR_23->type = VAR_6;
 return VAR_23->size;
}
