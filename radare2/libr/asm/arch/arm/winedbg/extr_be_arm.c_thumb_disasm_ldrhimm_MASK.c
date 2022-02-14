
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ,char*,char*,int ,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_1, ut16 VAR_2) {
 ut16 VAR_3 = (VAR_2 & 0x07c0) >> 5;
 VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s %s, [%s, #%u]", (VAR_2 & 0x0800)?"ldrh":"strh",
   VAR_0[VAR_2 & 0x07], VAR_0[(VAR_2 >> 3) & 0x07], VAR_3);
 return 0;
}
