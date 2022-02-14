
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {void* str_asm; } ;


 void* FUNC_0 (void*,char*,...) ;
 int* VAR_0 ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_1, ut16 VAR_2) {
 ut16 VAR_3 = (VAR_2 >> 9) & 0x01;
 ut16 VAR_4 = (VAR_2 >> 10) & 0x01;

 VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s %s, %s, ", VAR_3 ? "sub" : "add",
   VAR_0[VAR_2 & 0x07], VAR_0[(VAR_2 >> 3) & 0x07]);
 if (VAR_4) {
  VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "#%d", (VAR_2 >> 6) & 0x07);
 }
 else {
  VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s", VAR_0[(VAR_2 >> 6) & 0x07]);
 }
 return 0;
}
