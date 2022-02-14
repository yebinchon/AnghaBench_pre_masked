
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct winedbg_arm_insn {int str_asm; } ;


 int FUNC_0 (int ,char*,char*,char*,int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static ut16 FUNC_1(struct winedbg_arm_insn *VAR_1, ut16 VAR_2) {
 VAR_1->str_asm = FUNC_0 (VAR_1->str_asm, "%s%s %s, [%s, %s]",
   (VAR_2 & 0x0800)?"ldr":"str", (VAR_2 & 0x0400)?"b":"",
   VAR_0[VAR_2 & 0x07], VAR_0[(VAR_2 >> 3) & 0x07],
   VAR_0[(VAR_2 >> 6) & 0x07]);
 return 0;
}
