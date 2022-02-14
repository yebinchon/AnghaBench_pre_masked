
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_4__ {int size; void* type; int fail; void* jump; int addr; } ;
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
 int VAR_16 ;
 int FUNC_0 (TYPE_1__*,char,int) ;
 int FUNC_1 (int *,int ,int ,char*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_17, RAnalOp *VAR_18, ut64 VAR_19, const ut8 *VAR_20, int VAR_21, RAnalOpMask VAR_22) {
 FUNC_0 (VAR_18, '\0', sizeof (RAnalOp));
 ut16 VAR_23 = FUNC_2 (VAR_20);


 uint8_t VAR_24 = VAR_23 & 0x0F;
 uint16_t VAR_25 = VAR_23 & 0x0FFF;
 uint8_t VAR_26 = VAR_23 & 0xFF;
 VAR_18->size = 2;
 VAR_18->addr = VAR_19;
 VAR_18->type = VAR_14;
 switch (VAR_23 & 0xF000) {
 case 0x0000:
  if (VAR_23 == 0x00EE) {
   VAR_18->type = VAR_8;
  }
  break;
 case 0x1000:
  VAR_18->type = VAR_4;
  VAR_18->jump = VAR_25;
  break;
 case 0x2000:
  VAR_18->type = VAR_2;
  VAR_18->jump = VAR_25;
  break;
 case 0x3000:
  VAR_18->type = VAR_9;
  VAR_18->jump = VAR_19 + VAR_18->size * 2;
  VAR_18->fail = VAR_19 + VAR_18->size;
  break;
 case 0x4000:
  VAR_18->type = VAR_9;
  VAR_18->jump = VAR_19 + VAR_18->size * 2;
  VAR_18->fail = VAR_19 + VAR_18->size;
  break;
 case 0x5000:
  VAR_18->type = VAR_9;
  VAR_18->jump = VAR_19 + VAR_18->size * 2;
  VAR_18->fail = VAR_19 + VAR_18->size;
  break;
 case 0x6000:
  VAR_18->type = VAR_6;
  break;
 case 0x7000:
  VAR_18->type = VAR_0;
  break;
 case 0x8000: {
  switch (VAR_24) {
  case 0x0:
   VAR_18->type = VAR_6;
   break;
  case 0x1:
   VAR_18->type = VAR_7;
   break;
  case 0x2:
   VAR_18->type = VAR_1;
   break;
  case 0x3:
   VAR_18->type = VAR_15;
   break;
  case 0x4:
   VAR_18->type = VAR_0;
   break;
  case 0x5:
   VAR_18->type = VAR_13;
   break;
  case 0x6:
   VAR_18->type = VAR_11;
   break;
  case 0x7:
   VAR_18->type = VAR_13;
   break;
  case 0xE:
   VAR_18->type = VAR_10;
   break;
  }
 } break;
 case 0x9000:
  if (VAR_24 == 0) {
   VAR_18->type = VAR_9;
   VAR_18->jump = VAR_19 + VAR_18->size * 2;
   VAR_18->fail = VAR_19 + VAR_18->size;
  }
  break;
 case 0xA000:
  VAR_18->type = VAR_6;
  break;
 case 0xB000:
  VAR_18->type = VAR_4;

  VAR_18->jump = VAR_25;
  break;
 case 0xE000:
  if (VAR_26 == 0x9E || VAR_26 == 0xA1) {
   FUNC_1 (VAR_17, VAR_16, VAR_19, "KEYPAD");
   VAR_18->type = VAR_3;
   VAR_18->jump = VAR_19 + VAR_18->size * 2;
   VAR_18->fail = VAR_19 + VAR_18->size;
  }
  break;
 case 0xF000: {
  switch (VAR_26) {
  case 0x07:
   VAR_18->type = VAR_6;
   break;
  case 0x0A:
   FUNC_1 (VAR_17, VAR_16, VAR_19, "KEYPAD");
   VAR_18->type = VAR_6;
   break;
  case 0x15:
   VAR_18->type = VAR_6;
   break;
  case 0x18:
   VAR_18->type = VAR_6;
   break;
  case 0x1E:
   VAR_18->type = VAR_0;
   break;
  case 0x29:
   VAR_18->type = VAR_5;
   break;
  case 0x30:
   VAR_18->type = VAR_5;
   break;
  case 0x33:
   VAR_18->type = VAR_12;
   break;
  case 0x55:
   VAR_18->type = VAR_12;
   break;
  case 0x65:
   VAR_18->type = VAR_5;
   break;
  case 0x75:
   VAR_18->type = VAR_12;
   break;
  case 0x85:
   VAR_18->type = VAR_5;
   break;
  }
 } break;
 }
 return VAR_18->size;
}
