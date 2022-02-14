
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {void* str_asm; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 void* FUNC_2 (void*,char*,char*,...) ;
 int * VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_2, ut32 VAR_3) {
 short VAR_4 = (VAR_3 >> 20) & 0x01;
 short VAR_5 = (VAR_3 >> 21) & 0x01;
 short VAR_6 = (VAR_3 >> 22) & 0x01;
 short VAR_7 = (VAR_3 >> 23) & 0x03;
 short VAR_8;
 short VAR_9=15;

 for (VAR_8=15;VAR_8>=0;VAR_8--) {
  if ((VAR_3>>VAR_8) & 1) {
   VAR_9 = VAR_8;
   break;
  }
 }

 VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "%s%s%s %s%s, {", VAR_4 ? "ldm" : "stm", VAR_0[VAR_7],
   FUNC_0 (VAR_3), VAR_1[FUNC_1 (VAR_3, 4)], VAR_5 ? "!" : "");
 for (VAR_8=0;VAR_8<=15;VAR_8++) {
  if ((VAR_3>>VAR_8) & 1) {
   if (VAR_8 == VAR_9) {
    VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "%s", VAR_1[VAR_8]);
   } else {
    VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "%s, ", VAR_1[VAR_8]);
   }
  }
 }
 VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "}%s", VAR_6 ? "^" : "");
 return 0;
}
