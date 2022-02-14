
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r_bin_te_obj_t {TYPE_1__* header; } ;
struct TYPE_2__ {int Machine; } ;
 char* FUNC_0 (char*) ;

char* FUNC_1(struct r_bin_te_obj_t* VAR_0) {
 char *VAR_1;
 if (!VAR_0) {
  return ((void*)0);
 }
 switch (VAR_0->header->Machine) {
 case 155:
  VAR_1 = FUNC_0 ("Alpha");
  break;
 case 154:
  VAR_1 = FUNC_0 ("Alpha 64");
  break;
 case 153:
  VAR_1 = FUNC_0 ("AM33");
  break;
 case 152:
  VAR_1 = FUNC_0 ("AMD 64");
  break;
 case 151:
  VAR_1 = FUNC_0 ("ARM");
  break;
 case 150:
  VAR_1 = FUNC_0 ("CEE");
  break;
 case 149:
  VAR_1 = FUNC_0 ("CEF");
  break;
 case 148:
  VAR_1 = FUNC_0 ("EBC");
  break;
 case 147:
  VAR_1 = FUNC_0 ("i386");
  break;
 case 146:
  VAR_1 = FUNC_0 ("ia64");
  break;
 case 145:
  VAR_1 = FUNC_0 ("M32R");
  break;
 case 144:
  VAR_1 = FUNC_0 ("M68K");
  break;
 case 143:
  VAR_1 = FUNC_0 ("Mips 16");
  break;
 case 142:
  VAR_1 = FUNC_0 ("Mips FPU");
  break;
 case 141:
  VAR_1 = FUNC_0 ("Mips FPU 16");
  break;
 case 140:
  VAR_1 = FUNC_0 ("PowerPC");
  break;
 case 139:
  VAR_1 = FUNC_0 ("PowerPC FP");
  break;
 case 138:
  VAR_1 = FUNC_0 ("R10000");
  break;
 case 137:
  VAR_1 = FUNC_0 ("R3000");
  break;
 case 136:
  VAR_1 = FUNC_0 ("R4000");
  break;
 case 135:
  VAR_1 = FUNC_0 ("SH3");
  break;
 case 134:
  VAR_1 = FUNC_0 ("SH3DSP");
  break;
 case 133:
  VAR_1 = FUNC_0 ("SH3E");
  break;
 case 132:
  VAR_1 = FUNC_0 ("SH4");
  break;
 case 131:
  VAR_1 = FUNC_0 ("SH5");
  break;
 case 130:
  VAR_1 = FUNC_0 ("Thumb");
  break;
 case 129:
  VAR_1 = FUNC_0 ("Tricore");
  break;
 case 128:
  VAR_1 = FUNC_0 ("WCE Mips V2");
  break;
 default:
  VAR_1 = FUNC_0 ("unknown");
 }
 return VAR_1;
}
