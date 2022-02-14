
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int,int,int,int,int,int) ;

__attribute__((used)) static ut32 FUNC_2(struct winedbg_arm_insn *VAR_0, ut32 VAR_1) {
 ut16 VAR_2 = VAR_1 & 0x0f;
 ut16 VAR_3 = (VAR_1 >> 5) & 0x07;
 ut16 VAR_4 = (VAR_1 >> 8) & 0x0f;
 ut16 VAR_5 = (VAR_1 >> 12) & 0x0f;
 ut16 VAR_6 = (VAR_1 >> 16) & 0x0f;
 ut16 VAR_7 = (VAR_1 >> 20) & 0x0f;

 VAR_0->str_asm = FUNC_1 (VAR_0->str_asm, "cdp%s %u, %u, cr%u, cr%u, cr%u, {%u}", FUNC_0 (VAR_1),
   VAR_4, VAR_3, VAR_5, VAR_6, VAR_2, VAR_7);
 return 0;
}
