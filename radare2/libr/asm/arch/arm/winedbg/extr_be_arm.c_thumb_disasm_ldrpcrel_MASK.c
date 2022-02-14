
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_1, ut16 VAR_2) {
 ut16 VAR_3 = (VAR_2 & 0xff) << 2;
 VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "ldr %s, [pc, #%u]", VAR_0[(VAR_2 >> 8) & 0x07], VAR_3);
 return 0;
}
