
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {void* str_asm; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 void* FUNC_2 (void*,char*,char*,...) ;
 char** VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_2, ut32 VAR_3) {
 short VAR_4 = (VAR_3 >> 20) & 0x01;
 short VAR_5 = (VAR_3 >> 21) & 0x01;
 short VAR_6 = (VAR_3 >> 22) & 0x01;
 short VAR_7 = (VAR_3 >> 23) & 0x01;
 short VAR_8 = (VAR_3 >> 24) & 0x01;
 short VAR_9 = !((VAR_3 >> 25) & 0x01);
 short VAR_10 = VAR_3 & 0x0fff;

 if (!VAR_7) {
  VAR_10 *= -1;
 }

 VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "%s%s%s%s", VAR_4 ? "ldr" : "str", VAR_6 ? "b" : "", VAR_5 ? "t" : "",
   FUNC_0 (VAR_3));
 VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, " %s, ", VAR_0[FUNC_1 (VAR_3, 3)]);
 if (VAR_8) {
  if (VAR_9) {
   VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "[%s, #%d]", VAR_0[FUNC_1 (VAR_3, 4)], VAR_10);
  }
  else if (((VAR_3 >> 4) & 0xff) == 0x00) {
   VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "[%s, %s]", VAR_0[FUNC_1 (VAR_3, 4)],
     VAR_0[FUNC_1 (VAR_3, 0)]);
  }
  else if (((VAR_3 >> 4) & 0x01) == 0x00) {
   VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "[%s, %s, %s #%d]", VAR_0[FUNC_1 (VAR_3, 4)],
     VAR_0[FUNC_1 (VAR_3, 0)], VAR_1[(VAR_3 >> 5) & 0x03],
     (VAR_3 >> 7) & 0x1f);
  }
  else {
   return VAR_3;
  }
 } else {
  if (VAR_9) {
   VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "[%s], #%d", VAR_0[FUNC_1 (VAR_3, 4)], VAR_10);
  }
  else if (((VAR_3 >> 4) & 0xff) == 0x00) {
   VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "[%s], %s", VAR_0[FUNC_1 (VAR_3, 4)],
     VAR_0[FUNC_1 (VAR_3, 0)]);
  }
  else if (((VAR_3 >> 4) & 0x01) == 0x00) {
   VAR_2->str_asm = FUNC_2 (VAR_2->str_asm, "[%s], %s, %s #%d", VAR_0[FUNC_1 (VAR_3, 4)],
     VAR_0[FUNC_1 (VAR_3, 0)], VAR_1[(VAR_3 >> 5) & 0x03],
     (VAR_3 >> 7) & 0x1f);
  }
  else {
   return VAR_3;
  }
 }
 return 0;
}
