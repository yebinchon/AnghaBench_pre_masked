
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
typedef int PicMidrangeOpcode ;


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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;

PicMidrangeOpcode FUNC_0 (ut16 VAR_53) {
 if (VAR_53 & (1 << 14)) {
  return VAR_23;
 }

 switch (VAR_53 >> 11) {
 case 0x4: return VAR_13;
 case 0x5: return VAR_20;
 }

 switch (VAR_53 >> 10) {
 case 0x4: return VAR_7;
 case 0x5: return VAR_10;
 case 0x6: return VAR_11;
 case 0x7: return VAR_12;
 }

 switch (VAR_53 >> 9) {
 case 0x19: return VAR_8;
 }

 switch (VAR_53 >> 8) {
 case 0x1: return VAR_15;
 case 0x2: return VAR_47;
 case 0x3: return VAR_18;
 case 0x4: return VAR_25;
 case 0x5: return VAR_5;
 case 0x6: return VAR_52;
 case 0x7: return VAR_2;
 case 0x8: return VAR_28;
 case 0x9: return VAR_17;
 case 0xa: return VAR_21;
 case 0xb: return VAR_19;
 case 0xc: return VAR_44;
 case 0xd: return VAR_43;
 case 0xe: return VAR_49;
 case 0xf: return VAR_22;
 case 0x38: return VAR_24;
 case 0x39: return VAR_4;
 case 0x3a: return VAR_51;
 case 0x30: return VAR_33;
 case 0x34: return VAR_41;
 case 0x3c: return VAR_46;
 case 0x3e: return VAR_1;
 case 0x35: return VAR_26;
 case 0x36: return VAR_27;
 case 0x37: return VAR_6;
 case 0x3b: return VAR_48;
 case 0x3d: return VAR_3;
 }

 switch (VAR_53 >> 7) {
 case 0x1: return VAR_34;
 case 0x62: return VAR_0;
 case 0x63: return VAR_32;
 case 0x7e: return VAR_30;
 case 0x7f: return VAR_36;
 }

 switch (VAR_53 >> 5) {
 case 0x1: return VAR_31;
 }

 switch (VAR_53 >> 3) {
 case 0x2: return VAR_29;
 case 0x3: return VAR_35;
 }

 switch (VAR_53 >> 2) {
 case 0x19: return VAR_50;
 }

 switch (VAR_53) {
 case 0x0: return VAR_37;
 case 0x1: return VAR_39;
 case 0xa: return VAR_14;
 case 0xb: return VAR_9;
 case 0x8: return VAR_42;
 case 0x9: return VAR_40;
 case 0x62: return VAR_38;
 case 0x63: return VAR_45;
 case 0x64: return VAR_16;
 }

 return VAR_23;
}
