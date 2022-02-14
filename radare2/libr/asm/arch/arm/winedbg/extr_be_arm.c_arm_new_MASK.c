
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winedbg_arm_insn {int thumb; int * str_asm; int * str_hex; scalar_t__ pc; } ;


 struct winedbg_arm_insn* FUNC_0 (int) ;

struct winedbg_arm_insn* FUNC_1() {
 struct winedbg_arm_insn *VAR_0;
 VAR_0 = FUNC_0(sizeof(struct winedbg_arm_insn));
 VAR_0->pc = 0;
 VAR_0->thumb = 0;
 VAR_0->str_hex = ((void*)0);
 VAR_0->str_asm = ((void*)0);
 return VAR_0;
}
