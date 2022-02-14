
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
typedef int PicBaselineOpcode ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

PicBaselineOpcode FUNC_0(ut16 VAR_37) {
 if (VAR_37 & 0xf000) {
  return VAR_17;
 }

 switch ((VAR_37 >> 6) & 0x3f) {
 case 0x7:
  return VAR_0;
 case 0x5:
  return VAR_2;
 case 0x1:
  if (VAR_37 & (1 << 5)) {
   return VAR_8;
  }
  if ((VAR_37 & 0x1f) == 0) {
   return VAR_9;
  }
  return VAR_17;
 case 0x9:
  return VAR_11;
 case 0x3:
  return VAR_12;
 case 0xb:
  return VAR_13;
 case 0xa:
  return VAR_15;
 case 0xf:
  return VAR_16;
 case 0x4:
  return VAR_19;
 case 0x8:
  return VAR_20;
 case 0x0:
  if (VAR_37 & (1 << 5)) {
   return VAR_23;
  } else {
   switch (VAR_37 & 0x1f) {
   case 0x0:
    return VAR_24;
   case 0x4:
    return VAR_10;
   case 0x2:
    return VAR_25;
   case 0x3:
    return VAR_31;
   case 0x1:
   case 0x5:
   case 0x6:
   case 0x7:
    return VAR_34;
   case 0x10:
   case 0x11:
   case 0x12:
   case 0x13:
   case 0x14:
   case 0x15:
   case 0x16:
   case 0x17:
    return VAR_21;
   case 0x1e:
    return VAR_28;
   case 0x1f:
    return VAR_26;
   default:
    return VAR_17;
   }
  }
 case 0xd:
  return VAR_29;
 case 0xc:
  return VAR_30;
 case 0x2:
  return VAR_32;
 case 0xe:
  return VAR_33;
 case 0x6:
  return VAR_36;
 case 0x10:
 case 0x11:
 case 0x12:
 case 0x13:
  return VAR_3;
 case 0x14:
 case 0x15:
 case 0x16:
 case 0x17:
  return VAR_4;
 case 0x18:
 case 0x19:
 case 0x1a:
 case 0x1b:
  return VAR_5;
 case 0x1c:
 case 0x1d:
 case 0x1e:
 case 0x1f:
  return VAR_6;
 case 0x38:
 case 0x39:
 case 0x3a:
 case 0x3b:
  return VAR_1;
 case 0x24:
 case 0x25:
 case 0x26:
 case 0x27:
  return VAR_7;
 case 0x28:
 case 0x29:
 case 0x2a:
 case 0x2b:
 case 0x2c:
 case 0x2d:
 case 0x2e:
 case 0x2f:
  return VAR_14;
 case 0x34:
 case 0x35:
 case 0x36:
 case 0x37:
  return VAR_18;
 case 0x30:
 case 0x31:
 case 0x32:
 case 0x33:
  return VAR_22;
 case 0x20:
 case 0x21:
 case 0x22:
 case 0x23:
  return VAR_27;
 case 0x3c:
 case 0x3d:
 case 0x3e:
 case 0x3f:
  return VAR_35;
 default:
  return VAR_17;
 }
}
