
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_3__ {int size; void* type; } ;
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

__attribute__((used)) static int FUNC_0(RAnal *VAR_11, RAnalOp *VAR_12, ut64 VAR_13, const ut8 *VAR_14, int VAR_15, RAnalOpMask VAR_16) {
 VAR_12->size = 1;
 if (VAR_15 < 1) {
  return -1;
 }
 VAR_12->type = VAR_9;
 switch (VAR_14[0]) {
 case 0xd0:
 case 0x2e:
  VAR_12->type = VAR_4;
  VAR_12->size = 8;
  break;
 case 0x78:
  VAR_12->type = VAR_6;
  VAR_12->size = 8;
  break;
 case 0xc0:
 case 0xd8:
  VAR_12->type = VAR_0;
  VAR_12->size = 8;
  break;
 case 0x00:
  VAR_12->type = VAR_8;
  break;
 case 0x01:
  VAR_12->type = VAR_5;
  break;
 case 0x51:
 case 0x73:
  VAR_12->type = VAR_2;
  break;
 case 0xac:
  VAR_12->type = VAR_10;
  VAR_12->size = 4;
  break;
 case 0x5a:
  VAR_12->size = 2;
  break;
 case 0x11:
 case 0x18:
  VAR_12->size = 2;
  VAR_12->type = VAR_1;
  break;
 case 0x31:
 case 0xe9:
  VAR_12->size = 3;
  VAR_12->type = VAR_1;
  break;
 case 0xc6:
 case 0xc7:
  VAR_12->size = 8;
  VAR_12->type = VAR_3;
  break;
 case 0xd6:
 case 0x61:
  VAR_12->size = 2;
  VAR_12->type = VAR_0;
  break;
 case 0x62:
  VAR_12->type = VAR_7;
  break;
 case 0xff:
  VAR_12->size = 2;
  break;
 }
 return VAR_12->size;
}
