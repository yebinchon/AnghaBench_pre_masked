
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*,char*,int ,char*,int ,int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 short VAR_3 = (VAR_2 >> 22) & 0x01;
 short VAR_4 = (VAR_2 >> 21) & 0x01;
 short VAR_5 = (VAR_2 >> 20) & 0x01;

 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "%s%s%s%s %s, %s, %s, %s", VAR_3 ? "s" : "u", VAR_4 ? "mlal" : "mull",
   FUNC_0 (VAR_2), VAR_5 ? "s" : "",
   VAR_0[FUNC_1 (VAR_2, 3)], VAR_0[FUNC_1 (VAR_2, 4)],
   VAR_0[FUNC_1 (VAR_2, 0)], VAR_0[FUNC_1 (VAR_2, 2)]);
 return 0;
}
