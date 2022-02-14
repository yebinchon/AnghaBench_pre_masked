
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_7__ {int format; int subopcode; int c; int a; int b; int mode_n; int limm; int imm; int cond; int mode_m; int member_0; } ;
typedef TYPE_1__ arc_fields ;
struct TYPE_8__ {int size; int refptr; int val; void* type; int fail; int jump; void* cond; int ptr; } ;
typedef TYPE_2__ RAnalOp ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
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
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int,TYPE_1__*,int ) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(RAnalOp *VAR_28, ut64 VAR_29, ut32 VAR_30[2]) {
 arc_fields VAR_31 = {0};

 VAR_31.format = (VAR_30[0] & 0x00c00000) >> 22;
 VAR_31.subopcode = (VAR_30[0] & 0x003f0000) >> 16;
 VAR_31.c = (VAR_30[0] & 0x00000fc0) >> 6;
 VAR_31.a = (VAR_30[0] & 0x0000003f);
 VAR_31.b = (VAR_30[0] & 0x07000000) >> 24 | (VAR_30[0] & 0x7000) >> 9;
 VAR_31.mode_n = 0;


 if (VAR_31.b == VAR_0) {
  VAR_28->size = 8;
  VAR_31.limm = VAR_30[1];

 } else if ((VAR_31.format == 0 || VAR_31.format == 1) && (VAR_31.a == VAR_0)) {
  VAR_28->size = 8;
  VAR_31.limm = VAR_30[1];
 } else if ((VAR_31.format == 0) && (VAR_31.c == VAR_0)) {
  VAR_28->size = 8;
  VAR_31.limm = VAR_30[1];
 } else if ((VAR_31.format == 3) && ((VAR_31.a & 0x20) == 0x20) && (VAR_31.c == VAR_0)) {
  VAR_28->size = 8;
  VAR_31.limm = VAR_30[1];
 }

 if (VAR_31.format == 1) {

  VAR_31.imm = VAR_31.c;
 } else if (VAR_31.format == 2) {

  VAR_31.imm = FUNC_0 (VAR_31.c | VAR_31.a << 6);
 }

 switch (VAR_31.subopcode) {
 case 0x00:
  if ((VAR_31.format == 1 || VAR_31.format == 2) && VAR_31.b == VAR_1) {

   VAR_28->ptr = (VAR_29 & ~3) + VAR_31.imm;
   VAR_28->refptr = 1;
  }
 case 0x01:
 case 0x14:
 case 0x15:
 case 0x16:
  VAR_28->type = VAR_3;
  break;
 case 0x02:
 case 0x03:
 case 0x0e:
 case 0x17:
 case 0x18:
 case 0x19:
  VAR_28->type = VAR_23;
  break;
 case 0x04:
 case 0x06:
 case 0x10:
 case 0x13:
  VAR_28->type = VAR_4;
  break;
 case 0x05:
 case 0x0f:
  VAR_28->type = VAR_16;
  break;
 case 0x07:
 case 0x12:
  VAR_28->type = VAR_27;
  break;
 case 0x08:
 case 0x09:
  VAR_28->type = VAR_7;
  break;
 case 0x0a:
  if (VAR_31.format == 2) {
   VAR_28->type = VAR_12;
   VAR_28->val = FUNC_0 (VAR_31.a << 6 | VAR_31.c);
  } else if (VAR_31.format == 3) {
   VAR_31.cond = VAR_31.a & 0x1f;
   VAR_28->cond = FUNC_4 (VAR_31.cond);
   VAR_28->type = VAR_7;
   if ((VAR_31.a & 0x20)) {

    VAR_28->val = VAR_31.c;
   } else if (VAR_31.c == VAR_0) {

    VAR_28->val = VAR_31.limm;
   }
  }
  break;
 case 0x0b:
 case 0x0c:
 case 0x0d:
 case 0x11:
  VAR_28->type = VAR_8;
  break;
 case 0x1a:
 case 0x1b:
 case 0x1c:
 case 0x1d:
  VAR_28->type = VAR_13;
  break;
 case 0x21:
  VAR_31.mode_n = 1;

 case 0x20:
  VAR_31.mode_m = (VAR_30[0] & 0x20) >> 5;
  FUNC_3 (VAR_28, VAR_29, &VAR_31, VAR_11);
  break;
 case 0x23:
  VAR_31.mode_n = 1;

 case 0x22:
  VAR_31.mode_m = (VAR_30[0] & 0x20) >> 5;
  FUNC_3 (VAR_28, VAR_29, &VAR_31, VAR_5);
  break;
 case 0x1e:
 case 0x1f:
 case 0x24:
 case 0x25:
 case 0x26:
 case 0x27:
 case 0x2c:
 case 0x2d:
 case 0x2e:
 case 0x38:
 case 0x39:
 case 0x3a:
 case 0x3b:
 case 0x3c:
 case 0x3d:
 case 0x3e:
 case 0x3f:
  VAR_28->type = VAR_9;
  break;
 case 0x28:


  switch (VAR_31.format) {
  case 2:
   VAR_31.imm = FUNC_1 ((VAR_31.c | (VAR_31.a << 6)) << 1);
   VAR_28->jump = (VAR_29 & ~3) + VAR_31.imm;
   VAR_28->type = VAR_6;
   VAR_28->fail = VAR_29 + VAR_28->size;
   break;
  case 3:
   VAR_31.imm = VAR_31.c << 1;
   VAR_31.cond = VAR_31.a & 0x1f;
   VAR_28->cond = FUNC_4 (VAR_31.a & 0x1f);
   VAR_28->jump = (VAR_29 & ~3) + VAR_31.imm;
   VAR_28->type = VAR_6;
   VAR_28->fail = VAR_29 + VAR_28->size;
   break;
  default:
   VAR_28->type = VAR_9;
   break;
  }
  break;
 case 0x29:
  VAR_28->type = VAR_12;
  break;
 case 0x2a:
 case 0x2b:
  VAR_28->type = VAR_10;
  break;
 case 0x2f:
  switch (VAR_31.a) {
  case 0:
   VAR_28->type = VAR_20;
   break;
  case 1:
   VAR_28->type = VAR_21;
   break;
  case 2:
   VAR_28->type = VAR_22;
   break;
  case 3:
  case 4:
   VAR_28->type = VAR_19;
   break;
  case 5:
  case 6:
  case 7:
  case 8:

   VAR_28->type = VAR_12;

   break;
  case 9:
   VAR_28->type = VAR_2;
   break;
  case 0xa:
   VAR_28->type = VAR_14;
   break;
  case 0xb:
   VAR_28->type = VAR_18;
   break;
  case 0xc:
   VAR_28->type = VAR_26;
   break;
  case 0x3f:
   switch (VAR_31.b) {
   case 1:

    VAR_28->type = VAR_15;
    break;
   case 2:
    VAR_28->type = VAR_24;
    break;
   case 3:

    VAR_28->type = VAR_15;
    break;
   case 4:
    VAR_28->type = VAR_17;
    break;
   case 5:
    VAR_28->type = VAR_25;
    break;
   default:
    VAR_28->type = VAR_9;
    break;
   }
   break;
  default:
   VAR_28->type = VAR_9;
   break;
  }
  break;
 case 0x30:
 case 0x31:
 case 0x32:
 case 0x33:
 case 0x34:
 case 0x35:
 case 0x36:
 case 0x37:
  VAR_28->type = VAR_12;
  break;
 }

 FUNC_2 (VAR_29, VAR_30, &VAR_31);
 return VAR_28->size;
}
