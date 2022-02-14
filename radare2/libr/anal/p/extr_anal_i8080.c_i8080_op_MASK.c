
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int jump; int size; void* type; int fail; int addr; } ;
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
 int FUNC_0 (int const*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char,int) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_11, RAnalOp *VAR_12, ut64 VAR_13, const ut8 *VAR_14, int VAR_15, RAnalOpMask VAR_16) {
 char VAR_17[32];
 int VAR_18 = FUNC_0 (VAR_14, VAR_17, VAR_15);
 FUNC_1 (VAR_12, '\0', sizeof (RAnalOp));
 VAR_12->addr = VAR_13;
 VAR_12->type = VAR_10;
 switch (VAR_14[0]) {
 case 0x00:
  VAR_12->type = VAR_4;
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
  VAR_12->type = VAR_0;
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
  VAR_12->type = VAR_0;
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
  VAR_12->type = VAR_8;
  break;
 case 0xc0:
 case 0xc8:
 case 0xd0:
 case 0xd8:
 case 0xe0:
 case 0xe8:
 case 0xf0:
 case 0xf8:
  VAR_12->type = VAR_2;
  break;
 case 0xc9:
  VAR_12->type = VAR_7;
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

  VAR_12->type = VAR_8;
  break;
 case 0xc5:
 case 0xd5:
 case 0xe5:
 case 0xf5:
  VAR_12->type = VAR_6;
  break;
 case 0xc1:
 case 0xd1:
 case 0xe1:
 case 0xf1:
  VAR_12->type = VAR_5;
  break;
 case 0x40:
 case 0x49:
 case 0x52:
 case 0x5b:
 case 0x64:
 case 0x6d:
 case 0x76:
 case 0x7f:
  VAR_12->type = VAR_9;
  break;
 case 0x10:
 case 0x18:
 case 0x20:
 case 0x28:
 case 0x30:
 case 0x38:
 case 0xc2:
 case 0xc3:
 case 0xca:
 case 0xd2:
 case 0xda:
 case 0xe2:
 case 0xe9:
 case 0xea:
 case 0xf2:
 case 0xfa:
  VAR_12->type = VAR_3;
  break;

 case 0xc4:
 case 0xcc:
 case 0xcd:
 case 0xd4:
 case 0xdc:
 case 0xdd:
 case 0xe4:
 case 0xec:
 case 0xed:
 case 0xf4:
 case 0xfc:
 case 0xfd:
  VAR_12->type = VAR_1;
  break;
 case 0xc7:
  VAR_12->jump = 0x00;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xcf:
  VAR_12->jump = 0x08;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xd7:
  VAR_12->jump = 0x10;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xdf:
  VAR_12->jump = 0x18;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xe7:
  VAR_12->jump = 0x20;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xef:
  VAR_12->jump = 0x28;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xf7:
  VAR_12->jump = 0x30;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
  break;
 case 0xff:
  VAR_12->jump = 0x38;
  VAR_12->fail = VAR_13 + VAR_18;
  VAR_12->type = VAR_3;
 break;
 }
 return VAR_12->size = VAR_18;
}
