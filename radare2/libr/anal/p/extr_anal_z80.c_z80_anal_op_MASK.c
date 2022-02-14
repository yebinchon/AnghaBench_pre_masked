
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef scalar_t__ st8 ;
struct TYPE_4__ {int size; int refptr; int ptr; int eob; int stackptr; int jump; void* type; void* stackop; int fail; scalar_t__ addr; int nopcode; } ;
typedef int RAnalOpMask ;
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
 void* VAR_22 ;
 int FUNC_0 (TYPE_1__*,char,int) ;
 int FUNC_1 (int const*,int,int*,int *) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_23, RAnalOp *VAR_24, ut64 VAR_25, const ut8 *VAR_26, int VAR_27, RAnalOpMask VAR_28) {
 int VAR_29 = 0;
 FUNC_1 (VAR_26, VAR_27, &VAR_29, &VAR_24->nopcode);

 FUNC_0 (VAR_24, '\0', sizeof (RAnalOp));
 VAR_24->addr = VAR_25;
 VAR_24->size = VAR_29;
 VAR_24->type = VAR_20;

 switch (VAR_26[0]) {
 case 0x00:
  VAR_24->type = VAR_9;
  break;
 case 0x03:
 case 0x04:
 case 0x0c:
 case 0x13:
 case 0x14:
 case 0x1c:
 case 0x23:
 case 0x24:
 case 0x2c:
 case 0x33:
 case 0x34:
 case 0x3c:
  VAR_24->type = VAR_0;
  break;
 case 0x09:
 case 0x19:
 case 0x29:
 case 0x39:
 case 0x80:
 case 0x81:
 case 0x82:
 case 0x83:
 case 0x84:
 case 0x85:
 case 0x86:
 case 0x87:
 case 0xc6:
  VAR_24->type = VAR_0;
  break;
 case 0x90:
 case 0x91:
 case 0x92:
 case 0x93:
 case 0x94:
 case 0x95:
 case 0x96:
 case 0x97:
 case 0xd6:
  VAR_24->type = VAR_16;
                break;
 case 0x22:
  VAR_24->type = VAR_15;
  VAR_24->refptr = 2;
  VAR_24->ptr = VAR_26[1] | VAR_26[2] << 8;
  break;
 case 0x32:
  VAR_24->type = VAR_15;
  VAR_24->refptr = 1;
  VAR_24->ptr = VAR_26[1] | VAR_26[2] << 8;
  break;
 case 0x2a:
  VAR_24->type = VAR_7;
  VAR_24->refptr = 2;
  VAR_24->ptr = VAR_26[1] | VAR_26[2] << 8;
  break;
 case 0x3a:
  VAR_24->type = VAR_7;
  VAR_24->refptr = 1;
  VAR_24->ptr = VAR_26[1] | VAR_26[2] << 8;
  break;
 case 0xc0:
 case 0xc8:
 case 0xd0:
 case 0xd8:
 case 0xe0:
 case 0xe8:
 case 0xf0:
 case 0xf8:
  VAR_24->type = VAR_5;
  break;
 case 0xc9:
  VAR_24->type = VAR_12;
  VAR_24->eob = 1;
  VAR_24->stackop = VAR_22;
  VAR_24->stackptr = -2;
  break;
 case 0xed:
  switch(VAR_26[1]) {
  case 0x43:
  case 0x53:
  case 0x63:
  case 0x73:
   VAR_24->type = VAR_15;
   VAR_24->refptr = 2;
   VAR_24->ptr = VAR_26[2] | VAR_26[3] << 8;
   break;
  case 0x4b:
  case 0x5b:
  case 0x6b:
  case 0x7b:
   VAR_24->type = VAR_7;
   VAR_24->refptr = 2;
   VAR_24->ptr = VAR_26[2] | VAR_26[3] << 8;
   break;
  case 0x45:
  case 0x4d:
   VAR_24->type = VAR_12;
   VAR_24->eob = 1;
   break;
  }
  break;
 case 0xdd:
 case 0xfd:
  switch (VAR_26[1]) {
  case 0x22:
   VAR_24->type = VAR_15;
   VAR_24->refptr = 2;
   VAR_24->ptr = VAR_26[2] | VAR_26[3] << 8;
   break;
  case 0x2a:
   VAR_24->type = VAR_7;
   VAR_24->refptr = 2;
   VAR_24->ptr = VAR_26[2] | VAR_26[3] << 8;
   break;
  }
  break;
 case 0x05:
 case 0x0b:
 case 0x0d:
 case 0x15:
 case 0x1b:
 case 0x1d:
 case 0x25:
 case 0x2b:
 case 0x2d:
 case 0x35:
 case 0x3b:
 case 0x3d:

  VAR_24->type = VAR_16;
  break;
 case 0xc5:
 case 0xd5:
 case 0xe5:
 case 0xf5:
  VAR_24->type = VAR_11;
  break;
 case 0xc1:
 case 0xd1:
 case 0xe1:
 case 0xf1:
  VAR_24->type = VAR_10;
  break;

 case 0x40:
 case 0x49:
 case 0x52:
 case 0x5b:
 case 0x64:
 case 0x6d:
 case 0x7f:
  break;
 case 0x76:
  VAR_24->type = VAR_18;
  break;

 case 0x10:
  VAR_24->type = VAR_4;
  VAR_24->jump = VAR_25 + (st8)VAR_26[1] + VAR_29 ;
  VAR_24->fail = VAR_25 + VAR_29;
  break;
 case 0x18:
  VAR_24->type = VAR_6;
  VAR_24->jump = VAR_25 + (st8)VAR_26[1] + VAR_29;
  break;

 case 0x20:
 case 0x28:
 case 0x30:
 case 0x38:
  VAR_24->type = VAR_4;
  VAR_24->jump = VAR_25 + ((VAR_27>1)? (st8)VAR_26[1]:0) + VAR_29;
  VAR_24->fail = VAR_25 + VAR_29;
  break;


 case 0xc2:
 case 0xca:
 case 0xd2:
 case 0xda:
 case 0xe2:
 case 0xea:
 case 0xf2:
 case 0xfa:
  VAR_24->type = VAR_4;
  VAR_24->jump = (VAR_27 > 2)? VAR_26[1] | VAR_26[2] << 8: 0;
  VAR_24->fail = VAR_25 + VAR_29;
  break;
 case 0xc3:
  VAR_24->type = VAR_6;
  VAR_24->jump = (VAR_27 > 2)? VAR_26[1] | VAR_26[2] << 8: 0;
  break;
 case 0xe9:
  VAR_24->type = VAR_19;
  break;

 case 0xc7:
  VAR_24->jump = 0x00;
  VAR_24->type = VAR_17;
  break;
 case 0xcf:
  VAR_24->jump = 0x08;
  VAR_24->type = VAR_17;
  break;
 case 0xd7:
  VAR_24->jump = 0x10;
  VAR_24->type = VAR_17;
  break;
 case 0xdf:
  VAR_24->jump = 0x18;
  VAR_24->type = VAR_17;
  break;
 case 0xe7:
  VAR_24->jump = 0x20;
  VAR_24->type = VAR_17;
  break;
 case 0xef:
  VAR_24->jump = 0x28;
  VAR_24->type = VAR_17;
  break;
 case 0xf7:
  VAR_24->jump = 0x30;
  VAR_24->type = VAR_17;
  break;
 case 0xff:
  VAR_24->jump = 0x38;
  VAR_24->type = VAR_17;
  break;


 case 0xc4:
 case 0xd4:
 case 0xe4:
 case 0xf4:

 case 0xcc:
 case 0xdc:
 case 0xec:
 case 0xfc:
  VAR_24->type = VAR_3;
  VAR_24->jump = (VAR_27>2)? VAR_26[1] | VAR_26[2] << 8: 0;
  VAR_24->fail = VAR_25 + VAR_29;
  break;


 case 0xcd:
  VAR_24->type = VAR_2;
  VAR_24->stackop = VAR_22;
  VAR_24->stackptr = 2;
  VAR_24->jump = VAR_26[1] | VAR_26[2] << 8;
  break;
 case 0xcb:
  switch(VAR_26[1]/8) {
  case 0:
  case 2:
  case 4:
  case 6:
   VAR_24->type = VAR_13;
   break;
  case 1:
  case 3:
  case 5:
  case 7:
   VAR_24->type = VAR_14;
   break;
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
   VAR_24->type = VAR_1;
   break;
  case 16:
  case 17:
  case 18:
  case 19:
  case 20:
  case 21:
  case 22:
  case 23:
   VAR_24->type = VAR_21;
   break;
  case 24:
  case 25:
  case 26:
  case 27:
  case 28:
  case 29:
  case 30:
  case 31:
   VAR_24->type = VAR_8;
   break;
  }
  break;
 }
 return VAR_29;
}
