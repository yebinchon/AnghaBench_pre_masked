
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_0, ut16 VAR_1) {
 ut16 VAR_2 = VAR_1 & 0x00ff;
 VAR_0->str_asm = FUNC_0 (VAR_0->str_asm, "swi #%d", VAR_2);
 return 0;
}
