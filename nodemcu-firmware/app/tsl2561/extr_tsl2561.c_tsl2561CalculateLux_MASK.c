
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
typedef unsigned long uint16_t ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 unsigned long VAR_30 ;
 unsigned long VAR_31 ;
 unsigned long VAR_32 ;
 unsigned long VAR_33 ;
 unsigned long VAR_34 ;
 int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 unsigned int VAR_49 ;
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
 int VAR_52 ;
 scalar_t__ VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;

uint32_t FUNC_0(uint16_t VAR_57, uint16_t VAR_58) {
 unsigned long VAR_59;
 unsigned long VAR_60;
 unsigned long VAR_61;

 switch (VAR_55) {
 case 128:
  VAR_59 = VAR_17;
  break;
 case 129:
  VAR_59 = VAR_18;
  break;
 default:
  VAR_59 = (1 << VAR_16);
  break;
 }


 if (!VAR_54)
  VAR_59 = VAR_59 << 4;


 VAR_61 = (VAR_57 * VAR_59) >> VAR_16;
 VAR_60 = (VAR_58 * VAR_59) >> VAR_16;


 unsigned long VAR_62 = 0;
 if (VAR_61 != 0)
  VAR_62 = (VAR_60 << (VAR_52 + 1)) / VAR_61;


 unsigned long VAR_63 = (VAR_62 + 1) >> 1;

 unsigned int VAR_64, VAR_65;

 if (VAR_56 == VAR_53){
  if ((VAR_63 >= 0) && (VAR_63 <= VAR_19)) {
   VAR_64 = VAR_0;
   VAR_65 = VAR_36;
  } else if (VAR_63 <= VAR_21) {
   VAR_64 = VAR_2;
   VAR_65 = VAR_38;
  } else if (VAR_63 <= VAR_23) {
   VAR_64 = VAR_4;
   VAR_65 = VAR_40;
  } else if (VAR_63 <= VAR_25) {
   VAR_64 = VAR_6;
   VAR_65 = VAR_42;
  } else if (VAR_63 <= VAR_27) {
   VAR_64 = VAR_8;
   VAR_65 = VAR_44;
  } else if (VAR_63 <= VAR_29) {
   VAR_64 = VAR_10;
   VAR_65 = VAR_46;
  } else if (VAR_63 <= VAR_31) {
   VAR_64 = VAR_12;
   VAR_65 = VAR_48;
  } else if (VAR_63 > VAR_33) {
   VAR_64 = VAR_14;
   VAR_65 = VAR_50;
  }
 }
 else{
  if ((VAR_63 >= 0) && (VAR_63 <= VAR_20))
  { VAR_64=VAR_1; VAR_65=VAR_37;}
  else if (VAR_63 <= VAR_22)
  { VAR_64=VAR_3; VAR_65=VAR_39;}
  else if (VAR_63 <= VAR_24)
  { VAR_64=VAR_5; VAR_65=VAR_41;}
  else if (VAR_63 <= VAR_26)
  { VAR_64=VAR_7; VAR_65=VAR_43;}
  else if (VAR_63 <= VAR_28)
  { VAR_64=VAR_9; VAR_65=VAR_45;}
  else if (VAR_63 <= VAR_30)
  { VAR_64=VAR_11; VAR_65=VAR_47;}
  else if (VAR_63 <= VAR_32)
  { VAR_64=VAR_13; VAR_65=VAR_49;}
  else if (VAR_63 > VAR_34)
  { VAR_64=VAR_15; VAR_65=VAR_51;}
 }

 unsigned long VAR_66;
 VAR_66 = ((VAR_61 * VAR_64) - (VAR_60 * VAR_65));


 if (VAR_66 < 0)
  VAR_66 = 0;


 VAR_66 += (1 << (VAR_35 - 1));


 uint32_t VAR_67 = VAR_66 >> VAR_35;


 return VAR_67;
}
