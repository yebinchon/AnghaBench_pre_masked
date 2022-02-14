
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*) ;

char *FUNC_5(ut8 VAR_0) {
 char *VAR_1 = ((void*)0);
 ut8 VAR_2 = 0x00;
 char *VAR_3 = ((void*)0);

 switch (VAR_0) {
 case 0xE0u:
  VAR_1 = FUNC_4 ("overflow(ac0)");
  break;
 case 0xE1u:
  VAR_1 = FUNC_4 ("overflow(ac1)");
  break;
 case 0xE2u:
  VAR_1 = FUNC_4 ("overflow(ac2)");
  break;
 case 0xE3u:
  VAR_1 = FUNC_4 ("overflow(ac3)");
  break;
 case 0xE4u:
  VAR_1 = FUNC_4 ("tc1");
  break;
 case 0xE5u:
  VAR_1 = FUNC_4 ("tc2");
  break;
 case 0xE6u:
  VAR_1 = FUNC_4 ("carry");
  break;
 case 0xE7u:
  VAR_1 = FUNC_4 ("overflow(govf)");
  break;
 case 0xE8u:
  VAR_1 = FUNC_4 ("tc1 & tc2");
  break;
 case 0xE9u:
  VAR_1 = FUNC_4 ("tc1 & !tc2");
  break;
 case 0xEAu:
  VAR_1 = FUNC_4 ("!tc1 & tc2");
  break;
 case 0xEBu:
  VAR_1 = FUNC_4 ("!tc1 & !tc2");
  break;
 case 0xECu:
  VAR_1 = FUNC_4 ("word_mode");
  break;
 case 0xEDu:
  VAR_1 = FUNC_4 ("byte_mode");
  break;
 case 0xF0u:
  VAR_1 = FUNC_4 ("!overflow(ac0)");
  break;
 case 0xF1u:
  VAR_1 = FUNC_4 ("!overflow(ac1)");
  break;
 case 0xF2u:
  VAR_1 = FUNC_4 ("!overflow(ac2)");
  break;
 case 0xF3u:
  VAR_1 = FUNC_4 ("!overflow(ac3)");
  break;
 case 0xF4u:
  VAR_1 = FUNC_4 ("!tc1");
  break;
 case 0xF5u:
  VAR_1 = FUNC_4 ("!tc2");
  break;
 case 0xF6u:
  VAR_1 = FUNC_4 ("!carry");
  break;
 case 0xF7u:
  VAR_1 = FUNC_4 ("!overflow(govf)");
  break;
 case 0xF8u:
  VAR_1 = FUNC_4 ("tc1 | tc2");
  break;
 case 0xF9u:
  VAR_1 = FUNC_4 ("tc1 | !tc2");
  break;
 case 0xFAu:
  VAR_1 = FUNC_4 ("!tc1 | tc2");
  break;
 case 0xFBu:
  VAR_1 = FUNC_4 ("!tc1 | !tc2");
  break;
 case 0xFCu:
  VAR_1 = FUNC_4 ("tc1 ^ tc2");
  break;
 case 0xFDu:
  VAR_1 = FUNC_4 ("tc1 ^ !tc2");
  break;
 case 0xFEu:
  VAR_1 = FUNC_4 ("!tc1 ^ tc2");
  break;
 case 0xFFu:
  VAR_1 = FUNC_4("!tc1 ^ !tc2");
  break;
 default:
  VAR_2 = VAR_0 >> 5;
  if (VAR_2 != 6 ) {
   VAR_3 = FUNC_2 (VAR_0 & 0x1F);
   switch (VAR_2) {
   case 1u:
    VAR_1 = FUNC_3 (VAR_3, " != #0", 1);
    break;
   case 0u:
    VAR_1 = FUNC_3 (VAR_3, " == #0", 1);
    break;
   case 2u:
    VAR_1 = FUNC_3 (VAR_3, " < #0", 1);
    break;
   case 3u:
    VAR_1 = FUNC_3 (VAR_3, " >= #0", 1);
    break;
   case 4u:
    VAR_1 = FUNC_3 (VAR_3, " > #0", 1);
    break;
   case 5u:
    VAR_1 = FUNC_3 (VAR_3, " <= #0", 1);
   }

   return VAR_1;
  }
  VAR_3 = FUNC_1 ((VAR_0 & 0xF) + 128);
  VAR_2 = (VAR_0 >> 4) - 12;
  if (VAR_2) {
   if (VAR_2 != 1) {
    FUNC_0 (VAR_3);
    return ((void*)0);
   }
   VAR_1 = FUNC_3 (VAR_3, " != #0", 1);
  } else {


   VAR_1 = FUNC_3 (VAR_3, " == #0", 1);
  }
 }
 FUNC_0 (VAR_3);
 return VAR_1;
}
