
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*,int ,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 short VAR_3 = (VAR_2 >> 22) & 0x01;

 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "mov%s%s %s, #%u", VAR_3 ? "t" : "w", FUNC_0 (VAR_2),
   VAR_0[FUNC_1 (VAR_2, 3)],
   (FUNC_1 (VAR_2, 4) << 12) | (VAR_2 & 0x0fff));
 return 0;
}
