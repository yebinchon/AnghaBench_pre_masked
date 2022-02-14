
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {void* str_asm; } ;


 size_t FUNC_0 (int,int) ;
 void* FUNC_1 (void*,char*,char*,char*,size_t,int,int ,size_t,size_t,...) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_2(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 ut16 VAR_3 = (VAR_2 >> 21) & 0x07;
 ut16 VAR_4 = (VAR_2 >> 5) & 0x07;

 if (VAR_4) {
  VAR_1->str_asm = FUNC_1 (VAR_1->str_asm,
    "%s%s\tp%u, #%u, %s, cr%u, cr%u, #%u", (VAR_2 & 0x00100000)?"mrc":"mcr",
    (VAR_2 & 0x10000000)?"2":"", FUNC_0 (VAR_2, 2), VAR_3,
    VAR_0[FUNC_0 (VAR_2, 3)], FUNC_0 (VAR_2, 4), FUNC_0 (VAR_2, 0), VAR_4);
 }
 else {
  VAR_1->str_asm = FUNC_1 (VAR_1->str_asm,
    "%s%s\tp%u, #%u, %s, cr%u, cr%u", (VAR_2 & 0x00100000)?"mrc":"mcr",
    (VAR_2 & 0x10000000)?"2":"", FUNC_0 (VAR_2, 2), VAR_3,
    VAR_0[FUNC_0 (VAR_2, 3)], FUNC_0 (VAR_2, 4), FUNC_0 (VAR_2, 0));
 }
 return 0;
}
