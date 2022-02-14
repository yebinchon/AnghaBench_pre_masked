
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 char* FUNC_0 (int,int *) ;
 int FUNC_1 (char*,char*,...) ;

const char * FUNC_2(ut8 VAR_0, char * VAR_1)
{

 if ((VAR_0 >> 4) <= 5) {
  static const char * VAR_2[6] = { "==", "!=", "<", "<=", ">", ">=" };
  FUNC_1(VAR_1, "%s %s 0", FUNC_0(VAR_0 & 15, ((void*)0)), VAR_2[(VAR_0 >> 4) & 7]);
  return VAR_1;
 }


 if ((VAR_0 >> 2) == 0x18) {
  FUNC_1(VAR_1, "overflow(ac%d)", VAR_0 & 3);
  return VAR_1;
 }


 if ((VAR_0 >> 2) == 0x1C) {
  FUNC_1(VAR_1, "!overflow(ac%d)", VAR_0 & 3);
  return VAR_1;
 }

 switch (VAR_0) {
 case 0x64: return "tc1";
 case 0x65: return "tc2";
 case 0x66: return "carry";
 case 0x74: return "!tc1";
 case 0x75: return "!tc2";
 case 0x76: return "!carry";

 case 0x68: return "tc1 & tc2";
 case 0x69: return "tc1 & !tc2";
 case 0x6A: return "!tc1 & tc2";
 case 0x6B: return "!tc1 & !tc2";

 case 0x78: return "tc1 | tc2";
 case 0x79: return "tc1 | !tc2";
 case 0x7A: return "!tc1 | tc2";
 case 0x7B: return "!tc1 | !tc2";

 case 0x7C: return "tc1 ^ tc2";
 case 0x7D: return "tc1 ^ !tc2";
 case 0x7E: return "!tc1 ^ tc2";
 case 0x7F: return "!tc1 ^ !tc2";
 }

 return "invalid";
}
