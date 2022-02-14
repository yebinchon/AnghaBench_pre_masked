
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {void* str_asm; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int,int) ;
 void* FUNC_3 (void*,char*,...) ;
 int * VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static ut32 FUNC_4(struct winedbg_arm_insn *VAR_3, ut32 VAR_4) {
 short VAR_5 = (VAR_4 >> 20) & 0x01;
 short VAR_6 = (VAR_4 >> 21) & 0x0f;
 short VAR_7 = (VAR_4 >> 25) & 0x01;
 short VAR_8 = (VAR_6 & 0x0d) == 0x0d;
 short VAR_9 = (VAR_6 & 0x0c) == 0x08;

 VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "%s%s%s", VAR_0[VAR_6], VAR_5 ? "s" : "", FUNC_1 (VAR_4));
 if (!VAR_9) {
  VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, " %s, ", VAR_1[FUNC_2 (VAR_4, 3)]);
 }
 else {
  VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, " ");
 }
 if (VAR_8) {
  if (VAR_7) {
   VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "#%u", FUNC_0 (VAR_4 & 0xff, 2 * FUNC_2 (VAR_4, 2)));
  }
  else {
   VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "%s", VAR_1[FUNC_2 (VAR_4, 0)]);
  }
 } else {
  if (VAR_7) {
   VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "%s, #%u", VAR_1[FUNC_2 (VAR_4, 4)],
     FUNC_0 (VAR_4 & 0xff, 2 * FUNC_2 (VAR_4, 2)));
  }
  else if (((VAR_4 >> 4) & 0xff) == 0x00) {
   VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "%s, %s", VAR_1[FUNC_2 (VAR_4, 4)],
     VAR_1[FUNC_2 (VAR_4, 0)]);
  }
  else if (((VAR_4 >> 4) & 0x09) == 0x01) {
   VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "%s, %s, %s %s", VAR_1[FUNC_2 (VAR_4, 4)],
     VAR_1[FUNC_2 (VAR_4, 0)],
     VAR_2[(VAR_4 >> 5) & 0x03], VAR_1[(VAR_4 >> 8) & 0x0f]);
  }
  else if (((VAR_4 >> 4) & 0x01) == 0x00) {
   VAR_3->str_asm = FUNC_3 (VAR_3->str_asm, "%s, %s, %s #%d", VAR_1[FUNC_2 (VAR_4, 4)],
     VAR_1[FUNC_2 (VAR_4, 0)], VAR_2[(VAR_4 >> 5) & 0x03],
     (VAR_4 >> 7) & 0x1f);
  }
  else {
   return VAR_4;
  }
 }
 return 0;
}
