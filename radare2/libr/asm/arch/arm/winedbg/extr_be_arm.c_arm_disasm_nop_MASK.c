
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static ut32 FUNC_2(struct winedbg_arm_insn *VAR_0, ut32 VAR_1) {
 VAR_0->str_asm = FUNC_1 (VAR_0->str_asm, "nop%s", FUNC_0 (VAR_1));
 return 0;
}
