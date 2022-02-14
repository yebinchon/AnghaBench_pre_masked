
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*,int ,int,int,int ,int,int,int) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 ut16 VAR_3 = VAR_2 & 0x0f;
 ut16 VAR_4 = (VAR_2 >> 5) & 0x07;
 ut16 VAR_5 = (VAR_2 >> 8) & 0x0f;
 ut16 VAR_6 = (VAR_2 >> 16) & 0x0f;
 ut16 VAR_7 = (VAR_2 >> 20) & 0x01;
 ut16 VAR_8 = (VAR_2 >> 21) & 0x07;

 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "%s%s %u, %u, %s, cr%u, cr%u, {%u}", VAR_7 ? "mrc" : "mcr",
   FUNC_0 (VAR_2), VAR_5, VAR_4, VAR_0[FUNC_1 (VAR_2, 3)], VAR_6, VAR_3, VAR_8);
 return 0;
}
