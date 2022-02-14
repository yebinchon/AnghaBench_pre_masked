
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "bx%s %s", FUNC_0 (VAR_2), VAR_0[FUNC_1 (VAR_2, 0)]);
 return 0;
}
