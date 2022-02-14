
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct winedbg_arm_insn {void* str_asm; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (void*,char*,int ,char*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_4(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 short VAR_3 = (VAR_2 >> 25) & 0x01;
 short VAR_4 = (VAR_2 >> 22) & 0x01;
 short VAR_5 = (VAR_2 >> 16) & 0x01;

 if (VAR_5 || !VAR_3) {
  VAR_1->str_asm = FUNC_3 (VAR_1->str_asm, "msr%s %s, %s", FUNC_1 (VAR_2), VAR_4 ? "spsr" : "cpsr",
    VAR_0[FUNC_2 (VAR_2, 0)]);
  return 0;
 }
 VAR_1->str_asm = FUNC_3 (VAR_1->str_asm, "msr%s %s, #%u", FUNC_1 (VAR_2), VAR_4 ? "spsr" : "cpsr",
   FUNC_0 (VAR_2 & 0xff, 2 * FUNC_2 (VAR_2, 2)));
 return 0;
}
