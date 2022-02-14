
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ut8 ;
typedef int ut64 ;
typedef int st8 ;
typedef int st16 ;
struct TYPE_6__ {int M; int X; } ;
struct TYPE_5__ {int size; int nopcode; int addr; int eob; int jump; void* type; int fail; int cond; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
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
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int FUNC_0 (TYPE_1__*,char,int) ;
 int * VAR_28 ;
 int FUNC_1 (int,int,int *) ;
 TYPE_2__* VAR_29 ;
 int FUNC_2 (size_t const*) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_30, RAnalOp *VAR_31, ut64 VAR_32, const ut8 *VAR_33, int VAR_34, RAnalOpMask VAR_35) {
 FUNC_0 (VAR_31, '\0', sizeof (RAnalOp));
 VAR_31->size = FUNC_1(VAR_29->M, VAR_29->X, &VAR_28[VAR_33[0]]);
 if (VAR_31->size > VAR_34) {
  return VAR_31->size = 0;
 }
 VAR_31->nopcode = 1;
 VAR_31->addr = VAR_32;
 VAR_31->type = VAR_25;
 switch (VAR_33[0]) {
 case 0xea:
  VAR_31->type = VAR_11;
  break;
 case 0xfb:
  VAR_31->type = VAR_26;
  break;
 case 0x00:
 case 0x02:
  VAR_31->type = VAR_22;
  break;
 case 0x1b:
 case 0x3b:
 case 0x5b:
 case 0x7b:
 case 0x8a:
 case 0x98:
 case 0x9a:
 case 0x9b:
 case 0xa8:
 case 0xaa:
 case 0xba:
 case 0xbb:
  VAR_31->type = VAR_10;
  break;
 case 0x48:
 case 0x8b:
 case 0x0b:
 case 0x4b:
 case 0x08:
 case 0xda:
 case 0x5a:
  VAR_31->type = VAR_14;
  break;
 case 0x68:
 case 0xab:
 case 0x2b:
 case 0x28:
 case 0xfa:
 case 0x7a:
  VAR_31->type = VAR_13;
  break;

 case 0x61: case 0x63: case 0x65: case 0x67: case 0x69: case 0x6d:
 case 0x6f: case 0x71: case 0x72: case 0x73: case 0x75: case 0x77:
 case 0x79: case 0x7d: case 0x7f:

 case 0x1a: case 0xe6: case 0xee: case 0xf6: case 0xfe:
 case 0xe8:
 case 0xc8:
  VAR_31->type = VAR_3;
  break;

 case 0x23: case 0x25: case 0x27: case 0x29: case 0x2d: case 0x2f:
 case 0x31: case 0x32: case 0x33: case 0x35: case 0x37: case 0x39:
 case 0x3d: case 0x3f:
  VAR_31->type = VAR_4;
  break;

 case 0x24: case 0x2c: case 0x34: case 0x3c: case 0x89:
  VAR_31->type = VAR_2;
  break;

 case 0xc1: case 0xc3: case 0xc5: case 0xc7: case 0xc9: case 0xcd:
 case 0xcf: case 0xd1: case 0xd2: case 0xd3: case 0xd5: case 0xd7:
 case 0xd9: case 0xdd: case 0xdf:

 case 0xe0: case 0xe4: case 0xec:

 case 0xc0: case 0xc4: case 0xcc:
  VAR_31->type = VAR_7;
  break;

 case 0x01: case 0x03: case 0x05: case 0x07: case 0x09: case 0x0d:
 case 0x0f: case 0x11: case 0x12: case 0x13: case 0x15: case 0x17:
 case 0x19: case 0x1d: case 0x1f:
  VAR_31->type = VAR_12;
  break;

 case 0x41: case 0x43: case 0x45: case 0x47: case 0x49: case 0x4d:
 case 0x4f: case 0x51: case 0x52: case 0x53: case 0x55: case 0x57:
 case 0x59: case 0x5d: case 0x5f:
  VAR_31->type = VAR_27;
  break;

 case 0x06: case 0x0a: case 0x0e: case 0x16: case 0x1e:
  VAR_31->type = VAR_18;
  break;

 case 0x46: case 0x4a: case 0x4e: case 0x56: case 0x5e:
  VAR_31->type = VAR_19;
  break;

 case 0x26: case 0x2a: case 0x2e: case 0x36: case 0x3e:
  VAR_31->type = VAR_16;
  break;

 case 0x66: case 0x6a: case 0x6e: case 0x76: case 0x7e:
  VAR_31->type = VAR_17;
  break;

 case 0xe1: case 0xe3: case 0xe5: case 0xe7: case 0xe9: case 0xed:
 case 0xef: case 0xf1: case 0xf2: case 0xf3: case 0xf5: case 0xf7:
 case 0xf9: case 0xfd: case 0xff:

 case 0x3a: case 0xc6: case 0xce: case 0xd6: case 0xde:
 case 0xca:
 case 0x88:
  VAR_31->type = VAR_21;
  break;

 case 0x81: case 0x83: case 0x85: case 0x87: case 0x8d: case 0x8f:
 case 0x91: case 0x92: case 0x93: case 0x95: case 0x97: case 0x99:
 case 0x9d: case 0x9f:

 case 0x86: case 0x8e: case 0x96:

 case 0x84: case 0x8c: case 0x94:

 case 0x64: case 0x74: case 0x9c: case 0x9e:
  VAR_31->type = VAR_20;
  break;

 case 0xa1: case 0xa3: case 0xa5: case 0xa7: case 0xa9: case 0xad:
 case 0xaf: case 0xb1: case 0xb2: case 0xb3: case 0xb5: case 0xb7:
 case 0xb9: case 0xbd: case 0xbf:

 case 0xa2: case 0xa6: case 0xae: case 0xb6: case 0xbe:

 case 0xa0: case 0xa4: case 0xac: case 0xb4: case 0xbc:
  VAR_31->type = VAR_9;
  break;
 case 0x4c:
  VAR_31->eob = 1;
  VAR_31->jump = (VAR_32 & 0xFF0000) | FUNC_2 (VAR_33 + 1);
  VAR_31->type = VAR_8;
  break;
 case 0x5c:
  VAR_31->eob = 1;
  VAR_31->jump = VAR_33[1] | VAR_33[2] << 8 | VAR_33[3] << 16;
  VAR_31->type = VAR_8;
  break;
 case 0x80:
  VAR_31->eob = 1;
  VAR_31->jump = VAR_32 + 2 + (st8)VAR_33[1];
  VAR_31->type = VAR_8;
  break;
 case 0x82:
  VAR_31->eob = 1;
  VAR_31->jump = VAR_32 + 3 + (st16)FUNC_2 (VAR_33 + 1);
  VAR_31->type = VAR_8;
  break;
 case 0x6c:
 case 0x7c:
 case 0xdc:
  VAR_31->eob = 1;
  VAR_31->type = VAR_24;
  break;
 case 0x10:
 case 0x30:
 case 0x50:
 case 0x70:
 case 0x90:
 case 0xb0:
  VAR_31->eob = 1;
  VAR_31->jump = VAR_32 + 2 + (st8)VAR_33[1];
  VAR_31->fail = VAR_32 + 2;
  VAR_31->type = VAR_6;
  break;
 case 0xd0:
  VAR_31->eob = 1;
  VAR_31->cond = VAR_1;
  VAR_31->jump = VAR_32 + 2 + (st8)VAR_33[1];
  VAR_31->fail = VAR_32 + 2;
  VAR_31->type = VAR_6;
  break;
 case 0xf0:
  VAR_31->eob = 1;
  VAR_31->cond = VAR_0;
  VAR_31->jump = VAR_32 + 2 + (st8)VAR_33[1];
  VAR_31->fail = VAR_32 + 2;
  VAR_31->type = VAR_6;
  break;
 case 0x20:
  VAR_31->jump = (VAR_32 & 0xFF0000) | FUNC_2 (VAR_33+1);
  VAR_31->type = VAR_5;
  break;
 case 0x22:
  VAR_31->jump = VAR_33[1] | VAR_33[2] << 8 | VAR_33[3] << 16;
  VAR_31->type = VAR_5;
  break;
 case 0xfc:
  VAR_31->type = VAR_23;
  break;
 case 0x40:
 case 0x60:
 case 0x6b:
  VAR_31->eob = 1;
  VAR_31->type = VAR_15;
  break;
 case 0xc2:
  if (((st8)VAR_33[1]) & 0x10) {
   VAR_29->X = 0;
  }
  if (((st8)VAR_33[1]) & 0x20) {
   VAR_29->M = 0;
  }
  break;
 case 0xe2:
  if (((st8)VAR_33[1]) & 0x10) {
   VAR_29->X = 1;
  }
  if (((st8)VAR_33[1]) & 0x20) {
   VAR_29->M = 1;
  }
  break;
 }
 return VAR_31->size;
}
