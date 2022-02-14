
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {void* str_asm; } ;


 void* FUNC_0 (void*,char*,int) ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_0, ut16 VAR_1) {
 ut16 VAR_2 = (VAR_1 & 0x7f) << 2;
 if ((VAR_1 >> 7) & 0x01) {
  VAR_0->str_asm = FUNC_0 (VAR_0->str_asm, "sub sp, sp, #%u", VAR_2);
 }
 else {
  VAR_0->str_asm = FUNC_0 (VAR_0->str_asm, "add sp, sp, #%u", VAR_2);
 }
 return 0;
}
