
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_2, ut16 VAR_3) {
 ut16 VAR_4 = (VAR_3 >> 11) & 0x03;
 VAR_2->str_asm = FUNC_0 (VAR_2->str_asm, "%s %s, #%u", VAR_0[VAR_4], VAR_1[(VAR_3 >> 8) & 0x07],
   VAR_3 & 0xff);
 return 0;
}
