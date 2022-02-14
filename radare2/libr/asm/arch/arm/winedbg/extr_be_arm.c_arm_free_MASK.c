
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winedbg_arm_insn {struct winedbg_arm_insn* str_asm; struct winedbg_arm_insn* str_hex; } ;


 int FUNC_0 (struct winedbg_arm_insn*) ;

void* FUNC_1(struct winedbg_arm_insn *VAR_0) {
 FUNC_0(VAR_0->str_hex);
 FUNC_0(VAR_0->str_asm);
 FUNC_0(VAR_0);
 return ((void*)0);
}
