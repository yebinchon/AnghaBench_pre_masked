
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {void* str_asm; } ;


 void* FUNC_0 (void*,char*,...) ;
 int * VAR_0 ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_1, ut16 VAR_2) {
 short VAR_3 = (VAR_2 >> 8) & 0x01;
 short VAR_4 = (VAR_2 >> 11) & 0x01;
 short VAR_5;
 short VAR_6;

 for (VAR_5=7;VAR_5>=0;VAR_5--) {
  if ((VAR_2>>VAR_5) & 1) {
   break;
  }
 }
 VAR_6 = VAR_5;

 VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s {", VAR_4 ? "pop" : "push");

 for (VAR_5=0;VAR_5<=7;VAR_5++) {
  if ((VAR_2>>VAR_5) & 1) {
   if (VAR_5 == VAR_6) {
    VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s", VAR_0[VAR_5]);
   }
   else {
    VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s, ", VAR_0[VAR_5]);
   }
  }
 }
 if (VAR_3) {
  VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s%s", VAR_6 ? ", " : "", VAR_4 ? "pc" : "lr");
 }

 VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "}");
 return 0;
}
