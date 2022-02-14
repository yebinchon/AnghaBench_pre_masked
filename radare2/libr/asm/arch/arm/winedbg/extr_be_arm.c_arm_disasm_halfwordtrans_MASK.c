
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {void* str_asm; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 void* FUNC_2 (void*,char*,...) ;
 short* VAR_0 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 short VAR_3 = (VAR_2 >> 5) & 0x01;
 short VAR_4 = (VAR_2 >> 6) & 0x01;
 short VAR_5 = (VAR_2 >> 20) & 0x01;
 short VAR_6 = (VAR_2 >> 21) & 0x01;
 short VAR_7 = (VAR_2 >> 22) & 0x01;
 short VAR_8 = (VAR_2 >> 23) & 0x01;
 short VAR_9 = (VAR_2 >> 24) & 0x01;
 short VAR_10 = ((VAR_2 >> 4) & 0xf0) + (VAR_2 & 0x0f);

 if (!VAR_8){
  VAR_10 *= -1;
 }

 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "%s%s%s%s%s", VAR_5 ? "ldr" : "str", VAR_4 ? "s" : "",
   VAR_3 ? "h" : (VAR_4 ? "b" : ""), VAR_6 ? "t" : "", FUNC_0 (VAR_2));
 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, " %s, ", VAR_0[FUNC_1 (VAR_2, 3)]);
 if (VAR_9) {
  if (VAR_7) {
   VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "[%s, #%d]", VAR_0[FUNC_1 (VAR_2, 4)], VAR_10);
  }
  else {
   VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "[%s, %s]", VAR_0[FUNC_1 (VAR_2, 4)],
     VAR_0[FUNC_1 (VAR_2, 0)]);
  }
 } else {
  if (VAR_7) {
   VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "[%s], #%d", VAR_0[FUNC_1 (VAR_2, 4)], VAR_10);
  }
  else {
   VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "[%s], %s", VAR_0[FUNC_1 (VAR_2, 4)],
     VAR_0[FUNC_1 (VAR_2, 0)]);
  }
 }
 return 0;
}
